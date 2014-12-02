/*******************************
* Module: errors
* Original path: C:/DETHRACE/source/common/errors.c
* Lines of code: 319
********************************/

class errors {

	// Properties:
	void* _gError_messages;
	void* _gError_code;
	void* _gPalette_copy;
	void* _gPixel_buffer_size;
	void* _gMouse_was_started;
	void* _gPixels_copy;

	// Methods:
	void* FatalError();
	void* NonFatalError();
	void* CloseDiagnostics();
	void* OpenDiagnostics();
	void* dprintf();
	void* DoErrorInterface();

};