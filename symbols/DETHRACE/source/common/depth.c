/*******************************
* Module: depth
* Original path: C:/DETHRACE/source/common/depth.c
* Lines of code: 1381
********************************/

class depth {

	// Properties:
	void* _gDistance_depth_effects;
	void* _gSky_height;
	void* _gSky_x_multiplier;
	void* _gSky_width;
	void* _gSky_y_multiplier;
	void* _gLast_depth_change;
	void* _gOld_yon;
	void* _gWater_shade_table;
	void* _gHorizon_material;
	void* _gDepth_cueing_on;
	void* _gSky_on;
	void* _gRearview_sky_model;
	void* _gFog_shade_table_power;
	void* _gRearview_sky_actor;
	void* _gAcid_shade_table_power;
	void* _gWater_shade_table_power;
	void* _gForward_sky_model;
	void* _gForward_sky_actor;
	void* _gDepth_shade_table_power;
	void* _gFog_shade_table;
	void* _gSwap_depth_effect_start;
	void* _gDepth_shade_table;
	void* _gLast_camera_special_volume;
	void* _gSwap_depth_effect_type;
	void* _gAcid_shade_table;
	void* _gSwap_depth_effect_end;
	void* _gSwap_sky_texture;
	void* _gOld_fov;
	void* _gSky_image_width;
	void* _gSky_image_height;
	void* _gSky_image_underground;

	// Methods:
	void* Log2();
	void* CalculateWrappingMultiplier();
	void* DepthCueingShiftToDistance();
	void* FogAccordingToGPSCDE();
	void* FrobFog();
	void* InstantDepthChange();
	void* Tan();
	void* EdgeU();
	void* MungeSkyModel();
	void* CreateHorizonModel();
	void* LoadDepthTable();
	void* InitDepthEffects();
	void* DoDepthByShadeTable();
	void* ExternalSky();
	void* DoHorizon();
	void* DoDepthCue();
	void* DoFog();
	void* DepthEffect();
	void* DepthEffectSky();
	void* DoWobbleCamera();
	void* DoDrugWobbleCamera();
	void* DoSpecialCameraEffect();
	void* LessDepthFactor();
	void* MoreDepthFactor();
	void* LessDepthFactor2();
	void* MoreDepthFactor2();
	void* AssertYons();
	void* IncreaseYon();
	void* DecreaseYon();
	void* SetYon();
	void* GetYon();
	void* IncreaseAngle();
	void* DecreaseAngle();
	void* ToggleDepthMode();
	void* GetSkyTextureOn();
	void* SetSkyTextureOn();
	void* ToggleSkyQuietly();
	void* ToggleSky();
	void* GetDepthCueingOn();
	void* SetDepthCueingOn();
	void* ToggleDepthCueingQuietly();
	void* ToggleDepthCueing();
	void* ChangeDepthEffect();
	void* MungeForwardSky();
	void* MungeRearviewSky();

};