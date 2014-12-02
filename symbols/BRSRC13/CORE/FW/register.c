/*******************************
* Module: register
* Original path: C:/BRSRC13/CORE/FW/register.c
* Lines of code: 365
********************************/

class register {

	// Properties:
	void* _rscid;

	// Methods:
	void* BrRegistryNew();
	void* BrRegistryClear();
	void* BrRegistryAdd();
	void* BrRegistryAddMany();
	void* BrRegistryRemove();
	void* BrRegistryRemoveMany();
	void* BrRegistryFind();
	void* BrRegistryFindMany();
	void* BrRegistryCount();
	void* BrRegistryEnum();
	void* BrRegistryNewStatic();
	void* BrRegistryAddStatic();
	void* BrRegistryRemoveStatic();

};