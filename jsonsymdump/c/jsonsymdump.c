/****************************************************************************

* Description:  Dumps Watcom-supported symbol files to JSON. 
* Based on Open Watcom dipdump utility

* Original copyright notice in dipdump.c:
*
*                            Open Watcom Project
*
*    Portions Copyright (c) 1983-2002 Sybase, Inc. All Rights Reserved.
*
*  ========================================================================
*
*    This file contains Original Code and/or Modifications of Original
*    Code as defined in and that are subject to the Sybase Open Watcom
*    Public License version 1.0 (the 'License'). You may not use this file
*    except in compliance with the License. BY USING THIS FILE YOU AGREE TO
*    ALL TERMS AND CONDITIONS OF THE LICENSE. A copy of the License is
*    provided with the Original Code and Modifications, and is also
*    available at www.sybase.com/developer/opensource.
*
*    The Original Code and all software distributed under the License are
*    distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
*    EXPRESS OR IMPLIED, AND SYBASE AND ALL CONTRIBUTORS HEREBY DISCLAIM
*    ALL SUCH WARRANTIES, INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF
*    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR
*    NON-INFRINGEMENT. Please see the License for the specific language
*    governing rights and limitations under the License.
*
*  ========================================================================
*
****************************************************************************/


#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>
#include "walloca.h"
#include "bool.h"
#include "dip.h"
#include "digcli.h"

FILE *_output;

/**
 * Prints an error message.
 *
 * @returns Appropriate exit code for an error.
 *
 * @param   pszFormat   The format string (passed to vfprintf).
 * @param   ...         Format arguments.
 */
static int ErrorMsg( const char *pszFormat, ... )
{
    va_list va;

    fprintf( stderr, "jsonsymdump: error: " );
    va_start( va, pszFormat );
    vfprintf( stderr, pszFormat, va);
    va_end( va );
    return( 1 );
}

/**
 * Prints an informational message.
 *
 * @param   pszFormat   The format string (passed to vfprintf).
 * @param   ...         Format arguments.
 */
static void InfoMsg( const char *pszFormat, ... )
{
    va_list va;

    fprintf( stderr, "jsonsymdump: info: " );
    va_start( va, pszFormat );
    vfprintf( stderr, pszFormat, va);
    va_end( va );
}


/**
 * WalkSymList callback, the module pass.
 *
 * @returns WR_CONTINUE;
 * @param   info    Symbol walk info.
 * @param   sym     The Symbol.
 * @param   _idx    Pointer to the symbol index number.
 */
static walk_result SymbolCallback( sym_walk_info info, sym_handle *sym, void *_idx )
{
    char            buf[2048];
    int             len;
    dip_status      rc;
    sym_info        sinfo;
	char			typeStr[5];
	typeStr[4] = '\0';

    /* symbol info */
    rc = SymInfo( sym, NULL, &sinfo );
    if( rc == DS_OK ) {
        switch( sinfo.kind ) {
        case SK_NONE:       strncpy(typeStr, "NONE", 4); break;
        case SK_CODE:       strncpy(typeStr, "CODE", 4); break;
        case SK_DATA:       strncpy(typeStr, "DATA", 4); break;
        case SK_CONST:      strncpy(typeStr, "CNST", 4); break;
        case SK_TYPE:       strncpy(typeStr, "TYPE", 4); break;
        case SK_PROCEDURE:  strncpy(typeStr, "PROC", 4); break;
        case SK_NAMESPACE:  strncpy(typeStr, "NSPC", 4); break;
        default:            printf("Failed to recognize symbol kind %#x!", sinfo.kind); break;
        }
    } else {
        printf("SymInfo failed - rc=%#x  ", rc );
        memset( &sinfo, 0, sizeof( sinfo ) );
        sinfo.kind= SK_NONE;
    }

    /* try get the name */
	buf[0] = '\0';
	len = SymName( sym, NULL, SN_DEMANGLED, buf, sizeof( buf ) );
	if( !len ) {
		len = SymName( sym, NULL, SN_OBJECT, buf, sizeof( buf ) );
	}
	if( !len ) {
		len = SymName( sym, NULL, SN_SOURCE, buf, sizeof( buf ) );
	}
	
	fprintf(_output, 
"\t{\n\
	\t\"type\": \"%s\",\n\
	\t\"name\": \"%s\"\n\
\t},\n",
		typeStr,
		buf);

    return( WR_CONTINUE );
}

/**
 * WalkFileList callback, the module pass.
 *
 * @returns WR_CONTINUE
 * @param   cue     The file.
 * @param   ignored Unused user argument.
 */
