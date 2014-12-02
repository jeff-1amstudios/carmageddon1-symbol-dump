/*******************************
* Module: devlist
* Original path: C:/BRSRC13/CORE/FW/devlist.c
* Lines of code: 403
********************************/

class devlist {

	// Properties:
	void* _rscid;

	// Methods:
	void* AddRequestedDrivers();
	void* devAdd();
	void* _BrDevAdd();
	void* _BrDevAddStatic();
	void* _BrDevCheckAdd();
	void* _BrDevAddConfig();
	void* _BrDevRemove();
	void* _BrDevFind();
	void* _BrDevFindMany();
	void* _BrDevCount();
	void* _BrDevContainedFind();
	void* _BrDevContainedFindMany();
	void* _BrDevContainedCount();

};