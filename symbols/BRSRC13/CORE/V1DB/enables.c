/*******************************
* Module: enables
* Original path: C:/BRSRC13/CORE/V1DB/enables.c
* Lines of code: 476
********************************/

class enables {

	// Properties:
	void* _rscid;

	// Methods:
	void* actorEnable();
	void* actorDisable();
	void* _BrLightEnable();
	void* _BrLightDisable();
	void* _BrClipPlaneEnable();
	void* _BrClipPlaneDisable();
	void* _BrHorizonPlaneEnable();
	void* _BrHorizonPlaneDisable();
	void* _BrEnvironmentSet();
	void* setupView();
	void* BrSetupLights();
	void* BrSetupClipPlanes();
	void* BrSetupEnvironment();
	void* BrSetupHorizons();
	void* BrActorEnableCheck();

};