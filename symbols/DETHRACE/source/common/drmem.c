/*******************************
* Module: drmem
* Original path: C:/DETHRACE/source/common/drmem.c
* Lines of code: 743
********************************/

class drmem {

	// Properties:
	void* _gStainless_classes;
	void* _gMem_names;
	void* _gNon_fatal_allocation_errors;
	void* _gAllocator;

	// Methods:
	void* SetNonFatalAllocationErrors();
	void* ResetNonFatalAllocationErrors();
	void* AllocationErrorsAreFatal();
	void* MAMSInitMem();
	void* PrintMemoryDump();
	void* _DRStdlibAllocate();
	void* _DRStdlibFree();
	void* _DRStdlibInquire();
	void* _Claim4ByteAlignment();
	void* InstallDRMemCalls();
	void* MAMSUnlock();
	void* MAMSLock();
	void* CreateStainlessClasses();
	void* CheckMemory();

};