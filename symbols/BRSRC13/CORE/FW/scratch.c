/*******************************
* Module: scratch
* Original path: C:/BRSRC13/CORE/FW/scratch.c
* Lines of code: 97
********************************/

class scratch {

	// Properties:
	void* _scratchString;
	void* _rscid;

	// Methods:
	void* _BrScratchAllocate();
	void* _BrScratchFree();
	void* _BrScratchFlush();
	void* _BrScratchInquire();
	void* _BrScratchString();
	void* _BrScratchStringSize();

};