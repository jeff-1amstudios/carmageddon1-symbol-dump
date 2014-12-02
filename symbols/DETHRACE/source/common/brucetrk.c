/*******************************
* Module: brucetrk
* Original path: C:/DETHRACE/source/common/brucetrk.c
* Lines of code: 654
********************************/

class brucetrk {

	// Properties:
	void* _gMr_blendy;
	void* _gDefault_blend_pc;

	// Methods:
	void* AllocateActorMatrix();
	void* DisposeActorMatrix();
	void* DisposeColumns();
	void* XZToColumnXZ();
	void* StripBlendedFaces();
	void* _FindNonCarsCB();
	void* _ProcessModelsCB();
	void* ProcessModels();
	void* ExtractColumns();
	void* LollipopizeActor4();
	void* _LollipopizeChildren();
	void* DrawColumns();
	void* RenderTrack();
	void* GetYonFactor();
	void* SetYonFactor();

};