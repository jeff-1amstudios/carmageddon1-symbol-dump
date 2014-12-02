/*******************************
* Module: eventq
* Original path: C:/BRSRC13/CORE/DOSIO/eventq.c
* Lines of code: 112
********************************/

class eventq {

	// Properties:
	void* _rscid;
	void* __DOSEventQEnabled;
	void* __DOSEventMemory;

	// Methods:
	void* _DOSEventBegin();
	void* _DOSEventEnd();
	void* _DOSEventWait();

};