/*******************************
* Module: init
* Original path: C:/DETHRACE/source/common/init.c
* Lines of code: 1162
********************************/

class init {

	// Properties:
	void* _gInitialisation_finished;
	void* _gAustere_time;
	void* _gInitial_rank;
	void* _gGame_initialized;
	void* _gBr_initialized;
	void* _gBrZb_initialized;
	void* _gRender_indent;
	void* _gCredits_per_rank;
	void* _gInitial_credits;
	void* _gNet_mode_of_last_game;
	void* _gDefault_track_material;

	// Methods:
	void* AllocateSelf();
	void* AllocateCamera();
	void* ReinitialiseForwardCamera();
	void* AllocateRearviewPixelmap();
	void* ReinitialiseRearviewCamera();
	void* ReinitialiseRenderStuff();
	void* InstallFindFailedHooks();
	void* AllocateStandardLamp();
	void* InitializeBRenderEnvironment();
	void* InitBRFonts();
	void* AustereWarning();
	void* InitLineStuff();
	void* InitSmokeStuff();
	void* Init2DStuff();
	void* InitialiseApplication();
	void* InitialiseDeathRace();
	void* InitGame();
	void* DisposeGameIfNecessary();
	void* LoadInTrack();
	void* DisposeTrack();
	void* CopyMaterialColourFromIndex();
	void* InitRace();
	void* DisposeRace();
	void* GetScreenSize();
	void* SetScreenSize();

};