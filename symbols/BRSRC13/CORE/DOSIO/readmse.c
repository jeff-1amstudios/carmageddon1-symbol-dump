/*******************************
* Module: readmse
* Original path: C:/BRSRC13/CORE/DOSIO/readmse.c
* Lines of code: 128
********************************/

class readmse {

	// Properties:
	void* _mouseMemory;
	void* _regs;
	void* _mouseActive;
	void* _rscid;
	void* _mouseHandler;

	// Methods:
	void* _DOSMouseBegin();
	void* _DOSMouseEnd();
	void* _DOSMouseRead();

};