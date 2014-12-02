/*******************************
* Module: finteray
* Original path: C:/DETHRACE/source/common/finteray.c
* Lines of code: 1882
********************************/

class finteray {

	// Properties:
	void* _gPick_model_to_view;
	void* _gPling_materials;
	void* _gTemp_group;
	void* _gNearest_model;
	void* _gNfaces;
	void* _gSelected_model;
	void* _gNearest_face_group;
	void* _gSub_material;
	void* _gNearest_face;
	void* _gReal_material;
	void* _gNearest_T;
	void* _gPling_face;

	// Methods:
	void* BadDiv();
	void* DRVector2AccumulateScale();
	void* PickBoundsTestRay();
	void* ActorRayPick2D();
	void* DRSceneRayPick2D();
	void* DRModelPick2D();
	void* _FindHighestPolyCallBack();
	void* _FindHighestCallBack();
	void* FindFace();
	void* EnablePlingMaterials();
	void* DisablePlingMaterials();
	void* CheckSingleFace();
	void* MultiRayCheckSingleFace();
	void* GetNewBoundingBox();
	void* FindFacesInBox();
	void* FindFacesInBox2();
	void* ActorBoxPick();
	void* ModelPickBox();
	void* ClipToPlaneGE();
	void* ClipToPlaneLE();
	void* BoundsOverlapTest();
	void* BoundsTransformTest();
	void* LineBoxColl();
	void* SphereBoxIntersection();
	void* LineBoxCollWithSphere();
	void* CompVert();
	void* SetFacesGroup();
	void* SelectFace();
	void* GetTilingLimits();
	void* Scale();
	void* ScaleUpX();
	void* ScaleDnX();
	void* ScaleUpY();
	void* ScaleDnY();
	void* SelectFaceForward();
	void* SelectFaceDown();

};