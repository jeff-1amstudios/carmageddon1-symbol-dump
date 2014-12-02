/*******************************
* Module: dbsetup
* Original path: C:/BRSRC13/CORE/V1DB/dbsetup.c
* Lines of code: 428
********************************/

class dbsetup {

	// Properties:
	void* _resourceClasses;
	void* _v1db;

	// Methods:
	void* _BrV1dbBegin();
	void* _BrV1dbEnd();
	void* _updateTable();
	void* _updateMap();
	void* _updateMaterial();
	void* _updateModel();
	void* _clearTable();
	void* _clearMap();
	void* _clearMaterial();
	void* _clearModel();
	void* _BrV1dbRendererBegin();
	void* _BrV1dbRendererQuery();
	void* _BrV1dbRendererEnd();
	void* _BrZbBegin();
	void* _BrZsBegin();
	void* _BrZbEnd();
	void* _BrZsEnd();
	void* _BrV1dbBeginWrapper_Float();
	void* _BrV1dbEndWrapper();

};