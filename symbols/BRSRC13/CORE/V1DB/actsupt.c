/*******************************
* Module: actsupt
* Original path: C:/BRSRC13/CORE/V1DB/actsupt.c
* Lines of code: 834
********************************/

class actsupt {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrActorEnum();
	void* _BrActorSearchMany();
	void* _BrActorSearch();
	void* RenumberActor();
	void* _BrActorAdd();
	void* _BrActorRemove();
	void* _BrActorRelink();
	void* _BrActorAllocate();
	void* InternalActorFree();
	void* _BrActorFree();
	void* ActorToRoot();
	void* ActorToRootTyped();
	void* Matrix4PerspectiveNew();
	void* CameraToScreenMatrix4();
	void* _BrActorToActorMatrix34();
	void* _BrActorToScreenMatrix4();
	void* BrMatrix34ApplyBounds();
	void* ActorToBounds();
	void* _BrActorToBounds();

};