/*******************************
* Module: mem
* Original path: C:/BRSRC13/CORE/FW/mem.c
* Lines of code: 130
********************************/

class mem {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrMemAllocate();
	void* _BrMemFree();
	void* _BrMemInquire();
	void* _BrMemAlign();
	void* _BrMemCalloc();
	void* _BrMemStrDup();

};