static walk_result FileCallback( cue_handle *cue, void *ignored )
{
    long            prev_line = -1;
    cue_handle      *next_cue = alloca( DIPHandleSize( HK_CUE ) );
    cue_handle      *prev_cue = NULL;
    cue_fileid      file_id   = CueFileId( cue );
    char            buf[2048];
    int             len;
    dip_status      rc;
	long 			nbrLines;
	long 			line;
	int				i;

    /* filename */
    buf[0] = '\0';
    len = CueFile( cue, buf, sizeof( buf ) );
    if( len > 0 ) {
		// Replace slash characters to avoid having to escape them
		for (i = 0; i < len; i++) {
			if (buf[i] == '\\')
				buf[i] = '/';
		}
		fprintf(_output, "\t\"fileName\": \"%s\",\n", buf );
    } else {
		fprintf(_output, "\t\"fileId\": \"%lx (len=%d)\",\n", file_id, len );
    }
	
	nbrLines = 0;

    /* walk lines */
    do {
        line   = CueLine( cue );

		if (line > nbrLines)
			nbrLines = line;

        /* next */
        rc = CueAdjust( cue, 1, next_cue );
        prev_cue  = cue;
        cue       = next_cue;
        next_cue  = prev_cue;
        prev_line = line;
    } while( rc == DS_OK );
	
	fprintf(_output, "\t\"lineCount\": %d,\n", nbrLines );

    return( WR_STOP );
}


/**
 * WalkModList callback.
 *
 * @returns WR_CONTINUE
 * @param   mh          The module.
 * @param   _idx        Pointer to the current module index.
 */
static walk_result ModCallback( mod_handle mh, void *_idx )
{
    int         *idx = (int *)_idx;
    char        namebuf[2048];
    int         len;
    const char  *lang;
    address     addr = {0};

    /* address */
    addr = ModAddr( mh );

    /* language and name */
    lang = ModSrcLang( mh );
    len = ModName( mh, namebuf, sizeof(namebuf) );
    if( !len ) {
        namebuf[0] = '\0';
    }
	
    fprintf(_output, 
"{\n\
	\"index\": %d, \n\
	\"offset\": \"%04x:%08lx\",\n\
	\"flags\": \"%c%c%c%c\",\n\
	\"lang\": \"%s\",\n\
	\"name\": \"%s\",\n",
				++*idx,
				addr.mach.segment, (long)addr.mach.offset,
				ModHasInfo( mh, HK_IMAGE ) == DS_OK ? 'I' : '-',
				ModHasInfo( mh, HK_TYPE  ) == DS_OK ? 'T' : '-',
				ModHasInfo( mh, HK_CUE   ) == DS_OK ? 'C' : '-',
				ModHasInfo( mh, HK_SYM   ) == DS_OK ? 'S' : '-',
				lang,
				namebuf
			);
	
	/* this entry contains line refs */
	if( ModHasInfo( mh, HK_CUE ) == DS_OK ) {
		WalkFileList( mh, FileCallback, _idx );
	}
	
	/* this entry contains symbol refs */
	if( ModHasInfo( mh, HK_SYM ) == DS_OK ) {
        fprintf(_output, "%s", "\t\"symbols\": [\n");
        WalkSymList( SS_MODULE, &mh, SymbolCallback, _idx );
		fprintf(_output, "%s", "\t]\n");
    }
	
	fprintf(_output, "%s", "},\n");

    return( WR_CONTINUE );
}

/**
 * Dumps the loaded debug info.
 *
 * @returns 0 on success, exit code on failure.
 * @param   file    The filename.
 * @param   mh      The DIP/DIG module handle.
 * @param   proc    The process which the module is loaded into.
 */
static int DumpIt( const char *file, mod_handle mh, process_info *proc )
{
    walk_result     walkres;
    int             i;
    
	// enumerate all modules, calling ModCallback for each
	fprintf(_output, "\"moduleRefs\": [\n");
	i = 0;
	walkres = WalkModList( mh, ModCallback, &i );
	fprintf(_output, "%s", "]\n");

    return( 0 );
}

/**
 * Initializes DIP.
 *
 * @returns success indicator.
 * @param   dips    Pointer to an array of dip names terminated by a NULL entry.
 */
