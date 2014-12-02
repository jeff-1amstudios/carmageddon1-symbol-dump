/*******************************
* Module: raycast
* Original path: C:/DETHRACE/source/common/raycast.c
* Lines of code: 875
********************************/

class raycast {

	// Properties:
	void* _gPick_model_to_view;
	void* _gBelow_face_index;
	void* _gCurrent_y;
	void* _gAbove_face_index;
	void* _gAbove_model;
	void* _gBelow_model;
	void* _gHighest_y_below;
	void* _gY_picking_camera;
	void* _gLowest_y_above;

	// Methods:
	void* DRActorToRoot();
	void* InitRayCasting();
	void* BadDiv();
	void* DRVector2AccumulateScale();
	void* PickBoundsTestRay();
	void* ActorPick2D();
	void* DRScenePick2DXY();
	void* DRScenePick2D();
	void* DRModelPick2D();
	void* _FindHighestPolyCallBack();
	void* _FindHighestCallBack();
	void* FindBestY();
	void* _FindYVerticallyBelowPolyCallBack();
	void* _FindYVerticallyBelowCallBack();
	void* FindYVerticallyBelow();
	void* FindYVerticallyBelow2();

};