/*******************************
* Module: stdfile
* Original path: C:/BRSRC13/CORE/STD/stdfile.c
* Lines of code: 262
********************************/

class stdfile {

	// Properties:
	void* __BrDefaultFilesystem;
	void* _BrStdioFilesystem;
	void* _rscid;

	// Methods:
	void* _BrStdioAttributes();
	void* _BrStdioOpenRead();
	void* _BrStdioOpenWrite();
	void* _BrStdioClose();
	void* _BrStdioEof();
	void* _BrStdioGetChar();
	void* _BrStdioPutChar();
	void* _BrStdioRead();
	void* _BrStdioWrite();
	void* _BrStdioGetLine();
	void* _BrStdioPutLine();
	void* _BrStdioAdvance();

};