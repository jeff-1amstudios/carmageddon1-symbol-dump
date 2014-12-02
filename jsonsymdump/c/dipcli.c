/****************************************************************************
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
* Description:  Dummy DIP client routines.
*
****************************************************************************/


#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include "dip.h"
#include "dipcli.h"

#if 0
# define printf(a)     do { printf a; } while( 0 )
#else
# define printf(a)     do {} while( 0 )
#endif


/*
 * DIPCliImageUnload
 */
void DIGCLIENT DIPCliImageUnload( mod_handle hdl )
{
    printf(( "DIPCliImageUnload: hld=%#x\n", hdl ));
    hdl = hdl;
}

/*
 * DIPCliMapAddr
 */
void DIGCLIENT DIPCliMapAddr( addr_ptr *addr, void *ptr )
{
    printf(( "DIPCliMapAddr: addr=%p:{%04x:%08lx} ptr=%p\n",
              addr, addr->segment, (long)addr->offset, ptr ));
    addr = addr;
    ptr = ptr;
}

/*
 * DIPCliSymCreate
 */
sym_handle *DIGCLIENT DIPCliSymCreate( void *ptr )
{
    printf(( "DIPCliSymCreate: ptr=%p\n", ptr ));
    ptr = ptr;
    return( NULL );
}

/*
 * DIPCliSectLoaded
 */
dip_status DIGCLIENT DIPCliSectLoaded( unsigned sect )
{
    printf(( "DIPCliSectLoaded: ptr=%p\n", sect ));
    sect = sect;
    return( DS_OK );
}

/*
 * DIPCliItemLocation
 */
dip_status DIGCLIENT DIPCliItemLocation( location_context *context,
                                         context_item item, location_list *loc )
{
    printf(( "DIPCliItemLocation:\n" ));
    context = context;
    item = item;
    loc = loc;
    return( DS_FAIL );
}

/*
 * DIPCliAssignLocation
 */
dip_status DIGCLIENT DIPCliAssignLocation( location_list *loc1,
                                           location_list *loc2, unsigned long item )
{
    printf(( "DIPCliAssignLocation:\n" ));
    loc1 = loc1;
    loc2 = loc2;
    item = item;
    return( DS_FAIL );
}

/*
 * DIPCliSameAddrSpace
 */
dip_status DIGCLIENT DIPCliSameAddrSpace( address a1, address a2 )
{
    printf(( "DIPCliSameAddrSpace: a1=%04x:%08lx a2=%04x:%08lx\n",
              a1.mach.segment, (long)a1.mach.offset,
              a2.mach.segment, (long)a2.mach.offset));
//    return( a1.mach.segment == a2.mach.segment );
    a1 = a1;
    a2 = a2;
    return( DS_OK );
}

/*
 * DIPCliAddrSection
 */
void DIGCLIENT DIPCliAddrSection( address *addr )
{
    printf(( "DIPCliAddrSection: addr=%p:{%04x:%08lx}\n",
              addr, addr->mach.segment, addr->mach.offset ));
    addr->sect_id = 0;
}

/*
 * DIPCliStatus
 */
void DIGCLIENT DIPCliStatus( dip_status stat )
{
    printf(( "DIPCliStatus: stat=%d\n", stat ));
    stat = stat;
}

/*
 * DIPCliCurrMAD
 */
mad_handle DIGCLIENT DIPCliCurrMAD( void )
{
    //printf(( "DIPCliCurrMAD\n" ));
    return( MAD_X86 ); ///@todo option!
}
