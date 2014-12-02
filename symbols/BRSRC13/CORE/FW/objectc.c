/*******************************
* Module: objectc
* Original path: C:/BRSRC13/CORE/FW/objectc.c
* Lines of code: 380
********************************/

class objectc {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrObjectListAllocate();
	void* __M_br_object_container_addFront();
	void* __M_br_object_container_remove();
	void* __M_br_object_container_removeFront();
	void* __M_br_object_container_find();
	void* __M_br_object_container_findMany();
	void* __M_br_object_container_count();
	void* __M_br_object_container_tokensMatchBegin();
	void* __M_br_object_container_tokensMatch();
	void* __M_br_object_container_tokensMatchEnd();
	void* _BrObjectContainerFree();

};