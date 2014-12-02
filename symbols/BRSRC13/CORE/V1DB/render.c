/*******************************
* Module: render
* Original path: C:/BRSRC13/CORE/V1DB/render.c
* Lines of code: 1008
********************************/

class render {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrDbModelRender();
	void* _BrOnScreenCheck();
	void* prependActorTransform();
	void* prependMatrix();
	void* actorRender();
	void* actorRenderOnScreen();
	void* sceneRenderWorld();
	void* sceneRenderAdd();
	void* _BrDbSceneRenderBegin();
	void* _BrDbSetRenderBoundsCallback();
	void* SetOrigin();
	void* SetViewport();
	void* _BrZbSceneRenderBegin();
	void* _BrZbSceneRenderAdd();
	void* _BrZbSceneRenderEnd();
	void* _BrZbSceneRender();
	void* _BrZsSceneRenderBegin();
	void* _BrZsSceneRenderAdd();
	void* _BrZsSceneRenderEnd();
	void* _BrZsSceneRender();
	void* _BrZsPrimitiveCallbackSet();
	void* _BrZbModelRender();
	void* _BrZsModelRender();
	void* _BrZbRenderBoundsCallbackSet();
	void* _BrZsRenderBoundsCallbackSet();

};