/*******************************
* Module: hstsetup
* Original path: C:/BRSRC13/CORE/HOST/hstsetup.c
* Lines of code: 110
********************************/

class hstsetup {

	// Properties:
	void* _hostInfo;
	void* _functionPointers_BRHOST1;
	void* _Image_BRHOST1;
	void* _namePointers_BRHOST1;
	void* _nameOrdinals_BRHOST1;

	// Methods:
	void* _HostBegin();
	void* _HostEnd();
	void* _HostInfo();

};