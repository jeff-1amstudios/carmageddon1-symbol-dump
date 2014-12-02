/*******************************
* Module: stdmem
* Original path: C:/BRSRC13/CORE/STD/stdmem.c
* Lines of code: 55
********************************/

class stdmem {

	// Properties:
	void* _rscid;
	void* _BrStdlibAllocator;
	void* __BrDefaultAllocator;

	// Methods:
	void* _BrStdlibAllocate();
	void* _BrStdlibFree();
	void* _BrStdlibInquire();
	void* _BrStdlibAlign();

};