static bool InitDIP( char **dips )
{
    bool    rc = FALSE;

    if( !(DIPInit() & DS_ERR) ) {
        char        *ptr;
        unsigned    dips_loaded = 0;

        for( ptr = *dips++; ptr; ptr = *dips++ ) {
            int     rc = DIPLoad( ptr );

            if( rc & DS_ERR ) {
                rc &= ~DS_ERR;
                switch( rc ) {
                case DS_FOPEN_FAILED:
                    ErrorMsg( "%s - not found\n", ptr );
                    break;
                case DS_INVALID_DIP_VERSION:
                    ErrorMsg( "%s - wrong DIP version\n", ptr );
                    break;
                case DS_INVALID_DIP:
                    ErrorMsg( "%s - invalid DIP\n", ptr );
                    break;
                case DS_TOO_MANY_DIPS:
                    ErrorMsg( "%s - too many DIPs\n", ptr );
                    break;
                default:
                    ErrorMsg( "%s - rc=%#x (%d)\n", ptr, rc, rc );
                    break;
                }
            } else {
                InfoMsg( "Loaded DIP %s\n", ptr);
                dips_loaded++;
            }
        }

        rc = dips_loaded > 0;
        if( !dips_loaded ) {
            ErrorMsg( "Failed to load any DIPs!\n");
            DIPFini();
        }
    }
    return( rc );
}

/**
 * Terminates the DIP manager.
 */
static void TermDIP( void )
{
    /// @todo implement me
}


/**
 * Dumps the debug information in a file.
 *
 * @returns 0 on success, exit code on failure.
 * @param   file    The filename.
 * @param   dips    The dips to load and use.
 */
static int DumpFile( const char *file, char **dips )
{
    int             rc = 1;
    dig_fhandle     fh;
	
	_output = fopen("symbols.json", "w");
	setvbuf(_output, NULL, _IONBF, 0);	// if we don't disable buffering, we get crashes >:(

    /*
     * Open the file
     */
    fh = DIGCliOpen( file, DIG_READ );
    if( fh == DIG_NIL_HANDLE ) {
        return( ErrorMsg( "Failed to open '%s'\n", file ) );
    }

    /*
     * Init DIP, create a process and load the file into the process.
     */
    if( InitDIP( dips ) ) {
        process_info    *proc = DIPCreateProcess();

        if( proc ) {
            int         prty;
            mod_handle  mh = 0;

            for( prty = DIPPriority( 0 );
                 prty != 0;
                 prty = DIPPriority( prty ) ) {
                DIGCliSeek( fh, 0, DIG_ORG );
                mh = DIPLoadInfo( fh, 0, prty );
                if( mh != NO_MOD )
                    break;
            }
            if( mh != NO_MOD ) {
                DIPMapInfo( mh, NULL );
                InfoMsg( "DIP opened '%s' at prty=%d, mh=%lx\n", file, prty, (long)mh);

                /*
                 * Enumerate the debug info.
                 */
                rc = DumpIt( file, mh, proc );
				
				InfoMsg( "Symbol file dumped to symbols.json\n");

                /*
                 * Cleanup.
                 */
                DIPUnloadInfo( mh );
            } else {
                ErrorMsg( "DIP failed to open '%s'.\n", file);
            }
            DIPDestroyProcess( proc );
        }
        TermDIP();
    }
    DIGCliClose( fh );
	fclose(_output);
    return( rc );
}


static int PrintUsage( void )
{
    printf( "Usage:  jsonsymdump [-h?] [-d<dip>] symbol file \n"
            "jsonsymdump reads and dumps symbol files to symbols.json \n"
            "Options: -d<dip> attempts to load specified DIP\n"
            "         -h      displays this help"
            "\n" );
    return( 1 );
}


int main( int argc, char **argv )
{
    char    *dips[16] = { 0 };
    int     next_dip = 0;
    int     c;
    char    *s;
	int 	rc;

    /* Process command line options */
    if( argc < 2 ) {
        return( PrintUsage() );
    }

    while( (c = getopt( argc, argv, ":hd:" )) != EOF ) {
        switch( c ) {
            case 'd': {
                char    *dip = optarg;

                if( next_dip >= sizeof( dips ) / sizeof( dips[0] ) ) {
                    return( ErrorMsg( "too many DIPs!\n" ) );
                }
                dips[next_dip++] = dip;
                break;
            }
            case 'h':
            default:
                return( PrintUsage() );
        }
    }

    /* Add default DIPs at end of list. */
    s = DIPDefaults;
    while( *s ) {
        if( next_dip >= sizeof( dips ) / sizeof( dips[0] ) ) {
            return( ErrorMsg( "too many DIPs!\n" ) );
        }
        dips[next_dip++] = s;
        s += strlen( s ) + 1;
    }

	rc = DumpFile( argv[optind], dips );
	return rc;
}
