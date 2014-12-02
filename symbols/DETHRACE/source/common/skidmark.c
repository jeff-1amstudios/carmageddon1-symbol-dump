/*******************************
* Module: skidmark
* Original path: C:/DETHRACE/source/common/skidmark.c
* Lines of code: 471
********************************/

class skidmark {

	// Properties:
	void* _gMaterial_names;
	void* _gBoring_material_names;
	void* _gSkids;

	// Methods:
	void* StretchMark();
	void* MaterialFromIndex();
	void* AdjustSkid();
	void* FarFromLine2D();
	void* Reflex2D();
	void* InitSkids();
	void* HideSkid();
	void* HideSkids();
	void* SkidLen();
	void* SkidSection();
	void* SkidMark();
	void* InitCarSkidStuff();
	void* SkidsPerFrame();
	void* RemoveMaterialsFromSkidmarks();

};