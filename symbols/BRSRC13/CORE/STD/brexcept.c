/*******************************
* Module: brexcept
* Original path: C:/BRSRC13/CORE/STD/brexcept.c
* Lines of code: 111
********************************/

class brexcept {

	// Properties:
	void* _exceptionValue;
	void* __BrExceptionHandler;
	void* _rscid;

	// Methods:
	void* __BrExceptionBegin();
	void* __BrExceptionEnd();
	void* __BrExceptionThrow();
	void* __BrExceptionValueFetch();
	void* __BrExceptionResource();

};