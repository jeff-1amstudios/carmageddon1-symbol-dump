/*******************************
* Module: resource
* Original path: C:/BRSRC13/CORE/FW/resource.c
* Lines of code: 539
********************************/

class resource {

	// Properties:
	void* _rscid;

	// Methods:
	void* ResToUser();
	void* UserToRes();
	void* _BrResAllocate();
	void* BrResInternalFree();
	void* _BrResFree();
	void* _BrResFreeNoCallback();
	void* _BrResAdd();
	void* _BrResRemove();
	void* _BrResClass();
	void* _BrResIsChild();
	void* _BrResSize();
	void* _ResSizeTotal();
	void* _BrResSizeTotal();
	void* _BrResChildEnum();
	void* _BrResCheck();
	void* _BrResStrDup();
	void* InternalResourceDump();
	void* _BrResDump();
	void* _BrResClassIdentifier();

};