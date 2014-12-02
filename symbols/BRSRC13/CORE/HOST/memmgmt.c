/*******************************
* Module: memmgmt
* Original path: C:/BRSRC13/CORE/HOST/memmgmt.c
* Lines of code: 646
********************************/

class memmgmt {

	// Properties:
	void* _regs;

	// Methods:
	void* _HostLock();
	void* _HostUnlock();
	void* _HostSelectorAllocate();
	void* _HostSelectorAllocateLinear();
	void* _HostSelectorAllocateAlias();
	void* _HostSelectorAllocatePhysical();
	void* _HostSelectorFree();
	void* _HostSelectorBaseSet();
	void* _HostSelectorLimitSet();
	void* _HostSelectorBaseQuery();
	void* _HostSelectorLimitQuery();

};