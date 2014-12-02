/*******************************
* Module: diag
* Original path: C:/BRSRC13/CORE/FW/diag.c
* Lines of code: 88
********************************/

class diag {

	// Properties:
	void* __diag_scratch;
	void* _rscid;

	// Methods:
	void* _BrFailure();
	void* _BrWarning();
	void* _BrFatal();
	void* __BrAssert();
	void* __BrUAssert();

};