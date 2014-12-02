/*******************************
* Module: stddiag
* Original path: C:/BRSRC13/CORE/STD/stddiag.c
* Lines of code: 37
********************************/

class stddiag {

	// Properties:
	void* _BrStdioDiagHandler;
	void* __BrDefaultDiagHandler;
	void* _rscid;

	// Methods:
	void* _BrStdioWarning();
	void* _BrStdioFailure();

};