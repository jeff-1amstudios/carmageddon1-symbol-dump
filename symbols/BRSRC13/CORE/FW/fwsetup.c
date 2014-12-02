/*******************************
* Module: fwsetup
* Original path: C:/BRSRC13/CORE/FW/fwsetup.c
* Lines of code: 218
********************************/

class fwsetup {

	// Properties:
	void* _Image_BRCORE1;
	void* _fw;
	void* _functionPointers_BRCORE1;
	void* _namePointers_BRCORE1;
	void* _resourceClasses;
	void* _nameOrdinals_BRCORE1;
	void* _rscid;

	// Methods:
	void* _BrFwBegin();
	void* _BrFwEnd();
	void* _BrDiagHandlerSet();
	void* _BrFilesystemSet();
	void* _BrAllocatorSet();

};