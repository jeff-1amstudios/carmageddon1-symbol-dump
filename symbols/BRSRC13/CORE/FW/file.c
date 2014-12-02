/*******************************
* Module: file
* Original path: C:/BRSRC13/CORE/FW/file.c
* Lines of code: 216
********************************/

class file {

	// Properties:
	void* _rscid;

	// Methods:
	void* __BrFileFree();
	void* _BrFileAttributes();
	void* _BrFileOpenRead();
	void* _BrFileOpenWrite();
	void* _BrFileClose();
	void* _BrFileEof();
	void* _BrFileGetChar();
	void* _BrFilePutChar();
	void* _BrFileRead();
	void* _BrFileWrite();
	void* _BrFileGetLine();
	void* _BrFilePutLine();
	void* _BrFileAdvance();
	void* _BrFilePrintf();

};