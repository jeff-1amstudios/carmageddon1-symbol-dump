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

/*******************************
* Module: car
* Original path: C:/DETHRACE/source/common/car.c
* Lines of code: 5881
********************************/

class car {

	// Properties:
	void* _gEngine_powerup_factor;
	void* _gLast_car_to_skid;
	void* _gSkid_tag;
	void* _gSave_camera;
	void* _gFace_list;
	void* _ControlCar;
	void* _gActive_non_car_list;
	void* _gCar_simplification_factor;
	void* _gDefensive_powerup_factor;
	void* _gOffensive_powerup_factor;
	void* _gNet_player_to_view_index;
	void* _gOver_shoot;
	void* _gDouble_pling_water;
	void* _gOpponent_viewing_mode;
	void* _gMin_world_y;
	void* _gMetal_crunch_sound_id;
	void* _gFreeze_mechanics;
	void* _gWoz_upside_down_at_all;
	void* _gQuite_wild_end;
	void* _gLast_mechanics_time;
	void* _gOn_me_wheels_start;
	void* _gCar_car_collisions;
	void* _gAccel;
	void* _gAverage_grid_position;
	void* _gPed_actor;
	void* _gWild_start;
	void* _gLast_cunning_stunt;
	void* _gCollision_count;
	void* _gQuite_wild_start;
	void* _gCamera_frozen;
	void* _gSwitch_time;
	void* _gMaterial_index;
	void* _gEliminate_faces;
	void* _gInTheSea;
	void* _gMetal_scrape_sound_id;
	void* _gZero_v;
	void* _gCamera_mode;
	void* _gDoing_physics;
	void* _gOur_yaw;
	void* _gCamera_pos_before_collide;
	void* _gGravity;
	void* _gNew_ground_normal;
	void* _gDt;
	void* _gFace_num;
	void* _gCollision_detection_on;
	void* _gControl;
	void* _gGround_normal;
	void* _gNon_car_spec_list;
	void* _gCamera_has_collided;
	void* _gCar_simplification_level;
	void* _gNum_active_non_cars;
	void* _gPanning_camera_height;
	void* _gStop_opponents_moving;
	void* _gMechanics_time_sync;
	void* _gNum_cars_and_non_cars;
	void* _gFace_count;
	void* _gOld_yaw;
	void* _gOld_zoom;
	void* _gPanning_camera_angle;

	// Methods:
	void* DamageUnit();
	void* DamageUnitWithSmoke();
	void* DamageEngine();
	void* DamageTrans();
	void* DamageSteering();
	void* DamageLFWheel();
	void* DamageLFBrake();
	void* DamageLRBrake();
	void* DamageLRWheel();
	void* DamageRFWheel();
	void* DamageRFBrake();
	void* DamageRRBrake();
	void* DamageRRWheel();
	void* CalculatePlaneNormal();
	void* CalculateGroundNormal();
	void* ChangeYCoordinate();
	void* SwitchCarActor();
	void* InitialiseCar2();
	void* InitialiseCar();
	void* InitialiseCarsEtc();
	void* GetAverageGridPosition();
	void* SetInitialPosition();
	void* SetInitialPositions();
	void* InitialiseNonCar();
	void* GetFacesInBox();
	void* IsCarInTheSea();
	void* RememberSafePosition();
	void* ControlOurCar();
	void* CalcEngineForce();
	void* PrepareCars();
	void* FinishCars();
	void* InterpolateCars();
	void* ResetOldmat();
	void* GetNonCars();
	void* GetNetPos();
	void* ApplyPhysicsToCars();
	void* MungeSpecialVolume();
	void* ResetCarSpecialVolume();
	void* TestAutoSpecialVolume();
	void* MoveAndCollideCar();
	void* MoveAndCollideNonCar();
	void* CollideCarWithWall();
	void* ToggleControls();
	void* ControlCar2();
	void* ControlCar3();
	void* ControlCar4();
	void* ControlCar5();
	void* ControlCar1();
	void* setrotate();
	void* RotateCar2();
	void* RotateCarSecondOrder();
	void* RotateCarFirstOrder();
	void* SimpleRotate();
	void* RotateCar();
	void* SteeringSelfCentre();
	void* NonCarCalcForce();
	void* AddDrag();
	void* DoBumpiness();
	void* CalcForce();
	void* DoRevs();
	void* ApplyTorque();
	void* TranslateCar();
	void* CollCheck();
	void* AddFriction();
	void* AddFrictionCarToCar();
	void* ScrapeNoise();
	void* SkidNoise();
	void* StopSkid();
	void* CrashNoise();
	void* CrushAndDamageCar();
	void* ExpandBoundingBox();
	void* CrushBoundingBox();
	void* AddCollPoint();
	void* SinglePointColl();
	void* TwoPointColl();
	void* DrMatrix4Inverse();
	void* ThreePointColl();
	void* ThreePointCollRec();
	void* FourPointColl();
	void* MultiFindFloorInBoxM();
	void* MultiFindFloorInBoxBU();
	void* findfloor();
	void* FindFloorInBoxM();
	void* FindFloorInBoxBU();
	void* FindFloorInBoxBU2();
	void* FindFloorInBoxM2();
	void* BoxFaceIntersect();
	void* AddEdgeCollPoints();
	void* GetPlaneNormal();
	void* GetBoundsEdge();
	void* oldMoveOurCar();
	void* ToggleCollisionDetection();
	void* CancelPendingCunningStunt();
	void* frac();
	void* SetAmbientPratCam();
	void* MungeCarGraphics();
	void* ResetCarScreens();
	void* GetRaceLeader();
	void* AmIGettingBoredWatchingCameraSpin();
	void* ViewNetPlayer();
	void* ViewOpponent();
	void* ToggleCarToCarCollisions();
	void* SwapCar();
	void* AdjustDownForce();
	void* FreezeMechanics();
	void* PutOpponentsInNeutral();
	void* SetPanningFieldOfView();
	void* CheckDisablePlingMaterials();
	void* PositionExternalCamera();
	void* CameraBugFix();
	void* PossibleRemoveNonCarFromWorld();
	void* PutNonCarBackInWorld();
	void* IncidentCam();
	void* MoveCamToIncident();
	void* PanningExternalCamera();
	void* CheckForWall();
	void* SetUpPanningCamera();
	void* SaveCameraPosition();
	void* RestoreCameraPosition();
	void* NormalPositionExternalCamera();
	void* MoveWithWheels();
	void* SwingCamera();
	void* PointCameraAtCar();
	void* PointCamera();
	void* CollideCamera2();
	void* BoundsTest();
	void* CollideCameraWithOtherCars();
	void* InitialiseExternalCamera();
	void* FreezeCamera();
	void* FlyCar();
	void* DrVector3RotateY();
	void* CrashCarsTogether();
	void* CrashCarsTogetherSinglePass();
	void* BringCarToAGrindingHalt();
	void* BoundsOverlapTest();
	void* SimpleCarCarCollisionTest();
	void* CollideTwoCarsWithWalls();
	void* CollideTwoCarsRepeatedly();
	void* CollideTwoCars();
	void* GetEdgeEdgeCollisions();
	void* FacePointCarCarCollide();
	void* MungeCarsMass();
	void* ModifyCarsMass();
	void* ResetCarsMass();
	void* DoCollide();
	void* TwoPointCollB();
	void* ThreePointCollRecB();
	void* FourPointCollB();
	void* TestForNan();
	void* CheckCameraHither();
	void* SetCarSuspGiveAndHeight();
	void* TestForCarInSensiblePlace();
	void* TestOldMats();
	void* PullActorFromWorld();
	void* DoPullActorFromWorld();
	void* CheckForDeAttachmentOfNonCars();
	void* AdjustNonCar();
	void* PipeSingleNonCar();
	void* GetPrecalculatedFacesUnderCar();
	void* SomeNearbyMaterial();

};

/*******************************
* Module: controls
* Original path: C:/DETHRACE/source/common/controls.c
* Lines of code: 3518
********************************/

class controls {

	// Properties:
	void* _gKev_keys;
	void* _gAbuse_text;
	void* _gEdit_funcs;
	void* _gEdit_mode_names;
	void* _gToggle_array;
	void* _gString;
	void* _gToo_late;
	void* _gAllow_car_flying;
	void* _gRecover_timer;
	void* _gLast_repair_time;
	void* _gHad_auto_recover;
	void* _gWhich_edit_mode;
	void* _gRepair_last_time;
	void* _gRecovery_voucher_count;
	void* _gInstant_handbrake;
	void* _gAuto_repair;
	void* _gPalette_fade_time;
	void* _gEntering_message;

	// Methods:
	void* AbortRace();
	void* F4Key();
	void* SetFlag();
	void* FinishLap();
	void* EnsureSpecialVolumesHidden();
	void* ShowSpecialVolumesIfRequ();
	void* DoEditModeKey();
	void* F5Key();
	void* F6Key();
	void* F7Key();
	void* F8Key();
	void* F10Key();
	void* F11Key();
	void* F12Key();
	void* NumberKey0();
	void* NumberKey1();
	void* NumberKey2();
	void* NumberKey3();
	void* NumberKey4();
	void* NumberKey5();
	void* NumberKey6();
	void* NumberKey7();
	void* NumberKey8();
	void* NumberKey9();
	void* LookLeft();
	void* LookForward();
	void* LookRight();
	void* DamageTest();
	void* TDamageEngine();
	void* TDamageDriver();
	void* TDamageTrans();
	void* TDamageSteering();
	void* TDamageLFWheel();
	void* TDamageLFBrake();
	void* TDamageLRBrake();
	void* TDamageLRWheel();
	void* TDamageRFWheel();
	void* TDamageRFBrake();
	void* TDamageRRBrake();
	void* TDamageRRWheel();
	void* MoveBonnetForward();
	void* SaveBonnet();
	void* MoveBonnetBackward();
	void* MoveBonnetLeft();
	void* ShrinkBonnetX();
	void* SwellBonnetX();
	void* ShrinkBonnetY();
	void* SwellBonnetY();
	void* ShrinkBonnetZ();
	void* SwellBonnetZ();
	void* MoveBonnetDown();
	void* MoveBonnetRight();
	void* MoveBonnetUp();
	void* TiltBonnetDownX();
	void* TiltBonnetUpX();
	void* TiltBonnetDownY();
	void* TiltBonnetUpY();
	void* TiltBonnetDownZ();
	void* TiltBonnetUpZ();
	void* ToggleCockpit();
	void* ToggleMirror();
	void* ConcussMe();
	void* CheckHelp();
	void* CheckLoadSave();
	void* CheckToggles();
	void* CarWorldOffFallenCheckThingy();
	void* HasCarFallenOffWorld();
	void* CheckForBeingOutOfThisWorld();
	void* CheckHornLocal();
	void* CheckHorn3D();
	void* CheckHorns();
	void* SetRecovery();
	void* RecoverCar();
	void* CheckMapRenderMove();
	void* ExplodeCar();
	void* CheckRecoveryOfCars();
	void* LoseSomePSPowerups();
	void* CheckOtherRacingKeys();
	void* CheckRecoverCost();
	void* SortOutRecover();
	void* SetFlipUpCar();
	void* FlipUpCar();
	void* GetPowerup();
	void* CheckSystemKeys();
	void* CheckKevKeys();
	void* BrakeInstantly();
	void* PollCarControls();
	void* PollCameraControls();
	void* SetFlag2();
	void* ToggleFlying();
	void* ToggleInvulnerability();
	void* MoreTime();
	void* MuchMoreTime();
	void* ToggleTimerFreeze();
	void* EarnDosh();
	void* LoseDosh();
	void* ToggleMap();
	void* HornBlowing();
	void* ToggleArrow();
	void* GetRecoverVoucherCount();
	void* AddVouchers();
	void* ResetRecoveryVouchers();
	void* CycleCarTexturingLevel();
	void* CycleWallTexturingLevel();
	void* CycleRoadTexturingLevel();
	void* CycleYonFactor();
	void* SetSoundDetailLevel();
	void* ReallySetSoundDetailLevel();
	void* GetSoundDetailLevel();
	void* CycleSoundDetailLevel();
	void* CycleCarSimplificationLevel();
	void* ToggleAccessoryRendering();
	void* ToggleSmoke();
	void* DrawSomeText2();
	void* DrawSomeText();
	void* SaySorryYouLittleBastard();
	void* UserSendMessage();
	void* EnterUserMessage();
	void* DisplayUserMessage();
	void* InitAbuseomatic();
	void* DisposeAbuseomatic();

};

/*******************************
* Module: crush
* Original path: C:/DETHRACE/source/common/crush.c
* Lines of code: 2048
********************************/

class crush {

	// Properties:
	void* _gWobble_spam_y;
	void* _gWobble_spam_z;
	void* _gSteal_ranks;
	void* _gSmoke_damage_step;
	void* _gWheel_circ_to_width;

	// Methods:
	void* ReadCrushData();
	void* SkipCrushData();
	void* WriteCrushData();
	void* DisposeCrushData();
	void* CrushModelPoint();
	void* CrushModel();
	void* _JitModelUpdate();
	void* SetModelForUpdate();
	void* TotallySpamTheModel();
	void* RepairModel();
	void* RepairCar2();
	void* RepairCar();
	void* TotallyRepairACar();
	void* TotallyRepairCar();
	void* CheckLastCar();
	void* KnackerThisCar();
	void* SetKnackeredFlag();
	void* DamageUnit2();
	void* RecordLastDamage();
	void* DoDamage();
	void* CheckPiledriverBonus();
	void* CalcModifiedLocation();
	void* DoPratcamHit();
	void* DamageSystems();
	void* GetDirection();
	void* SetSmokeLastDamageLevel();
	void* SortOutSmoke();
	void* StealCar();
	void* DoCrashEarnings();
	void* DoWheelDamage();
	void* CrashEarnings();

};

/*******************************
* Module: cutscene
* Original path: C:/DETHRACE/source/common/cutscene.c
* Lines of code: 340
********************************/

class cutscene {

	// Properties:
	void* _gLast_demo_end_anim;

	// Methods:
	void* RADMALLOC();
	void* RADFREE();
	void* ShowCutScene();
	void* DoSCILogo();
	void* DoStainlessLogo();
	void* PlaySmackerFile();
	void* DoOpeningAnimation();
	void* DoNewGameAnimation();
	void* DoGoToRaceAnimation();
	void* DoEndRaceAnimation();
	void* DoGameOverAnimation();
	void* DoGameCompletedAnimation();
	void* StartLoadingScreen();

};

/*******************************
* Module: demo
* Original path: C:/DETHRACE/source/common/demo.c
* Lines of code: 114
********************************/

class demo {

	// Properties:
	void* _gLast_demo;

	// Methods:
	void* DoDemo();

};

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

/*******************************
* Module: displays
* Original path: C:/DETHRACE/source/common/displays.c
* Lines of code: 1846
********************************/

class displays {

	// Properties:
	void* _gBR_fonts;
	void* _gQueued_headups;
	void* _gOld_times;
	void* _gLast_fancy_headup;
	void* _gLast_time_earn_time;
	void* _gLast_centre_headup;
	void* _gLast_fancy_time;
	void* _gQueued_headup_count;
	void* _gLast_earn_time;
	void* _gLast_time_credit_amount;
	void* _gLast_credit_amount;
	void* _gCached_font;
	void* _gLast_time_credit_headup;
	void* _gLast_fancy_index;
	void* _gLast_credit_headup;
	void* _gHeadups;
	void* _gLaps_headup;
	void* _gCar_kill_count_headup;
	void* _gTimer_headup;
	void* _gTime_awarded_headup;
	void* _gPed_kill_count_headup;
	void* _gDim_amount;
	void* _gHeadup_images;
	void* _gNet_cash_headup;
	void* _gNet_ped_headup;
	void* _gCredits_lost_headup;
	void* _gCredits_won_headup;

	// Methods:
	void* GetTimerString();
	void* InitHeadups();
	void* ClearHeadup();
	void* ClearHeadupSlot();
	void* ClearHeadups();
	void* HeadupActive();
	void* DRPixelmapText();
	void* DRPixelmapCleverText2();
	void* DeviouslyDimRectangle();
	void* _DimRectangle();
	void* DimAFewBits();
	void* KillOldestQueuedHeadup();
	void* DubreyBar();
	void* DoPSPowerHeadup();
	void* DoPSPowerupHeadups();
	void* DoHeadups();
	void* FindAHeadupHoleWoofBarkSoundsABitRude();
	void* DRTextWidth();
	void* DRTextCleverWidth();
	void* DRPixelmapCentredText();
	void* IsHeadupTextClever();
	void* MungeHeadupWidth();
	void* NewTextHeadupSlot2();
	void* NewTextHeadupSlot();
	void* NewImageHeadupSlot();
	void* DoFancyHeadup();
	void* AdjustHeadups();
	void* MoveHeadupTo();
	void* ChangeHeadupText();
	void* ChangeHeadupImage();
	void* ChangeHeadupColour();
	void* DoDamageScreen();
	void* PoshDrawLine();
	void* DoInstruments();
	void* DoSteeringWheel();
	void* ChangingView();
	void* EarnCredits2();
	void* EarnCredits();
	void* SpendCredits();
	void* AwardTime();
	void* DrawRectangle();
	void* DrawRRectangle();
	void* OoerrIveGotTextInMeBoxMissus();
	void* TransBrPixelmapText();
	void* TransDRPixelmapText();
	void* TransDRPixelmapCleverText();

};

/*******************************
* Module: drfile
* Original path: C:/DETHRACE/source/common/drfile.c
* Lines of code: 124
********************************/

class drfile {

	// Properties:
	void* _gOld_file_system;
	void* _gFilesystem;

	// Methods:
	void* _DRStdioOpenRead();
	void* _DRStdioOpenWrite();
	void* _DRStdioClose();
	void* _DRStdioRead();
	void* _DRStdioWrite();
	void* InstallDRFileCalls();

};

/*******************************
* Module: drmem
* Original path: C:/DETHRACE/source/common/drmem.c
* Lines of code: 743
********************************/

class drmem {

	// Properties:
	void* _gStainless_classes;
	void* _gMem_names;
	void* _gNon_fatal_allocation_errors;
	void* _gAllocator;

	// Methods:
	void* SetNonFatalAllocationErrors();
	void* ResetNonFatalAllocationErrors();
	void* AllocationErrorsAreFatal();
	void* MAMSInitMem();
	void* PrintMemoryDump();
	void* _DRStdlibAllocate();
	void* _DRStdlibFree();
	void* _DRStdlibInquire();
	void* _Claim4ByteAlignment();
	void* InstallDRMemCalls();
	void* MAMSUnlock();
	void* MAMSLock();
	void* CreateStainlessClasses();
	void* CheckMemory();

};

/*******************************
* Module: errors
* Original path: C:/DETHRACE/source/common/errors.c
* Lines of code: 319
********************************/

class errors {

	// Properties:
	void* _gError_messages;
	void* _gError_code;
	void* _gPalette_copy;
	void* _gPixel_buffer_size;
	void* _gMouse_was_started;
	void* _gPixels_copy;

	// Methods:
	void* FatalError();
	void* NonFatalError();
	void* CloseDiagnostics();
	void* OpenDiagnostics();
	void* dprintf();
	void* DoErrorInterface();

};

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

/*******************************
* Module: flicplay
* Original path: C:/DETHRACE/source/common/flicplay.c
* Lines of code: 2365
********************************/

class flicplay {

	// Properties:
	void* _gFlic_bunch;
	void* _gFlic_bunch8;
	void* _gFlic_bunch4;
	void* _gFlic_bunch2;
	void* _gMain_flic_list;
	void* _gPanel_flic_data_length;
	void* _gLast_panel_frame_time;
	void* _gPanel_flic_data;
	void* _gPanel_flic_top;
	void* _gPanel_flic;
	void* _gPanel_buffer;
	void* _gPanel_flic_left;
	void* _gFlic_bunch6;
	void* _gFlic_bunch7;
	void* _gFlic_bunch5;
	void* _gFlic_bunch3;
	void* _gFlic_bunch0;
	void* _gFlic_bunch1;
	void* _gSound_time;
	void* _gTrans_enabled;
	void* _gPanel_flic_disable;
	void* _gDark_mode;
	void* _gPending_pending_flic;
	void* _gTransparency_on;
	void* _gSound_ID;
	void* _gPlay_from_disk;
	void* _gTranslation_count;
	void* _gPending_flic;
	void* _gTrans_fonts;
	void* _gPalette_fuck_prevention;
	void* _gTranslations;
	void* _gPalette;
	void* _gPalette_pixels;
	void* _gPalette_allocate_count;
	void* _gFirst_flic;
	void* _gLast_flic_name;

	// Methods:
	void* EnableTranslationText();
	void* DisableTranslationText();
	void* SetFlicSound();
	void* TranslationMode();
	void* DontLetFlicFuckWithPalettes();
	void* LetFlicFuckWithPalettes();
	void* PlayFlicsInDarkness();
	void* ReilluminateFlics();
	void* TurnFlicTransparencyOn();
	void* TurnFlicTransparencyOff();
	void* PlayFlicsFromDisk();
	void* PlayFlicsFromMemory();
	void* FlicsPlayedFromDisk();
	void* TurnOffPanelFlics();
	void* TurnOnPanelFlics();
	void* GetPanelFlicFrameIndex();
	void* FlicPaletteAllocate();
	void* AssertFlicPixelmap();
	void* StartFlic();
	void* FreeFlicPaletteAllocate();
	void* EndFlic();
	void* DoColourMap();
	void* DoDifferenceX();
	void* DoDifferenceTrans();
	void* DoColour256();
	void* DoDeltaTrans();
	void* DoDeltaX();
	void* DoBlack();
	void* DoRunLengthX();
	void* DoRunLengthTrans();
	void* DoUncompressed();
	void* DoUncompressedTrans();
	void* DoMini();
	void* DrawTranslations();
	void* PlayNextFlicFrame2();
	void* PlayNextFlicFrame();
	void* PlayFlic();
	void* SwapScreen();
	void* ShowFlic();
	void* InitFlics();
	void* LoadFlic();
	void* UnlockFlic();
	void* LoadFlicData();
	void* FreeFlic();
	void* ForceRunFlic();
	void* RunFlicAt();
	void* RunFlic();
	void* PreloadBunchOfFlics();
	void* UnlockBunchOfFlics();
	void* FlushAllFlics();
	void* InitFlicQueue();
	void* FlicQueueFinished();
	void* ProcessFlicQueue();
	void* FlushFlicQueue();
	void* AddToFlicQueue();
	void* InitialiseFlicPanel();
	void* DisposeFlicPanel();
	void* ServicePanelFlics();
	void* ChangePanelFlic();
	void* GetPanelPixelmap();
	void* LoadInterfaceStrings();
	void* FlushInterfaceFonts();
	void* SuspendPendingFlic();
	void* ResumePendingFlic();

};

/*******************************
* Module: globvars
* Original path: unknown
* Lines of code: unknown
********************************/

class globvars {

	// Properties:
	void* _gNet_player_name;
	void* _gRearview_camera_to_world;
	void* _gDefault_default_water_spec_vol;
	void* _gCamera_to_world;
	void* _gRace_list;
	void* _gApplication_path;
	void* _gI_am_cheating;
	void* _gPinball_factor;
	void* _gOpponent_speed_factor;
	void* _gCar_crush_min_fold;
	void* _gNet_recovery_cost;
	void* _gCar_crush_softness;
	void* _gDisabled_vector;
	void* _gOur_pos;
	void* _gCar_crush_max_fold;
	void* _gNet_cars_storage_space;
	void* _gNet_softness;
	void* _gJoystick_deadzone;
	void* _gCar_crush_limit_deviant;
	void* _gNet_offensive;
	void* _gCar_crush_split_chance;
	void* _gGravity_multiplier;
	void* _gCar_crush_wibble;
	void* _gRepair_cost;
	void* _gCop_speed_factor;
	void* _gDefault_gravity;
	void* _gKeys_pressed;
	void* _gDefault_water_spec_vol;
	void* _gNet_repair_cost;
	void* _gFont_7;
	void* _gLast_replay_frame_time;
	void* _gTag_start_time;
	void* _gOpponents;
	void* _gLast_credit_tick;
	void* _gTheir_cars_storage_space;
	void* _gHeadup_font;
	void* _gPre_race_saved_game;
	void* _gRace_finished;
	void* _gDiagnostic_file;
	void* _gFrame_start_time;
	void* _gProgram_state;
	void* _gCredit_period_single;
	void* _gRace_start;
	void* _gTrack_storage_space;
	void* _gYon_multiplier;
	void* _gFrame_period;
	void* _gCredit_period;
	void* _gCredit_period_network;
	void* _gOur_car_storage_space;
	void* _gFox_start_time;
	void* _gBig_font;
	void* _gPedestrians_storage_space;
	void* _gCurrent_race;
	void* _gCut_delay_4;
	void* _gSelf;
	void* _gCut_delay_1;
	void* _gCut_delay_2;
	void* _gDont_render_actor;
	void* _gCut_delay_3;
	void* _gScreen;
	void* _gRender_screen;
	void* _gRearview_camera;
	void* _gCamera_hither;
	void* _gRearview_screen;
	void* _gBack_screen;
	void* _gCamera_angle;
	void* _gDigits_pix;
	void* _gRender_shade_table;
	void* _gRearview_depth_buffer;
	void* _gWhole_screen;
	void* _gIcons_pix;
	void* _gCamera_yon;
	void* _gCamera;
	void* _gArrow_actor;
	void* _gIcons_pix_low_res;
	void* _gDepth_buffer;
	void* _gSound_override;
	void* _gAustere_override;
	void* _gInitial_net_credits;
	void* _gCar_cred_value;
	void* _gNo_races_yet;
	void* _gDefault_engine_noise_index;
	void* _gGame_to_load;
	void* _gJump_start_fine;
	void* _gSausage_override;
	void* _gAusterity_mode;
	void* _gReal_graf_data_index;
	void* _gCar_time_value;
	void* _gTyping_slot;
	void* _gCunning_stunt_bonus;
	void* _gKnobbled_frame_period;
	void* _gCD_is_in_drive;
	void* _gInterface_within_race_mode;
	void* _gNon_track_actor;
	void* _gCut_scene_override;
	void* _gKey_map_index;
	void* _gWait_for_it;
	void* _gCheck_point_cash;
	void* _gPoints_per_second;
	void* _gUniverse_actor;
	void* _gTrack_actor;
	void* _gMap_mode;
	void* _gPed_time_value;
	void* _gHost_abandon_game;
	void* _gAbandon_game;
	void* _gLap;
	void* _gShow_opponents;
	void* _gPipe_reg_snap_before_new_game;
	void* _gTotal_laps;
	void* _gDisallow_abandon_race;
	void* _gFree_repairs;
	void* _gFreeze_timer;
	void* _gRoll_over_creds;
	void* _gShow_peds_on_map;
	void* _gOn_drugs;
	void* _gWasted_time;
	void* _gAction_replay_mode;
	void* _gPipe_reg_snap_after_our_car;
	void* _gRecover_car;
	void* _gCheckpoint;
	void* _gRoll_over_time;
	void* _gPipe_reg_snap_before_our_car;
	void* _gWasted_creds;
	void* _gTimer;
	void* _gCheckpoint_count;
	void* _gCountdown;
	void* _gFrame_rate;
	void* _gNumber_of_racers;
	void* _gSound_enabled;
	void* _gInfo_on;
	void* _gGraf_spec_index;
	void* _gTyping;
	void* _gSound_available;
	void* _gNumber_of_races;
	void* _gArrow_mode;
	void* _gDir_separator;

	// Methods:

};

/*******************************
* Module: globvrbm
* Original path: unknown
* Lines of code: unknown
********************************/

class globvrbm {

	// Properties:
	void* _gMaterial;
	void* _g16bit_palette_valid;
	void* _gExceptions;
	void* _g2d_camera;
	void* _gAlready_copied;
	void* _gBlend_actor;
	void* _gLine_actor;
	void* _gBlend_model;
	void* _gPrat_model;
	void* _gExceptions_general_file;
	void* _gDim_model;
	void* _gPrat_material;
	void* _gBlend_material;
	void* _gExceptions_file_suffix;
	void* _gDim_material;
	void* _gPrat_actor;
	void* _gLine_material;
	void* _gLine_model;
	void* _gDim_actor;
	void* _gNo_transients;
	void* _gSmall_frames_are_slow;
	void* _gShade_tables_do_not_work;
	void* _gInterpolate_textures;
	void* _gNo_2d_effects;
	void* _gPerspective_is_fast;
	void* _gUse_mip_maps;
	void* _gBlitting_is_slow;
	void* _gTextures_need_powers_of_2;
	void* _gYon_factor;
	void* _gMax_texture_side;
	void* _gDevious_2d;
	void* _gMax_texture_aspect_ratio;
	void* _gMaterial_fogging;

	// Methods:

};

/*******************************
* Module: globvrkm
* Original path: unknown
* Lines of code: unknown
********************************/

class globvrkm {

	// Properties:
	void* _gCamera_list;
	void* _gActive_car_list;
	void* _gNum_active_cars;
	void* _gCar_to_view;
	void* _gRecovery_cost;
	void* _gCamera_zoom;
	void* _gCamera_height;
	void* _gView_direction;
	void* _gMin_camera_car_distance;
	void* _gCar_flying;
	void* _gCamera_sign;
	void* _gCamera_reset;
	void* _gCamera_yaw;

	// Methods:

};

/*******************************
* Module: globvrme
* Original path: unknown
* Lines of code: unknown
********************************/

class globvrme {

	// Properties:
	void* _gViewable_car_list;
	void* _gNum_viewable_cars;

	// Methods:

};

/*******************************
* Module: globvrpb
* Original path: unknown
* Lines of code: unknown
********************************/

class globvrpb {

	// Properties:
	void* _gNet_players;
	void* _gRoot_to_camera;
	void* _gCar_details;
	void* _gThis_net_player_index;
	void* _gPedestrian_distance_squared;
	void* _gPending_race;
	void* _gLocal_net_ID;
	void* _gNet_mode;
	void* _gNumber_of_net_players;
	void* _gStart_race_sent;
	void* _gSynch_race_start;
	void* _gCurrent_net_game;
	void* _gReceived_car_details;
	void* _gWaiting_for_unpause;
	void* _gNet_options;
	void* _gCamera_direction;
	void* _gNetwork_available;
	void* _gPedestrian_image;
	void* _gHighest_pedestrian_value;
	void* _gNeed_to_send_start_race;
	void* _gRendering_mirror;

	// Methods:

};

/*******************************
* Module: grafdata
* Original path: C:/DETHRACE/source/common/grafdata.c
* Lines of code: 558
********************************/

class grafdata {

	// Properties:
	void* _gGraf_data;
	void* _gCurrent_graf_data;
	void* _gGraf_data_index;

	// Methods:
	void* CalcGrafDataIndex();

};

/*******************************
* Module: graphics
* Original path: C:/DETHRACE/source/common/graphics.c
* Lines of code: 4072
********************************/

class graphics {

	// Properties:
	void* _gArrows;
	void* _gMap_colours;
	void* _gShadow_points;
	void* _gConcussion;
	void* _gShadow_clip_planes;
	void* _gSheer_mat;
	void* _gLollipops;
	void* _gWobble_array;
	void* _gIdentity34;
	void* _gSaved_shade_tables;
	void* _gCursor_giblet_sequences;
	void* _gCursor_y_offsets;
	void* _gCursor_x_offsets;
	void* _gCursor_giblets;
	void* _gCursor_gib_x_offsets;
	void* _gCursor_gib_y_offsets;
	void* _gTransient_bitmaps;
	void* _gCosine_array;
	void* _gCursors;
	void* _gCursor_giblet_images;
	void* _gShadow_hither_min_move;
	void* _gEval_1;
	void* _gEval_2;
	void* _gShadow_light_z;
	void* _gShadow_light_x;
	void* _gShadow_dim_amount;
	void* _gRGB_colours;
	void* _gNumber_of_lollipops;
	void* _gShadow_light_ray;
	void* _gShadow_hither_z_move;
	void* _gFancy_shadow;
	void* _gShadow_level;
	void* _gShadow_model;
	void* _gShadow_actor;
	void* _gShadow_clip_plane_count;
	void* _gPalette_conversion_table;
	void* _gShadow_material;
	void* _gSaved_table_count;
	void* _gCursor_giblet_sequence3;
	void* _gCursor_giblet_sequence2;
	void* _gFont_names;
	void* _gCurrent_cursor_index;
	void* _gCursor_giblet_sequence1;
	void* _gCursor_giblet_sequence0;
	void* _gPalette_index;
	void* _gCursor_transient_index;
	void* _gScratch_pixels;
	void* _gScratch_palette;
	void* _gPalette_munged;
	void* _gLast_palette_change;
	void* _gColourValues;
	void* _gOrig_render_palette;
	void* _gNext_transient;
	void* _gCurrent_palette;
	void* _gRender_palette;
	void* _gCurrent_splash;
	void* _gCurrent_conversion_table;
	void* _gCamera_to_horiz_angle;
	void* _gColours;
	void* _gFlic_palette;
	void* _gFonts;
	void* _gCurrent_palette_pixels;
	void* _gAR_fudge_headups;
	void* _gMap_render_x;
	void* _gMap_render_y;
	void* _gFaded_palette;
	void* _gWidth;
	void* _gMap_render_height_i;
	void* _gScreen_wobble_x;
	void* _gScreen_wobble_y;
	void* _gCurrent_ambience;
	void* _gY_offset;
	void* _gMap_render_width;
	void* _gMap_render_height;
	void* _gMap_render_width_i;
	void* _gMouse_started;
	void* _gMouse_in_use;
	void* _gHeight;
	void* _gMouse_last_y_coord;
	void* _gMouse_last_x_coord;
	void* _gAmbient_adjustment;
	void* _gMap_render_x_i;
	void* _gX_offset;
	void* _gMap_render_y_i;
	void* _gMirror_on;
	void* _gYon_squared;

	// Methods:
	void* TurnOnPaletteConversion();
	void* TurnOffPaletteConversion();
	void* ResetLollipopQueue();
	void* AddToLollipopQueue();
	void* RenderLollipops();
	void* DRDrawLine();
	void* DrawDigitAt();
	void* DrawNumberAt();
	void* BuildColourTable();
	void* ClearConcussion();
	void* SkipLines();
	void* CopyWords();
	void* Copy8BitStripImageTo16Bit();
	void* CopyStripImage();
	void* SetBRenderScreenAndBuffers();
	void* SetIntegerMapRenders();
	void* AdjustRenderScreenSize();
	void* ScreenSmaller();
	void* ScreenLarger();
	void* DRSetPaletteEntries();
	void* DRSetPalette3();
	void* DRSetPalette2();
	void* DRSetPalette();
	void* InitializePalettes();
	void* SwitchToPalette();
	void* ClearEntireScreen();
	void* ClearWobbles();
	void* InitWobbleStuff();
	void* NewScreenWobble();
	void* SetScreenWobble();
	void* ResetScreenWobble();
	void* CalculateWobblitude();
	void* CalculateConcussion();
	void* SufferFromConcussion();
	void* ProcessNonTrackActors();
	void* OppositeColour();
	void* DrawMapBlip();
	void* DrawMapSmallBlip();
	void* MungeClipPlane();
	void* TryThisEdge();
	void* DistanceFromPlane();
	void* DisableLights();
	void* EnableLights();
	void* ProcessShadow();
	void* RenderShadows();
	void* FlashyMapCheckpoint();
	void* ConditionallyFillWithSky();
	void* RenderAFrame();
	void* InitPaletteAnimate();
	void* RevertPalette();
	void* MungePalette();
	void* ResetPalette();
	void* Darken();
	void* SetFadedPalette();
	void* FadePaletteDown();
	void* FadePaletteUp();
	void* KillSplashScreen();
	void* EnsureRenderPalette();
	void* SplashScreenWith();
	void* EnsurePaletteUp();
	void* _AmbientificateMaterial();
	void* ChangeAmbience();
	void* InitAmbience();
	void* DRPixelmapRectangleMaskedCopy();
	void* DRMaskedStamp();
	void* DRPixelmapRectangleOnscreenCopy();
	void* DRPixelmapRectangleShearedCopy();
	void* DRPixelmapRectangleVScaledCopy();
	void* InitTransientBitmaps();
	void* AllocateTransientBitmap();
	void* DeallocateTransientBitmap();
	void* DeallocateAllTransientBitmaps();
	void* RemoveTransientBitmaps();
	void* SaveTransient();
	void* DrawCursorGiblet();
	void* ProcessCursorGiblets();
	void* NewCursorGiblet();
	void* DoMouseCursor();
	void* AllocateCursorTransient();
	void* StartMouseCursor();
	void* EndMouseCursor();
	void* LoadFont();
	void* DisposeFont();
	void* InitDRFonts();
	void* DrawDropImage();
	void* DropInImageFromTop();
	void* DropOutImageThruBottom();
	void* DropInImageFromBottom();
	void* DropOutImageThruTop();
	void* DrawTellyLine();
	void* DrawTellyImage();
	void* TellyInImage();
	void* TellyOutImage();
	void* SetShadowLevel();
	void* GetShadowLevel();
	void* ToggleShadow();
	void* InitShadow();
	void* _SaveShadeTable();
	void* SaveShadeTables();
	void* DisposeSavedShadeTables();
	void* ShadowMode();
	void* SwitchToRealResolution();
	void* SwitchToLoresMode();
	void* DRPixelmapDoubledCopy();

};

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

/*******************************
* Module: input
* Original path: C:/DETHRACE/source/common/input.c
* Lines of code: 1034
********************************/

class input {

	// Properties:
	void* _gJoy_array;
	void* _gKey_array;
	void* _gKey_poll_counter;
	void* _gRolling_letters;
	void* _gLast_poll_keys;
	void* _gCurrent_cursor;
	void* _gCurrent_position;
	void* _gInsert_mode;
	void* _gLetter_x_coords;
	void* _gEdge_trigger_mode;
	void* _gVisible_length;
	void* _gLetter_y_coords;
	void* _gThe_key;
	void* _gLast_key_down_time;
	void* _gThe_length;
	void* _gLast_roll;
	void* _gLast_key_down;
	void* _gGo_ahead_keys;
	void* _gKey_mapping;
	void* _gCurrent_typing;

	// Methods:
	void* SetJoystickArrays();
	void* PollKeys();
	void* CyclePollKeys();
	void* ResetPollKeys();
	void* CheckKeysForMouldiness();
	void* EitherMouseButtonDown();
	void* PDKeyDown2();
	void* PDKeyDown();
	void* PDKeyDown3();
	void* PDAnyKeyDown();
	void* AnyKeyDown();
	void* KevKeyService();
	void* OldKeyIsDown();
	void* KeyIsDown();
	void* WaitForNoKeys();
	void* WaitForAKey();
	void* CmdKeyDown();
	void* GetMousePosition();
	void* InitRollingLetters();
	void* EndRollingLetters();
	void* AddRollingLetter();
	void* AddRollingString();
	void* AddRollingNumber();
	void* RollLettersIn();
	void* ChangeCharTo();
	void* ChangeTextTo();
	void* SetRollingCursor();
	void* BlankSlot();
	void* DoRLBackspace();
	void* DoRLDelete();
	void* DoRLInsert();
	void* DoRLCursorLeft();
	void* DoRLCursorRight();
	void* DoRLTypeLetter();
	void* StopTyping();
	void* RevertTyping();
	void* StartTyping();
	void* TypeKey();
	void* SetSlotXY();
	void* GetTypedName();
	void* KillCursor();
	void* EdgeTriggerModeOn();
	void* EdgeTriggerModeOff();

};

/*******************************
* Module: intrface
* Original path: C:/DETHRACE/source/common/intrface.c
* Lines of code: 758
********************************/

class intrface {

	// Properties:
	void* _gDisabled_choices;
	void* _gCurrent_mode;
	void* _gStart_time;
	void* _gCurrent_choice;
	void* _gSpec;
	void* _gAlways_typing;
	void* _gDisabled_count;

	// Methods:
	void* SetAlwaysTyping();
	void* ClearAlwaysTyping();
	void* ChoiceDisabled();
	void* ResetInterfaceTimeout();
	void* ChangeSelection();
	void* RecopyAreas();
	void* DisableChoice();
	void* EnableChoice();
	void* DoInterfaceScreen();
	void* ChangeSelectionTo();

};

/*******************************
* Module: loading
* Original path: C:/DETHRACE/source/common/loading.c
* Lines of code: 4294
********************************/

class loading {

	// Properties:
	void* _gWheel_actor_names;
	void* _gFunk_groove_flags;
	void* _gNet_avail_names;
	void* _gDamage_names;
	void* _gDrivable_car_names;
	void* _gYour_car_names;
	void* _gDef_def_water_screen_name;
	void* _gHeadup_image_info;
	void* _gAllow_open_to_fail;
	void* _gDestn_screen_mat;
	void* _gSource_screen_mat;
	void* _gRaces_file_names;
	void* _gFloorpan_names;
	void* _gCurrent_race_file_index;
	void* _gGroove_funk_offset;
	void* _gDemo_armour;
	void* _gDemo_rank;
	void* _gDecode_thing;
	void* _gDemo_opponents;
	void* _gDemo_power;
	void* _gDemo_offensive;
	void* _gDecode_string;

	// Methods:
	void* ReadU32();
	void* ReadU16();
	void* ReadU8();
	void* ReadS32();
	void* ReadS16();
	void* ReadS8();
	void* WriteU32L();
	void* WriteU16L();
	void* WriteU8L();
	void* WriteS32L();
	void* WriteS16L();
	void* WriteS8L();
	void* SkipBytes();
	void* MemReadU32();
	void* MemReadU16();
	void* MemReadU8();
	void* MemReadS32();
	void* MemReadS16();
	void* MemReadS8();
	void* MemSkipBytes();
	void* LoadGeneralParameters();
	void* FinishLoadingGeneral();
	void* LoadPixelmap();
	void* LoadPixelmaps();
	void* LoadShadeTable();
	void* LoadMaterial();
	void* LoadModel();
	void* LoadActor();
	void* DRLoadPalette();
	void* DRLoadShadeTable();
	void* RezeroPixelmaps();
	void* DRLoadPixelmaps();
	void* DRLoadMaterials();
	void* DRLoadModels();
	void* DRLoadActors();
	void* DRLoadLights();
	void* LoadInFiles();
	void* LoadInRegisteeDir();
	void* LoadInRegistees();
	void* LoadKeyMapping();
	void* LoadInterfaceStuff();
	void* UnlockInterfaceStuff();
	void* InitInterfaceLoadState();
	void* ConvertPixTo16BitStripMap();
	void* ConvertPixToStripMap();
	void* KillWindscreen();
	void* DropOffDyingPeds();
	void* DisposeCar();
	void* AdjustCarCoordinates();
	void* LoadSpeedo();
	void* LoadTacho();
	void* LoadHeadups();
	void* ReadNonCarMechanicsData();
	void* ReadMechanicsData();
	void* LoadGear();
	void* AddRefOffset();
	void* GetDamageProgram();
	void* _LinkModel();
	void* FreeUpBonnetModels();
	void* LinkModelsToActor();
	void* ReadShrapnelMaterials();
	void* CloneCar();
	void* DisposeClonedCar();
	void* RemoveDoubleSided();
	void* MungeWindscreen();
	void* SetModelFlags();
	void* LoadCar();
	void* LoadHeadupImages();
	void* DisposeHeadupImages();
	void* OpenRaceFile();
	void* SkipRestOfRace();
	void* LoadRaces();
	void* UnlockOpponentMugshot();
	void* LoadOpponentMugShot();
	void* DisposeOpponentGridIcon();
	void* LoadOpponentGridIcon();
	void* LoadRaceInfo();
	void* DisposeRaceInfo();
	void* LoadGridIcons();
	void* DisposeGridIcons();
	void* LoadOpponents();
	void* LoadBRFont();
	void* LoadParts();
	void* UnlockParts();
	void* LoadChromeFont();
	void* DisposeChromeFont();
	void* GetALineAndInterpretCommand();
	void* GetAnInt();
	void* GetAFloat();
	void* GetAFloatPercent();
	void* GetPairOfFloats();
	void* GetThreeFloats();
	void* GetPairOfInts();
	void* GetThreeInts();
	void* GetThreeIntsAndAString();
	void* GetFourInts();
	void* GetAScalar();
	void* GetPairOfScalars();
	void* GetThreeScalars();
	void* GetFourScalars();
	void* GetFiveScalars();
	void* GetNScalars();
	void* GetPairOfFloatPercents();
	void* GetThreeFloatPercents();
	void* GetAString();
	void* AboutToLoadFirstCar();
	void* LoadOpponentsCars();
	void* DisposeOpponentsCars();
	void* LoadMiscStrings();
	void* FillInRaceInfo();
	void* OldDRfopen();
	void* AllowOpenToFail();
	void* DoNotAllowOpenToFail();
	void* DRfopen();
	void* GetCDPathFromPathsTxtFile();
	void* TestForOriginalCarmaCDinDrive();
	void* OriginalCarmaCDinDrive();
	void* CarmaCDinDriveOrFullGameInstalled();
	void* ReadNetworkSettings();
	void* PrintNetOptions();
	void* SaveOptions();
	void* RestoreOptions();
	void* InitFunkGrooveFlags();

};

/*******************************
* Module: loadsave
* Original path: C:/DETHRACE/source/common/loadsave.c
* Lines of code: 978
********************************/

class loadsave {

	// Properties:
	void* _gSaved_games;
	void* _gStarted_typing;
	void* _gSave_allowed;

	// Methods:
	void* CorrectLoadByteOrdering();
	void* CalcLSChecksum();
	void* LoadSavedGames();
	void* DisposeSavedGames();
	void* LoadTheGame();
	void* StartRollingSaveNamesIn();
	void* LoadStart();
	void* DoLoadGame();
	void* CorrectSaveByteOrdering();
	void* SaveTheGame();
	void* ConfirmMidGameSave();
	void* MakeSavedGame();
	void* SaveStart();
	void* GetSaveName();
	void* SaveDone();
	void* SaveGoAhead();
	void* SaveEscape();
	void* SaveGameInterface();
	void* DoSaveGame();

};

/*******************************
* Module: main
* Original path: C:/DETHRACE/source/common/main.c
* Lines of code: 216
********************************/

class main {

	// Properties:

	// Methods:
	void* QuitGame();
	void* _TrackCount();
	void* CheckNumberOfTracks();
	void* ServiceTheGame();
	void* ServiceGame();
	void* ServiceGameInRace();
	void* GameMain();

};

/*******************************
* Module: mainloop
* Original path: C:/DETHRACE/source/common/mainloop.c
* Lines of code: 1099
********************************/

class mainloop {

	// Properties:
	void* _gOld_camera_time;
	void* _gActual_last_tick_count;
	void* _gLast_wasted_massage_start;
	void* _gMr_odo;
	void* _gWasted_last_flash;
	void* _gLast_tick_count;
	void* _gAverage_frame_period;
	void* _gTime_bonus_state;
	void* _gQueued_wasted_massages_count;
	void* _gTime_bonus;
	void* _gRace_bonus_headup;
	void* _gWasted_flash_state;
	void* _gLast_time_headup;
	void* _gNasty_kludgey_cockpit_variable;
	void* _gInfo_mode;
	void* _gTime_bonus_headup;
	void* _gQueued_wasted_massages;
	void* _gTime_bonus_start;
	void* _gLast_credit_headup;

	// Methods:
	void* ToggleInfo();
	void* CalculateFrameRate();
	void* LoseOldestWastedMassage();
	void* QueueWastedMassage();
	void* MungeHeadups();
	void* UpdateFramePeriod();
	void* GetLastTickCount();
	void* CheckTimer();
	void* MungeRaceFinished();
	void* MainGameLoop();
	void* DoRace();

};

/*******************************
* Module: mainmenu
* Original path: C:/DETHRACE/source/common/mainmenu.c
* Lines of code: 707
********************************/

class mainmenu {

	// Properties:
	void* _gPalette_copy;
	void* _gPixel_buffer_size;
	void* _gMain_menu_spec;
	void* _gMouse_was_started;
	void* _gReplace_background;
	void* _gPixels_copy;

	// Methods:
	void* MainMenuDone1();
	void* MainMenuDone2();
	void* StartMainMenu();
	void* DoMainMenuInterface();
	void* GetMainMenuOption();
	void* QuitVerifyStart();
	void* QuitVerifyDone();
	void* DoVerifyQuit();
	void* DoMainMenu();
	void* DoMainMenuScreen();

};

/*******************************
* Module: netgame
* Original path: C:/DETHRACE/source/common/netgame.c
* Lines of code: 2046
********************************/

class netgame {

	// Properties:
	void* _gGame_scores;
	void* _gPowerup_cost;
	void* _gPed_target;
	void* _gNot_shown_race_type_headup;
	void* _gLast_it_change;
	void* _gTime_for_punishment;
	void* _gLast_lepper;
	void* _gInitialised_grid;
	void* _gIt_or_fox;

	// Methods:
	void* SendCarData();
	void* ReceivedRecover();
	void* CopyMechanics();
	void* ReceivedMechanics();
	void* ReceivedCopInfo();
	void* SendAllNonCarPositions();
	void* ReceivedNonCarPosition();
	void* ReceivedNonCar();
	void* SignalToStartRace2();
	void* SignalToStartRace();
	void* SetUpNetCarPositions();
	void* ReinitialiseCar();
	void* RepositionPlayer();
	void* DisableCar();
	void* EnableCar();
	void* DoNetworkHeadups();
	void* SortNetHeadAscending();
	void* SortNetHeadDescending();
	void* ClipName();
	void* DoNetScores2();
	void* DoNetScores();
	void* InitNetHeadups();
	void* DisposeNetHeadups();
	void* EverybodysLost();
	void* DeclareWinner();
	void* PlayerIsIt();
	void* FarEnoughAway();
	void* CarInContactWithItOrFox();
	void* SelectRandomItOrFox();
	void* CalcPlayerScores();
	void* SendPlayerScores();
	void* DoNetGameManagement();
	void* InitialisePlayerScore();
	void* InitPlayers();
	void* BuyPSPowerup();
	void* BuyArmour();
	void* BuyPower();
	void* BuyOffense();
	void* UseGeneralScore();
	void* NetSendEnvironmentChanges();
	void* UpdateEnvironments();
	void* ReceivedGameplay();
	void* SendGameplay();
	void* SendGameplayToAllPlayers();
	void* SendGameplayToHost();
	void* InitNetGameplayStuff();
	void* DefaultNetName();
	void* NetSendPointCrush();
	void* RecievedCrushPoint();
	void* GetReducedMatrix();
	void* GetExpandedMatrix();
	void* NetEarnCredits();

};

/*******************************
* Module: network
* Original path: C:/DETHRACE/source/common/network.c
* Lines of code: 3102
********************************/

class network {

	// Properties:
	void* _gNew_net_players;
	void* _gGuarantee_list;
	void* _gRace_only_flags;
	void* _gLast_flush_message;
	void* _gMessage_to_free;
	void* _gMid_messages;
	void* _gLast_player_list_received;
	void* _gMin_messages;
	void* _gAdd_proc;
	void* _gNet_service_disable;
	void* _gTo_host_stack;
	void* _gBroadcast_stack;
	void* _gReceiving_batch_number;
	void* _gMess_max_flags;
	void* _gReceiving_new_players;
	void* _gMax_messages;
	void* _gGuarantee_number;
	void* _gNext_guarantee;
	void* _gAsk_time;
	void* _gIn_net_service;
	void* _gNet_initialised;
	void* _gDont_allow_joiners;
	void* _gMess_mid_flags;
	void* _gCurrent_join_poll_game;
	void* _gOnly_receive_guarantee_replies;
	void* _gMess_min_flags;
	void* _gPlayer_list_batch_number;
	void* _gMessage_header_size;
	void* _gJoin_poll_index;
	void* _gJoin_request_denied;
	void* _gHost_died;
	void* _gCar_was_taken;
	void* _gBastard_has_answered;
	void* _gTime_for_next_one;
	void* _gJoin_list_mode;
	void* _gReceived_game_scores;

	// Methods:
	void* NetInitialise();
	void* NetShutdown();
	void* ShutdownNetIfRequired();
	void* DisableNetService();
	void* ReenableNetService();
	void* PermitNetServiceReentrancy();
	void* HaltNetServiceReentrancy();
	void* NetSendHeadupToAllPlayers();
	void* NetSendHeadupToEverybody();
	void* NetSendHeadupToPlayer();
	void* InitialisePlayerStati();
	void* LeaveTempGame();
	void* DisposeCurrentJoinPollGame();
	void* DoNextJoinPoll();
	void* NetStartProducingJoinList();
	void* NetEndJoinList();
	void* NetDisposePIDGameInfo();
	void* NetDisposeGameDetails();
	void* NetAllocatePIDGameDetails();
	void* NetLeaveGameLowLevel();
	void* NetLeaveGame();
	void* NetSetPlayerSystemInfo();
	void* NetDisposePlayer();
	void* FillInThisPlayer();
	void* LoadCarN();
	void* DisposeCarN();
	void* PlayerHasLeft();
	void* NetPlayersChanged();
	void* NetHostGame();
	void* NetInitClient();
	void* NetJoinGameLowLevel();
	void* NetJoinGame();
	void* NetObtainSystemUserName();
	void* NetExtractGameID();
	void* NetExtractPlayerID();
	void* NetSendMessageToAddress();
	void* NetSendMessageToPlayer();
	void* NetSendMessageToHost();
	void* NetReplyToMessage();
	void* NetSendMessageToAllPlayers();
	void* NetGetContentsSize();
	void* NetGetMessageSize();
	void* NetCalcSizeDecider();
	void* NetBuildMessage();
	void* NetGetToHostContents();
	void* NetGetBroadcastContents();
	void* NetSendMessageStacks();
	void* NetAllocateMessage();
	void* NetFreeExcessMemory();
	void* NetDisposeMessage();
	void* NetGetNextMessage();
	void* ReceivedSendMeDetails();
	void* ReceivedDetails();
	void* SendOutPlayerList();
	void* ReceivedJoin();
	void* KickPlayerOut();
	void* ReceivedLeave();
	void* NetFullScreenMessage();
	void* HostHasBittenTheDust();
	void* ReceivedHosticide();
	void* ConfirmReceipt();
	void* ReceivedNewPlayerList();
	void* ReceivedRaceOver();
	void* ReceivedStatusReport();
	void* ReceivedStartRace();
	void* ReceivedGuaranteeReply();
	void* ReceivedHeadup();
	void* ReceivedHostQuery();
	void* ReceivedHostReply();
	void* SendGuaranteeReply();
	void* PlayerIsInList();
	void* ReceivedTimeSync();
	void* ReceivedConfirm();
	void* ReceivedDisableCar();
	void* ReceivedEnableCar();
	void* ReceivedScores();
	void* ReceivedWasted();
	void* ReceivedCarDetailsReq();
	void* ReceivedCarDetails();
	void* ReceivedGameScores();
	void* ReceivedMessage();
	void* NetReceiveAndProcessMessages();
	void* BroadcastStatus();
	void* CheckForDisappearees();
	void* CheckForPendingStartRace();
	void* NetService();
	void* NetFinishRace();
	void* NetPlayerStatusChanged();
	void* NetGetPlayerStatus();
	void* NetGuaranteedSendMessageToAllPlayers();
	void* NetGuaranteedSendMessageToEverybody();
	void* NetGuaranteedSendMessageToHost();
	void* NetGuaranteedSendMessageToPlayer();
	void* NetGuaranteedSendMessageToAddress();
	void* ResendGuaranteedMessages();
	void* SampleFailNotifier();
	void* NetWaitForGuaranteeReplies();
	void* NetPlayerFromID();
	void* NetCarFromPlayerID();
	void* NetPlayerFromCar();
	void* DoCheckSum();
	void* GetCheckSum();
	void* CheckCheckSum();

};

/*******************************
* Module: newgame
* Original path: C:/DETHRACE/source/common/newgame.c
* Lines of code: 2162
********************************/

class newgame {

	// Properties:
	void* _gBasic_car_names;
	void* _gNet_settings;
	void* _gRadio_bastards;
	void* _gGames_to_join;
	void* _gOptions;
	void* _gNet_target;
	void* _gLast_graph_sel;
	void* _gThe_interface_spec;
	void* _gNet_race_sequence;
	void* _gLast_game_type;
	void* _gCurrent_net_game_count;
	void* _gAnne_flic_data_length;
	void* _gShifted_default_yet;
	void* _gNet_storage_allocated;
	void* _gFrank_flic_data;
	void* _gNet_name;
	void* _gFrank_flic_data_length;
	void* _gAnne_flic_data;
	void* _gLast_net_choose_box;
	void* _gCurrent_game_selection;
	void* _gRace_index;
	void* _gRadio_selected;

	// Methods:
	void* StartRollingPlayerNamesIn();
	void* FrankAnneStart1();
	void* FrankAnneStart2();
	void* GetPlayerName();
	void* FrankAnneDone();
	void* FrankAnneDraw();
	void* FrankieOrAnnie();
	void* SelectSkillLevel();
	void* DoOnePlayerStart();
	void* NewNetGameUp();
	void* NewNetGameDown();
	void* DisposeJoinableGame();
	void* DrawAnItem();
	void* DrawColumnHeading();
	void* DrawGames();
	void* InitGamesToJoin();
	void* DisposeJoinList();
	void* AddToJoinList();
	void* NewNetStart1();
	void* NewNetStart2();
	void* NewNetGetName();
	void* NewNetDone();
	void* NewNetGoAhead();
	void* JoinOrHostGame();
	void* GetNetOptions();
	void* SetNetOptions();
	void* NetPlayCheckboxOn2();
	void* NetPlayCheckboxOff2();
	void* NetPlayCheckboxOn();
	void* NetPlayCheckboxOff();
	void* NetPlayRadioOn2();
	void* NetPlayRadioOff2();
	void* NetPlayRadioOn();
	void* NetPlayRadioOff();
	void* DrawNOptInitialRadios();
	void* NetRadioChanged();
	void* NetCheckboxChanged();
	void* NetOptLeft();
	void* NetOptRight();
	void* NetOptUp();
	void* NetOptDown();
	void* NetRadioClick();
	void* RevertToDefaults();
	void* DefaultNetSettings();
	void* NetOptGoAhead();
	void* NetPlotAGraphBox();
	void* NetDrawAGraphBox();
	void* NetEraseAGraphBox();
	void* DrawNetOptBox();
	void* DoNetOptions();
	void* SetOptions();
	void* PlayRadioOn();
	void* PlayRadioOff();
	void* DrawNetChooseInitial();
	void* NetChooseGoAhead();
	void* PlotAGraphBox();
	void* DrawAGraphBox();
	void* EraseAGraphBox();
	void* DrawNetChoose();
	void* NetChooseLR();
	void* SetGameTarget();
	void* NetGameChoices();
	void* ReadNetGameChoices();
	void* ChooseStartRace();
	void* SetUpOtherNetThings();
	void* RequestCarDetails();
	void* PickARandomCar();
	void* PollCarDetails();
	void* SetNetAvailability();
	void* ChooseNetCar();
	void* InitNetStorageSpace();
	void* DisposeNetStorageSpace();
	void* DoMultiPlayerStart();

};

/*******************************
* Module: oil
* Original path: C:/DETHRACE/source/common/oil.c
* Lines of code: 720
********************************/

class oil {

	// Properties:
	void* _gNext_oil_pixie;
	void* _gOil_pixie_names;
	void* _gZ_buffer_diff;
	void* _gMin_z_diff;
	void* _gOil_pixies;
	void* _gOily_spills;

	// Methods:
	void* InitOilSpills();
	void* ResetOilSpills();
	void* QueueOilSpill();
	void* OKToSpillOil();
	void* Vector3Interpolate();
	void* EnsureGroundDetailVisible();
	void* MungeOilsHeightAboveGround();
	void* MungeIndexedOilsHeightAboveGround();
	void* SetInitialOilStuff();
	void* ProcessOilSpills();
	void* GetOilSpillCount();
	void* GetOilSpillDetails();
	void* PointInSpill();
	void* GetOilFrictionFactors();
	void* AdjustOilSpill();
	void* ReceivedOilSpill();

};

/*******************************
* Module: oppocar
* Original path: C:/DETHRACE/source/common/oppocar.c
* Lines of code: 228
********************************/

class oppocar {

	// Properties:
	void* _gFace_list;
	void* _ControlCar;
	void* _gMetal_crunch_sound_id;
	void* _gOur_yaw;
	void* _gGravity;
	void* _gNew_ground_normal;
	void* _gFace_num;
	void* _gCollision_detection_on;
	void* _gControl;
	void* _gGround_normal;
	void* _gMetal_scrape_sound_id;
	void* _gOld_yaw;

	// Methods:
	void* MakeCarStationary();
	void* MoveThisCar();

};

/*******************************
* Module: opponent
* Original path: C:/DETHRACE/source/common/opponent.c
* Lines of code: 6065
********************************/

class opponent {

	// Properties:
	void* _gOppo_path_filename;
	void* _gIn_view_distance;
	void* _gBit_per_node;
	void* _gGrudge_reduction_per_period;
	void* _gSFS_max_cycles;
	void* _gChallenger_index;
	void* _gSFS_cycles_this_time;
	void* _gMinimum_yness_before_knackerisation;
	void* _gWanky_arse_tit_fuck;
	void* _gHead_on_cos_value;
	void* _gSFS_count;
	void* _gSFS_total_cycles;
	void* _gNext_grudge_reduction;
	void* _gCop_pursuit_speed_percentage_multiplier;
	void* _gDefinite_cop_pursuit_speed;
	void* _gAcknowledged_start;
	void* _gMin_bangness;
	void* _gStart_jumped;
	void* _gNum_of_opponents_getting_near;
	void* _gNext_elastication;
	void* _gNumber_of_cops_before_faffage;
	void* _gFirst_frame;
	void* _gAcme_frame_count;
	void* _gDrone_name;
	void* _gDefinite_no_cop_pursuit_speed;
	void* _gNext_write_during_elastication;
	void* _gNum_of_opponents_completing_race;
	void* _gNum_of_opponents_pursuing;
	void* _gMax_bangness;
	void* _gActive_car_list_rebuild_required;
	void* _gCop_name;
	void* _gFrame_period_for_this_munging_in_secs;
	void* _gBig_bang;
	void* _gPath_section_type_names;
	void* _gMat_lt_blu;
	void* _gFaces_used_in_non_edit_paths;
	void* _gMat_dk_blu;
	void* _gMats_allocated;
	void* _gBIG_APC_index;
	void* _gMat_lt_red;
	void* _gTest_toggle;
	void* _gVertices_used_in_non_edit_paths;
	void* _gMat_lt_turq;
	void* _gMat_lt_grn;
	void* _gAlready_elasticating;
	void* _gMat_dk_red;
	void* _gOppo_paths_shown;
	void* _gMat_dk_turq;
	void* _gMat_lt_gry;
	void* _gMat_md_gry;
	void* _gMat_dk_grn;
	void* _gMellow_opponents;
	void* _gMade_path_filename;
	void* _gProcessing_opponents;
	void* _gMat_dk_gry;
	void* _gMat_dk_yel;
	void* _gMat_lt_yel;
	void* _gMat_md_yel;
	void* _gOppo_path_model;
	void* _gOppo_path_actor;
	void* _gFrame_period_for_this_munging;
	void* _gTime_stamp_for_this_munging;
	void* _gOpponent_nastyness_frigger;
	void* _gMobile_section;

	// Methods:
	void* PointActorAlongThisBloodyVector();
	void* ProcessCurrentObjective();
	void* ReallocExtraPathNodes();
	void* ReallocExtraPathSections();
	void* PointVisibleFromHere();
	void* FindNearestPathNode();
	void* FindNearestPathSection();
	void* FindNearestGeneralSection();
	void* DeadStopCar();
	void* TurnOpponentPhysicsOn();
	void* TurnOpponentPhysicsOff();
	void* NewObjective();
	void* CalcRaceRoute();
	void* TopUpRandomRoute();
	void* SearchForSection();
	void* CalcGetNearPlayerRoute();
	void* CalcReturnToStartPointRoute();
	void* ClearOpponentsProjectedRoute();
	void* AddToOpponentsProjectedRoute();
	void* ShiftOpponentsProjectedRoute();
	void* StunTheBugger();
	void* UnStunTheBugger();
	void* ProcessCompleteRace();
	void* StartRecordingTrail();
	void* RecordNextTrailNode();
	void* FindNearestTrailSection();
	void* CalcNextTrailSection();
	void* ProcessPursueAndTwat();
	void* ProcessRunAway();
	void* ProcessWaitForSomeHaplessSod();
	void* ProcessReturnToStart();
	void* ProcessLevitate();
	void* ProcessGetNearPlayer();
	void* ProcessFrozen();
	void* HeadOnWithPlayerPossible();
	void* AlreadyPursuingCar();
	void* LastTwatteeAPlayer();
	void* LastTwatterAPlayer();
	void* ObjectiveComplete();
	void* TeleportOpponentToNearestSafeLocation();
	void* ChooseNewObjective();
	void* ProcessThisOpponent();
	void* IsNetCarActive();
	void* RebuildActiveCarList();
	void* ForceRebuildActiveCarList();
	void* StartToCheat();
	void* OiStopCheating();
	void* TeleportCopToStart();
	void* CalcDistanceFromHome();
	void* MassageOpponentPosition();
	void* RematerialiseOpponentOnThisSection();
	void* RematerialiseOpponentOnNearestSection();
	void* RematerialiseOpponent();
	void* CalcPlayerConspicuousness();
	void* CalcOpponentConspicuousnessWithAViewToCheatingLikeFuck();
	void* ChallengeOccurred();
	void* LoadCopCars();
	void* LoadInOppoPaths();
	void* DisposeOpponentPaths();
	void* MungeOpponents();
	void* SetInitialCopPositions();
	void* InitOpponents();
	void* DisposeOpponents();
	void* WakeUpOpponentsToTheFactThatTheStartHasBeenJumped();
	void* ReportMurderToPoliceDepartment();
	void* GetCarCount();
	void* GetCarSpec();
	void* GetDriverName();
	void* GetOpponentSpecFromCarSpec();
	void* GetCarSpecFromGlobalOppoIndex();
	void* GetOpponentsRealSection();
	void* GetOpponentsFirstSection();
	void* GetOpponentsNextSection();
	void* GetOpponentsSectionStartNode();
	void* GetOpponentsSectionFinishNode();
	void* GetOpponentsSectionStartNodePoint();
	void* GetOpponentsSectionFinishNodePoint();
	void* GetOpponentsSectionWidth();
	void* GetOpponentsSectionMinSpeed();
	void* GetOpponentsSectionMaxSpeed();
	void* InitOpponentPsyche();
	void* ClearTwattageOccurrenceVariables();
	void* TwoCarsHitEachOther();
	void* RecordOpponentTwattageOccurrence();
	void* ToggleOpponentTest();
	void* ToggleOpponentProcessing();
	void* ToggleMellowOpponents();
	void* RepairOpponentsSystems();
	void* CopyVertex();
	void* CopyFace();
	void* DeleteSection();
	void* DeleteNode();
	void* DeleteOrphanNodes();
	void* InsertThisNodeInThisSectionHere();
	void* TrackElasticateyPath();
	void* RecalcNearestPathSectionSpeed();
	void* RecalcNearestPathSectionWidth();
	void* CalcNegativeXVector();
	void* MakeVertexAndOffsetIt();
	void* MakeFaceAndTextureIt();
	void* MakeSection();
	void* MakeCube();
	void* CalcNumberOfFacesAndVerticesForOppoPathModel();
	void* ReallocModelFacesAndVertices();
	void* CreateSimpleMaterial();
	void* AllocateMatsForOppoPathModel();
	void* RebuildOppoPathModel();
	void* ConsistencyCheck();
	void* ShowOppoPaths();
	void* WriteOutOppoPaths();
	void* NewNodeOKHere();
	void* ShowHideOppoPaths();
	void* DropElasticateyNode();
	void* InsertAndElasticate();
	void* InsertAndDontElasticate();
	void* DropDeadEndNode();
	void* DropNodeOnNodeAndStopElasticating();
	void* WidenOppoPathSection();
	void* NarrowOppoPathSection();
	void* IncreaseSectionMinSpeed();
	void* DecreaseSectionMinSpeed();
	void* IncreaseSectionMaxSpeed();
	void* DecreaseSectionMaxSpeed();
	void* PullOppoPoint();
	void* ShowNodeInfo();
	void* ShowSectionInfo1();
	void* ShowSectionInfo2();
	void* DeleteOppoPathSection();
	void* DeleteOppoPathNodeAndSections();
	void* DeleteOppoPathNodeAndJoin();
	void* ReverseSectionDirection();
	void* CycleSectionType();
	void* ToggleOneWayNess();
	void* CopStartPointInfo();
	void* DropCopStartPoint();
	void* DeleteCopStartPoint();
	void* CycleCopStartPointType();

};

/*******************************
* Module: oppoproc
* Original path: C:/DETHRACE/source/common/oppoproc.c
* Lines of code: 1613
********************************/

class oppoproc {

	// Properties:

	// Methods:
	void* StraightestArcForCorner2D();
	void* CornerFudge();
	void* MaxCurvatureForCarSpeed();
	void* Vector2Cross();
	void* EndOfPath();
	void* RoughlyColinear();
	void* GetStraight();
	void* ProcessFollowPath();
	void* FollowCheatyPath();

};

/*******************************
* Module: options
* Original path: C:/DETHRACE/source/common/options.c
* Lines of code: 2033
********************************/

class options {

	// Properties:
	void* _gKey_defns;
	void* _gRadio_bastards;
	void* _gKey_count;
	void* _gLast_graph_sel;
	void* _gKey_names;
	void* _gPending_entry;
	void* _gThe_interface_spec;
	void* _gOrig_key_mapping;
	void* _gDials_pix;
	void* _gCurrent_key;

	// Methods:
	void* DrawDial();
	void* MoveDialFromTo();
	void* SoundOptionsStart();
	void* SoundOptionsDone();
	void* SoundOptionsLeft();
	void* SoundOptionsRight();
	void* SoundClick();
	void* DoSoundOptions();
	void* GetGraphicsOptions();
	void* SetGraphicsOptions();
	void* PlayRadioOn2();
	void* PlayRadioOff2();
	void* PlayRadioOn();
	void* PlayRadioOff();
	void* DrawInitialRadios();
	void* RadioChanged();
	void* GraphOptLeft();
	void* GraphOptRight();
	void* GraphOptUp();
	void* GraphOptDown();
	void* RadioClick();
	void* GraphOptGoAhead();
	void* PlotAGraphBox();
	void* DrawAGraphBox();
	void* EraseAGraphBox();
	void* DrawGraphBox();
	void* DoGraphicsOptions();
	void* CalibrateJoysticks();
	void* StripControls();
	void* LoadKeyNames();
	void* DisposeKeyNames();
	void* SaveOrigKeyMapping();
	void* GetKeyCoords();
	void* SetKeysToDefault();
	void* SaveKeyMapping();
	void* ChangeKeyMapIndex();
	void* DrawKeyAssignments();
	void* KeyAssignLeft();
	void* KeyAssignRight();
	void* KeyAssignUp();
	void* KeyAssignDown();
	void* KeyAssignGoAhead();
	void* MouseyClickBastard();
	void* DrawInitialKMRadios();
	void* DoControlOptions();
	void* LoadSoundOptionsData();
	void* FreeSoundOptionsData();
	void* DrawDisabledOptions();
	void* DoOptions();

};

/*******************************
* Module: pedestrn
* Original path: C:/DETHRACE/source/common/pedestrn.c
* Lines of code: 5397
********************************/

class pedestrn {

	// Properties:
	void* _gPed_gib_counts;
	void* _gPed_gib_maxes;
	void* _gPed_instrucs;
	void* _gPed_geb_names;
	void* _gInstruc_commands;
	void* _gMin_ped_gib_speeds;
	void* _gPed_gibs;
	void* _gPed_gib_speeds;
	void* _gPed_gib_names;
	void* _gPed_gib_distrib;
	void* _gPed_gib_materials;
	void* _gPed_size_counts;
	void* _gProximity_rays;
	void* _gVesuvian_corpses;
	void* _gPed_colliding;
	void* _gZombie_factor;
	void* _gRespawn_variance;
	void* _gPed_scale_factor;
	void* _gTotal_peds;
	void* _gPedestrian_harvest;
	void* _gPath_actor;
	void* _gPed_pos_camera;
	void* _gMin_respawn_time;
	void* _gPath_mat_calc;
	void* _gCurrent_ped_path_actor;
	void* _gPedestrian_speed_factor;
	void* _gExploding_pedestrians;
	void* _gBlind_pedestrians;
	void* _gPed_material;
	void* _gPath_mat_normal;
	void* _gPedestrians_on;
	void* _gInit_pos_mat_calc;
	void* _gPed_other;
	void* _gAttracted_pedestrians;
	void* _gPed_count;
	void* _gPed_ref_num;
	void* _gMax_distance_squared;
	void* _gPed_model;
	void* _gDanger_level;
	void* _gExploding_ped_scale;
	void* _gDanger_direction;
	void* _gPed_instruc_count;
	void* _gInit_ped_instruc;
	void* _gZero_v;
	void* _gRate_commands;
	void* _gCollide_commands;
	void* _gCurrent_lollipop_index;
	void* _gDetect_peds;
	void* _gVesuvians_this_time;
	void* _gNumber_of_ped_gibs;
	void* _gLast_ped_message_send;
	void* _gFlag_waving_bastard;
	void* _gReally_stupid_ped_bug_enable;
	void* _gNumber_of_pedestrians;
	void* _gProx_ray_shade_table;
	void* _gPedestrian_array;
	void* _gVesuvians_last_time;
	void* _gLast_ped_splat_time;
	void* _gCurrent_ped_multiplier;
	void* _gPed_sound_disable;
	void* _gInitial_instruction;
	void* _gSend_peds;

	// Methods:
	void* PedModelUpdate();
	void* ActorIsPedestrian();
	void* PedHeightFromActor();
	void* GetPedestrianValue();
	void* PedestrianActorIsPerson();
	void* GetPedestrianActor();
	void* GetPedestrianTexture();
	void* TogglePedestrians();
	void* InitPedGibs();
	void* SetPedMaterialForRender();
	void* _PedCallBack();
	void* InitPeds();
	void* MungeModelSize();
	void* BurstPedestrian();
	void* ResetAllPedGibs();
	void* AdjustPedGib();
	void* MungePedGibs();
	void* KillPedestrian();
	void* CalcPedWidthNHeight();
	void* PedestrianNextInstruction();
	void* MungePedestrianSequence();
	void* DetachPedFromCar();
	void* SetPedPos();
	void* DetachPedActorFromCar();
	void* MungePedestrianFrames();
	void* MungePedModel();
	void* ChangeActionTo();
	void* MungePedestrianAction();
	void* MakeFlagWavingBastardWaveHisFlagWhichIsTheProbablyTheLastThingHeWillEverDo();
	void* MungePedestrianPath();
	void* CalcPedestrianDangerLevel();
	void* MoveToEdgeOfCar();
	void* CheckLastPed();
	void* BloodyWheels();
	void* FancyATossOffMate();
	void* CheckPedestrianDeathScenario();
	void* SendPedestrian();
	void* DoPedestrian();
	void* AdjustPedestrian();
	void* SquirtPathVertex();
	void* ResetAllPedestrians();
	void* GroundPedestrian();
	void* RevivePedestrian();
	void* MungePedestrians();
	void* RespawnPedestrians();
	void* GetPedCount();
	void* GetPedPosition();
	void* CreatePedestrian();
	void* ResetProxRay();
	void* PedMaterialFromHell();
	void* ResetPedMaterial();
	void* LoadInPedestrians();
	void* BuildPedPaths();
	void* WriteOutPeds();
	void* AddPed();
	void* NewPed();
	void* RemoveCurrentPedPath();
	void* ScrubPedestrian();
	void* TogglePedDetect();
	void* NewPed0();
	void* NewPed1();
	void* NewPed2();
	void* NewPed3();
	void* NewPed4();
	void* NewPed5();
	void* NewPed6();
	void* NewPed7();
	void* NewPed8();
	void* NewPed9();
	void* NewPed0B();
	void* NewPed1B();
	void* NewPed2B();
	void* NewPed3B();
	void* NewPed4B();
	void* NewPed5B();
	void* NewPed6B();
	void* NewPed7B();
	void* NewPed8B();
	void* NewPed9B();
	void* MungeShowPedPath();
	void* DropPedPoint2();
	void* DropPedPoint();
	void* DropInitPedPoint();
	void* DropPedPointAir2();
	void* DropPedPointAir();
	void* DropInitPedPointAir();
	void* _KillActorsModel();
	void* DisposePedPaths();
	void* GetPedPos();
	void* ShowPedPos();
	void* ShowPedPaths();
	void* PullPedPoint();
	void* PullPedPointAir();
	void* DeletePedPath();
	void* DeletePedPoint();
	void* DisposePedestrians();
	void* DoPedReport();
	void* RenderProximityRays();
	void* AdjustProxRay();
	void* ReceivedPedestrian();
	void* SendAllPedestrianPositions();

};

/*******************************
* Module: piping
* Original path: C:/DETHRACE/source/common/piping.c
* Lines of code: 2804
********************************/

class piping {

	// Properties:
	void* _gRegistration_snapshots;
	void* _gReset_procs;
	void* _gWall_severity;
	void* _gSmudge_space;
	void* _gOldest_time;
	void* _gCurrent_snapshot_registration_index;
	void* _gMr_chunky;
	void* _gMax_rewind_chunks;
	void* _gDisable_sound;
	void* _gCar_ptr;
	void* _gZero_vector;
	void* _gReentrancy_array;
	void* _gLast_time;
	void* _gModel_geometry_space;
	void* _gEnd_time;
	void* _gTrigger_time;
	void* _gReentrancy_count;
	void* _gDisable_advance;
	void* _gCar_pos;
	void* _gReference_pos;
	void* _gMax_distance;
	void* _gLoop_abort_time;
	void* _gWall_impact_point;
	void* _gPipe_buffer_working_end;
	void* _gYoungest_time;
	void* _gPipe_buffer_phys_end;
	void* _gLocal_buffer_record_ptr;
	void* _gPipe_play_ptr;
	void* _gEnd_of_session;
	void* _gPipe_record_ptr;
	void* _gPipe_buffer_oldest;
	void* _gPipe_buffer_size;
	void* _gLocal_buffer;
	void* _gLocal_buffer_size;
	void* _gPipe_buffer_start;

	// Methods:
	void* GetReducedPos();
	void* SaveReducedPos();
	void* PipeSearchForwards();
	void* IsActionReplayAvailable();
	void* SomeReplayLeft();
	void* DisablePipedSounds();
	void* EnablePipedSounds();
	void* LengthOfSession();
	void* StartPipingSession2();
	void* StartPipingSession();
	void* EndPipingSession2();
	void* EndPipingSession();
	void* AddDataToSession();
	void* AddModelGeometryToPipingSession();
	void* AddSmudgeToPipingSession();
	void* AddPedestrianToPipingSession();
	void* AddSparkToPipingSession();
	void* AddShrapnelToPipingSession();
	void* AddScreenWobbleToPipingSession();
	void* AddGrooveStopToPipingSession();
	void* AddNonCarToPipingSession();
	void* AddSmokeToPipingSession();
	void* AddSmokeColumnToPipingSession();
	void* AddFlameToPipingSession();
	void* AddSplashToPipingSession();
	void* AddOilSpillToPipingSession();
	void* AddFrameFinishToPipingSession();
	void* AddCarToPipingSession();
	void* AddSoundToPipingSession();
	void* AddDamageToPipingSession();
	void* AddSpecialToPipingSession();
	void* AddPedGibToPipingSession();
	void* AddCarIncidentToPipingSession();
	void* AddPedIncidentToPipingSession();
	void* AddWallIncidentToPipingSession();
	void* AddProxRayToPipingSession();
	void* AddSkidAdjustmentToPipingSession();
	void* PipeSingleModelGeometry();
	void* PipeSinglePedestrian();
	void* PipeSingleCar();
	void* PipeSingleSound();
	void* PipeSingleOilSpill();
	void* PipeSingleDamage();
	void* PipeSingleSpecial();
	void* PipeSinglePedGib();
	void* PipeSingleCarIncident();
	void* PipeSinglePedIncident();
	void* PipeSingleWallIncident();
	void* PipeSingleScreenShake();
	void* PipeSingleGrooveStop();
	void* PipeFrameFinish();
	void* PipingFrameReset();
	void* PipeSingleSkidAdjustment();
	void* ResetPiping();
	void* InitialisePiping();
	void* DisposePiping();
	void* InitLastDamageArrayEtc();
	void* ResetCars();
	void* PipeCarPositions();
	void* ResetPipePlayToEnd();
	void* ResetPipePlayToStart();
	void* GetPipePlayPtr();
	void* SetPipePlayPtr();
	void* AdvanceChunkPtr();
	void* ApplyModelGeometry();
	void* DoSmudge();
	void* ApplySmudge();
	void* ApplyPedestrian();
	void* ApplySpark();
	void* ApplyShrapnel();
	void* ApplyScreenWobble();
	void* ApplyGrooveStop();
	void* ApplyNonCar();
	void* ApplySmoke();
	void* ApplySmokeColumn();
	void* ApplyFlame();
	void* ApplySplash();
	void* ApplyOilSpill();
	void* ApplyFrameBoundary();
	void* ApplySound();
	void* ApplyCar();
	void* ApplyDamage();
	void* ApplySpecial();
	void* ApplyPedGib();
	void* ApplyProxRay();
	void* ApplySkidAdjustment();
	void* ApplyPipedSession();
	void* MoveSessionPointerBackOne();
	void* MoveSessionPointerForwardOne();
	void* FindPreviousChunk();
	void* UndoModelGeometry();
	void* UndoSmudge();
	void* UndoPedestrian();
	void* UndoFrameBoundary();
	void* UndoCar();
	void* UndoSound();
	void* UndoDamage();
	void* UndoSpecial();
	void* UndoPedGib();
	void* UndoSpark();
	void* UndoShrapnel();
	void* UndoScreenWobble();
	void* UndoGrooveStop();
	void* UndoNonCar();
	void* UndoSmoke();
	void* UndoSmokeColumn();
	void* UndoFlame();
	void* UndoSplash();
	void* UndoOilSpill();
	void* UndoProxRay();
	void* UndoSkidAdjustment();
	void* UndoPipedSession();
	void* FindPrevFrameTime();
	void* ScanBuffer();
	void* CheckSound();
	void* SoundTimeout();
	void* ScanAndPlaySoundsToBe();
	void* CheckCar();
	void* CarTimeout();
	void* ScanCarsPositions();
	void* CheckIncident();
	void* GetNextIncident();
	void* GetARStartTime();

};

/*******************************
* Module: powerup
* Original path: C:/DETHRACE/source/common/powerup.c
* Lines of code: 1567
********************************/

class powerup {

	// Properties:
	void* _gPed_harvest_sounds;
	void* _gGot_procs;
	void* _gLose_procs;
	void* _gIcon_list;
	void* _gPeriodic_procs;
	void* _gFizzle_names;
	void* _gFizzle_in;
	void* _gNumber_of_powerups;
	void* _gReal_render_palette;
	void* _gFizzle_height;
	void* _gNumber_of_icons;
	void* _gPowerup_array;
	void* _gZero_v;

	// Methods:
	void* LosePowerupX();
	void* LosePowerup();
	void* LoseAllSimilarPowerups();
	void* GotPowerupX();
	void* GotPowerup();
	void* LoadPowerups();
	void* InitPowerups();
	void* CloseDownPowerUps();
	void* DrawPowerups();
	void* DoPowerupPeriodics();
	void* GotPowerupN();
	void* GotPowerup0();
	void* GotPowerup1();
	void* GotPowerup2();
	void* GotPowerup3();
	void* GotPowerup4();
	void* GotPowerup5();
	void* GotPowerup6();
	void* GotPowerup7();
	void* GotPowerup8();
	void* GotPowerup9();
	void* GotCredits();
	void* ImprovePSPowerup();
	void* GotTimeOrPower();
	void* SetPedSpeed();
	void* SetHades();
	void* ResetHades();
	void* SetPedSize();
	void* SetPedExplode();
	void* SetInvulnerability();
	void* ResetInvulnerability();
	void* SetFreeRepairs();
	void* ResetFreeRepairs();
	void* SetBlindPedestrians();
	void* ResetBlindPedestrians();
	void* FreezeTimer();
	void* UnfreezeTimer();
	void* DoInstantRepair();
	void* ResetPedSpeed();
	void* ResetPedSize();
	void* ResetPedExplode();
	void* SetEngineFactor();
	void* SetUnderwater();
	void* TrashBodywork();
	void* TakeDrugs();
	void* PaletteFuckedUpByDrugs();
	void* TheEffectsOfDrugs();
	void* SetOpponentsSpeed();
	void* SetCopsSpeed();
	void* SetGravity();
	void* SetPinball();
	void* SetWallclimb();
	void* SetBouncey();
	void* SetSuspension();
	void* SetTyreGrip();
	void* SetDamageMultiplier();
	void* ResetEngineFactor();
	void* ResetUnderwater();
	void* PukeDrugsBackUp();
	void* ResetOpponentsSpeed();
	void* ResetCopsSpeed();
	void* ResetGravity();
	void* ResetPinball();
	void* ResetWallclimb();
	void* ResetBouncey();
	void* ResetSuspension();
	void* ResetDamageMultiplier();
	void* ResetTyreGrip();
	void* PickAtRandom();
	void* PedestrianRespawn();
	void* GotVouchers();
	void* MungeVouchers();
	void* SetInstantHandbrake();
	void* ResetInstantHandbrake();
	void* DoBouncey();
	void* HitMine();
	void* SetMassMultiplier();
	void* ResetMassMultiplier();
	void* ShowPedestrians();
	void* HidePedestrians();
	void* SetProximity();
	void* ResetProximity();
	void* SetPedHarvest();
	void* ResetPedHarvest();
	void* SetVesuvianCorpses();
	void* ResetVesuvianCorpses();
	void* ReceivedPowerup();
	void* SendCurrentPowerups();
	void* LoseAllLocalPowerups();

};

/*******************************
* Module: pratcam
* Original path: C:/DETHRACE/source/common/pratcam.c
* Lines of code: 757
********************************/

class pratcam {

	// Properties:
	void* _gPrat_flic;
	void* _gWhirr_noise;
	void* _gPratcam_sequences;
	void* _gPratcam_flics;
	void* _gCurrent_pratcam_chunk;
	void* _gPending_ambient_prat;
	void* _gCurrent_pratcam_index;
	void* _gPrat_buffer;
	void* _gNumber_of_prat_sequences;
	void* _gNumber_of_prat_flics;
	void* _gLast_pratcam_frame_time;
	void* _gCurrent_pratcam_precedence;
	void* _gCurrent_ambient_prat_sequence;
	void* _gCurrent_pratcam_alternative;

	// Methods:
	void* PratcamGetCurrent();
	void* PratcamGetAmbient();
	void* PratcamGetPending();
	void* TogglePratcam();
	void* LoadPratcam();
	void* NextPratcamChunk();
	void* NewPratcamSequence();
	void* ChangeAmbientPratcamNow();
	void* ChangeAmbientPratcam();
	void* PratcamEventNow();
	void* PratcamEvent();
	void* HighResPratBufferWidth();
	void* HighResPratBufferHeight();
	void* InitPratcam();
	void* DisposePratcam();
	void* DoPratcam();
	void* TestPratCam();
	void* PratCam0();
	void* PratCam1();
	void* PratCam2();
	void* PratCam3();
	void* PratCam4();
	void* PratCam5();
	void* PratCam6();
	void* PratCam7();
	void* PratCam8();
	void* PratCam9();

};

/*******************************
* Module: racestrt
* Original path: C:/DETHRACE/source/common/racestrt.c
* Lines of code: 3640
********************************/

class racestrt {

	// Properties:
	void* _gGrid_number_colour;
	void* _gDead_car;
	void* _gFade_away_parts_shop;
	void* _gDare_start_time;
	void* _gRefund_rate;
	void* _gSwap_grid_2;
	void* _gSwap_grid_1;
	void* _gChange_race_net_mode;
	void* _gPart_category;
	void* _gNet_synch_start;
	void* _gChoose_car_net_game;
	void* _gPart_index;
	void* _gChallenger_index;
	void* _gDraw_grid_status;
	void* _gNet_race_sequence;
	void* _gLast_host_query;
	void* _gTaken_image;
	void* _gGrid_number_x_coords;
	void* _gGrid_transition_stage;
	void* _gJust_bought_part;
	void* _gGrid_y_adjust;
	void* _gBullet_image;
	void* _gDeceased_image;
	void* _gBest_pos_available;
	void* _gChallenger_position;
	void* _gOpponent_index;
	void* _gChallenge_time;
	void* _gOriginal_position;
	void* _gCurrent_race_index;
	void* _gStart_interface_spec;
	void* _gCurrent_car_index;
	void* _gOur_starting_position;

	// Methods:
	void* DrawRaceList();
	void* MoveRaceList();
	void* UpRace();
	void* DownRace();
	void* ClickOnRace();
	void* UpClickRace();
	void* DownClickRace();
	void* StartChangeRace();
	void* ChangeRace();
	void* DoChangeRace();
	void* DrawCar();
	void* SetCarFlic();
	void* UpCar();
	void* DownCar();
	void* UpClickCar();
	void* DownClickCar();
	void* ChangeCarGoAhead();
	void* ChangeCar();
	void* DoChangeCar();
	void* PartsShopRecommended();
	void* CalcPartPrice();
	void* BuyPart();
	void* DoAutoParts();
	void* DrawPartsLabel();
	void* ErasePartsText();
	void* DrawPartsText();
	void* SetPartsImage();
	void* GetPartsMax();
	void* CalcPartsIndex();
	void* DoExchangePart();
	void* PartsShopGoAhead();
	void* UpPart();
	void* DownPart();
	void* UpClickPart();
	void* DownClickPart();
	void* PartsArrowsOn();
	void* PartsArrowsOff();
	void* StartPartsShop();
	void* DonePartsShop();
	void* DrawPartsShop();
	void* DoPartsShop();
	void* AutoPartsDone();
	void* DoAutoPartsShop();
	void* SetOpponentFlic();
	void* DrawSceneyMappyInfoVieweyThing();
	void* DismissSceneyMappyInfoVieweyThing();
	void* SelectRaceDone();
	void* StartRaceGoAhead();
	void* TryToMoveToArrows();
	void* UpOpponent();
	void* DownOpponent();
	void* UpClickOpp();
	void* DownClickOpp();
	void* SelectRaceStart();
	void* SuggestRace();
	void* SelectRaceDraw();
	void* DoSelectRace();
	void* DrawGridCar();
	void* DrawGrid();
	void* MoveGrid();
	void* CalcGridOffset();
	void* GridDraw();
	void* ActuallySwapOrder();
	void* DoGridTransition();
	void* ChallengeStart();
	void* CheckNextStage();
	void* ChallengeDone();
	void* DoChallengeScreen();
	void* GridDone();
	void* GridStart();
	void* GridMoveLeft();
	void* GridMoveRight();
	void* GridClickCar();
	void* GridClickNumbers();
	void* GridClickLeft();
	void* GridClickRight();
	void* CheckChallenge();
	void* FindBestPos();
	void* SortGridFunction();
	void* SortOpponents();
	void* DoGridPosition();
	void* CheckPlayersAreResponding();
	void* NetSynchStartStart();
	void* DrawAnItem();
	void* NetSynchStartDraw();
	void* NetSynchStartDone();
	void* NetSynchStartGoAhead();
	void* ExitWhenReady();
	void* NetSynchRaceStart2();
	void* NetSynchRaceStart();

};

/*******************************
* Module: racesumm
* Original path: C:/DETHRACE/source/common/racesumm.c
* Lines of code: 1866
********************************/

class racesumm {

	// Properties:
	void* _gPlayer_lookup;
	void* _gOld_back_button;
	void* _gWreck_array;
	void* _gWreck_root;
	void* _gWreck_camera;
	void* _gWreck_start_zoom;
	void* _gWreck_gallery_start;
	void* _gTemp_rank_increase;
	void* _gRank_per_ms;
	void* _gLast_wreck_draw;
	void* _gSumm_sound;
	void* _gCredits_per_ms;
	void* _gBack_button_ptr;
	void* _gSummary_start;
	void* _gWreck_z_buffer;
	void* _gWreck_render_area;
	void* _gWreck_selected;
	void* _gWreck_zoom_out;
	void* _gChrome_font;
	void* _gWreck_zoom_in;
	void* _gTemp_credits;
	void* _gUser_interacted;
	void* _gWreck_count;
	void* _gRank_etc_munged;
	void* _gRank_increase;
	void* _gTemp_earned;
	void* _gTemp_rank;
	void* _gWreck_zoomed_in;
	void* _gDone_initial;
	void* _gTemp_lost;

	// Methods:
	void* MungeRankEtc();
	void* CalcRankIncrease();
	void* RaceSummaryDone();
	void* DrawInBox();
	void* DrawChromeNumber();
	void* DrawSummaryItems();
	void* RampUpRate();
	void* DrawSummary();
	void* StartSummary();
	void* SetUpTemps();
	void* Summ1GoAhead();
	void* SummCheckGameOver();
	void* DoEndRaceSummary1();
	void* PrepareBoundingRadius();
	void* BuildWrecks();
	void* DisposeWrecks();
	void* MatrixIsIdentity();
	void* SpinWrecks();
	void* ZoomInTo();
	void* ZoomOutTo();
	void* _WreckPick();
	void* CastSelectionRay();
	void* DamageScrnExit();
	void* DamageScrnDraw();
	void* DamageScrnLeft();
	void* DamageScrnRight();
	void* DamageScrnUp();
	void* DamageScrnDown();
	void* DamageScrnGoHead();
	void* ClickDamage();
	void* DamageScrnDone();
	void* DoEndRaceSummary2();
	void* DrawAnItem();
	void* DrawColumnHeading();
	void* SortScores();
	void* SortGameScores();
	void* NetSumDraw();
	void* DoNetRaceSummary();
	void* DoEndRaceSummary();

};

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

/*******************************
* Module: replay
* Original path: C:/DETHRACE/source/common/replay.c
* Lines of code: 972
********************************/

class replay {

	// Properties:
	void* _gProgress_line_top;
	void* _gProgress_line_left;
	void* _gProgress_line_right;
	void* _gReplay_pixies;
	void* _gReplay_pixie_names;
	void* _gKey_down;
	void* _gNo_cursor;
	void* _gSingle_frame_mode;
	void* _gSave_frame_number;
	void* _gCam_change_button_down;
	void* _gAction_replay_start_time;
	void* _gLast_replay_zappy_screen;
	void* _gStopped_time;
	void* _gCam_change_time;
	void* _gPending_replay_rate;
	void* _gAction_replay_end_time;
	void* _gReplay_rate;
	void* _gSave_file;
	void* _gSave_bunch_ID;
	void* _gPlay_direction;
	void* _gPaused;
	void* _gAction_replay_camera_mode;

	// Methods:
	void* ReplayIsPaused();
	void* GetReplayRate();
	void* GetReplayDirection();
	void* StopSaving();
	void* ActualActionReplayHeadups();
	void* DoActionReplayPostSwap();
	void* DoZappyActionReplayHeadups();
	void* DoActionReplayHeadups();
	void* MoveReplayBuffer();
	void* MoveToEndOfReplay();
	void* MoveToStartOfReplay();
	void* ToggleReplay();
	void* ReverseSound();
	void* FindUniqueFile();
	void* PollActionReplayControls();
	void* CheckReplayTurnOn();
	void* InitializeActionReplay();
	void* DoActionReplay();
	void* SynchronizeActionReplay();

};

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

/*******************************
* Module: sound
* Original path: C:/DETHRACE/source/common/sound.c
* Lines of code: 1142
********************************/

class sound {

	// Properties:
	void* _gIndexed_outlets;
	void* _gRandom_CDA_tunes;
	void* _gLast_sound_service;
	void* _gSong_repeat_count;
	void* _gServicing_sound;
	void* _gCD_fully_installed;
	void* _gCD_is_disabled;
	void* _gCDA_is_playing;
	void* _gSound_sources_inited;
	void* _gCDA_tag;
	void* _gEngine_outlet;
	void* _gRandom_Rockin_MIDI_tunes;
	void* _gOld_sound_detail_level;
	void* _gLast_tune;
	void* _gVirgin_pass;
	void* _gCamera_left;
	void* _gRandom_MIDI_tunes;
	void* _gCamera_position;
	void* _gOld_camera_position;
	void* _gCamera_velocity;
	void* _gSound_detail_level;
	void* _gDriver_outlet;
	void* _gPedestrians_outlet;
	void* _gCar_outlet;
	void* _gMIDI_id;
	void* _gMusic_available;
	void* _gMusic_outlet;
	void* _gEffects_outlet;

	// Methods:
	void* UsePathFileToDetermineIfFullInstallation();
	void* InitSound();
	void* DRS3StartSound();
	void* DRS3StartSoundNoPiping();
	void* DRS3StartSound2();
	void* DRS3ChangeVolume();
	void* DRS3ChangeLRVolume();
	void* DRS3ChangePitch();
	void* DRS3ChangeSpeed();
	void* DRS3ChangePitchSpeed();
	void* DRS3StopSound();
	void* DRS3LoadSound();
	void* DRS3ReleaseSound();
	void* DRS3Service();
	void* DRS3OutletSoundsPlaying();
	void* DRS3SoundStillPlaying();
	void* DRS3ShutDown();
	void* DRS3SetOutletVolume();
	void* DRS3OverallVolume();
	void* DRS3StopOutletSound();
	void* DRS3StopAllOutletSounds();
	void* ToggleSoundEnable();
	void* SoundService();
	void* InitSoundSources();
	void* DisposeSoundSources();
	void* DRS3StartSound3D();
	void* DRS3StartSoundFromSource3();
	void* DRS3StartSoundFromSource();
	void* MungeEngineNoise();
	void* SetSoundVolumes();
	void* GetOutletFromIndex();
	void* GetIndexFromOutlet();
	void* DRS3StartCDA();
	void* DRS3StopCDA();
	void* StartMusic();
	void* StopMusic();

};

/*******************************
* Module: spark
* Original path: C:/DETHRACE/source/common/spark.c
* Lines of code: 3791
********************************/

class spark {

	// Properties:
	void* _gFlame_map;
	void* _gBR_smoke_pointers;
	void* _gSplash;
	void* _gSplash_material;
	void* _gBR_smoke_structs;
	void* _gSmoke_column;
	void* _gCameraToScreen;
	void* _gSparks;
	void* _gShrapnel_model;
	void* _gShade_list;
	void* _gN_BR_smoke_structs;
	void* _gDust_table;
	void* _gSmoke;
	void* _gSplash_flags;
	void* _gSmoke_num;
	void* _gNext_column;
	void* _gColumn_flags;
	void* _gNext_splash;
	void* _gOffset;
	void* _gIt_type;
	void* _gBlack_smoke_shade_table;
	void* _gGrey_smoke_shade_table;
	void* _gLollipop_model;
	void* _gNum_splash_types;
	void* _gNum_dust_tables;
	void* _gSmoke_on;
	void* _gSmoke_flags;
	void* _gSplash_model;
	void* _gDust_rotate;
	void* _gIt_shade_table;
	void* _gDark_smoke_shade_table;
	void* _gShrapnel_flags;
	void* _gSpark_flags;
	void* _gNext_shrapnel;
	void* _gSpark_cam;
	void* _gNext_spark;
	void* _gBlack_material;
	void* _gShrapnel;

	// Methods:
	void* DrawDot();
	void* SetWorldToScreen();
	void* DrawLine3DThroughBRender();
	void* DrawLine3D();
	void* DrawLine2D();
	void* SetLineModelCols();
	void* ReplaySparks();
	void* RenderSparks();
	void* CreateSingleSpark();
	void* CreateSparks();
	void* CreateSparkShower();
	void* AdjustSpark();
	void* AdjustShrapnel();
	void* ResetSparks();
	void* ResetShrapnel();
	void* CreateShrapnelShower();
	void* random();
	void* InitShrapnel();
	void* LoadInShrapnel();
	void* KillShrapnel();
	void* DisposeShrapnel();
	void* ReplayShrapnel();
	void* MungeShrapnel();
	void* DrMatrix34Rotate();
	void* SmokeLine();
	void* SmokeCircle();
	void* _CmpSmokeZ();
	void* RenderRecordedSmokeCircles();
	void* RecordSmokeCircle();
	void* SmokeCircle3D();
	void* ReplaySmoke();
	void* GenerateContinuousSmoke();
	void* DustRotate();
	void* RenderSmoke();
	void* CreatePuffOfSmoke();
	void* ResetSmoke();
	void* AdjustSmoke();
	void* ActorError();
	void* AdjustSmokeColumn();
	void* CreateSmokeColumn();
	void* GenerateSmokeShades();
	void* GenerateItFoxShadeTable();
	void* AdjustFlame();
	void* ReplayFlame();
	void* FlameAnimate();
	void* DoSmokeColumn();
	void* ReplaySmokeColumn();
	void* MungeSmokeColumn();
	void* DisposeFlame();
	void* InitFlame();
	void* InitSplash();
	void* DisposeSplash();
	void* DrawTheGlow();
	void* PipeInstantUnSmudge();
	void* SmudgeCar();
	void* ResetSmokeColumns();
	void* SetSmokeOn();
	void* ReallySetSmokeOn();
	void* SetSmoke();
	void* GetSmokeOn();
	void* StopCarSmoking();
	void* StopCarSmokingInstantly();
	void* ConditionalSmokeColumn();
	void* SingleSplash();
	void* CreateSplash();
	void* MungeSplash();
	void* RenderSplashes();
	void* GetSmokeShadeTables();
	void* FreeSmokeShadeTables();
	void* LoadInKevStuff();
	void* DisposeKevStuff();
	void* DisposeKevStuffCar();
	void* _DoTrueColModelThing();
	void* _DoModelThing();
	void* SetModelShade();
	void* MakeCarIt();
	void* StopCarBeingIt();

};

/*******************************
* Module: structur
* Original path: C:/DETHRACE/source/common/structur.c
* Lines of code: 877
********************************/

class structur {

	// Properties:
	void* _gOpponent_mix;
	void* _gPratcam_on;
	void* _gRace_over_reason;
	void* _gCockpit_on;
	void* _gLast_checkpoint_time;
	void* _gLast_wrong_checkpoint;
	void* _gMirror_on;

	// Methods:
	void* NumberOfOpponentsLeft();
	void* RaceCompleted();
	void* Checkpoint();
	void* IncrementCheckpoint();
	void* IncrementLap();
	void* RayHitFace();
	void* WrongCheckpoint();
	void* CheckCheckpoints();
	void* TotalRepair();
	void* DoLogos();
	void* DoProgOpeningAnimation();
	void* DoProgramDemo();
	void* ChooseOpponent();
	void* SelectOpponents();
	void* PickNetRace();
	void* SwapNetCarsLoad();
	void* SwapNetCarsDispose();
	void* DoGame();
	void* InitialiseProgramState();
	void* DoProgram();
	void* JumpTheStart();
	void* GoingToInterfaceFromRace();
	void* GoingBackToRaceFromInterface();

};

/*******************************
* Module: trig
* Original path: C:/DETHRACE/source/common/trig.c
* Lines of code: 791
********************************/

class trig {

	// Properties:
	void* _mat23tmp1;
	void* _mat23tmp2;
	void* _mattmp1;
	void* _mattmp2;
	void* _gFixed_sine_table;
	void* _gFloat_sine_table;

	// Methods:
	void* FastFloatSin();
	void* FastFloatCos();
	void* FastFloatTan();
	void* FastScalarSin();
	void* FastScalarCos();
	void* FastScalarTan();
	void* FastScalarSinAngle();
	void* FastScalarCosAngle();
	void* FastScalarTanAngle();
	void* FastFloatArcSin();
	void* FastFloatArcCos();
	void* FastScalarArcSin();
	void* FastScalarArcCos();
	void* FastFloatArcTan2();
	void* FastScalarArcTan2();
	void* FastFloatArcTan2Angle();
	void* FastScalarArcTan2Angle();
	void* DRMatrix34RotateX();
	void* DRMatrix34RotateY();
	void* DRMatrix34RotateZ();
	void* DRMatrix34Rotate();
	void* DRMatrix34PreRotateX();
	void* DRMatrix34PostRotateX();
	void* DRMatrix34PreRotateY();
	void* DRMatrix34PostRotateY();
	void* DRMatrix34PreRotateZ();
	void* DRMatrix34PostRotateZ();
	void* DRMatrix34PreRotate();
	void* DRMatrix34PostRotate();
	void* DRMatrix23Rotate();
	void* DRMatrix23PreRotate();
	void* DRMatrix23PostRotate();

};

/*******************************
* Module: utility
* Original path: C:/DETHRACE/source/common/utility.c
* Lines of code: 2148
********************************/

class utility {

	// Properties:
	void* _gLong_key;
	void* _gOther_long_key;
	void* _gMisc_strings;
	void* _gIn_check_quit;
	void* _gLost_time;
	void* _gEncryption_method;
	void* _g16bit_palette;
	void* _gSource_for_16bit_palette;

	// Methods:
	void* CheckQuit();
	void* sqr();
	void* EncodeLine();
	void* IRandomBetween();
	void* PercentageChance();
	void* IRandomPosNeg();
	void* FRandomBetween();
	void* FRandomPosNeg();
	void* SRandomBetween();
	void* SRandomPosNeg();
	void* GetALineWithNoPossibleService();
	void* GetALineAndDontArgue();
	void* PathCat();
	void* Chance();
	void* tandeg();
	void* GetFileLength();
	void* BooleanTo1Or0();
	void* DRPixelmapAllocate();
	void* DRPixelmapAllocateSub();
	void* DRPixelmapMatchSized();
	void* CopyDoubled8BitTo16BitRectangle();
	void* Scale8BitPixelmap();
	void* Tile8BitPixelmap();
	void* FindExceptionInList();
	void* PurifiedPixelmap();
	void* DRPixelmapLoad();
	void* DRPixelmapLoadMany();
	void* WaitFor();
	void* DRActorEnumRecurse();
	void* _CompareActorID();
	void* DRActorFindRecurse();
	void* DRActorEnumRecurseWithMat();
	void* DRActorEnumRecurseWithTrans();
	void* sign();
	void* fsign();
	void* OpenUniqueFileB();
	void* PrintScreenFile();
	void* PrintScreenFile16();
	void* PrintScreen();
	void* GetTotalTime();
	void* GetRaceTime();
	void* AddLostTime();
	void* TimerString();
	void* GetMiscString();
	void* GetCopyOfMiscString();
	void* Flash();
	void* MaterialCopy();
	void* RGBDifferenceSqr();
	void* FindBestMatch();
	void* BuildShadeTablePath();
	void* LoadGeneratedShadeTable();
	void* SaveGeneratedShadeTable();
	void* GenerateShadeTable();
	void* GenerateDarkenedShadeTable();
	void* PossibleService();
	void* DRMatrix34TApplyP();
	void* PaletteEntry16Bit();
	void* PaletteOf16Bits();
	void* Copy8BitTo16Bit();
	void* Copy8BitTo16BitRectangle();
	void* Copy8BitTo16BitRectangleWithTransparency();
	void* Copy8BitToOnscreen16BitRectangleWithTransparency();
	void* Copy8BitRectangleTo16BitRhombusWithTransparency();
	void* DRPixelmapRectangleCopy();
	void* DRPixelmapCopy();
	void* DRPixelmapRectangleFill();
	void* NormalSideOfPlane();
	void* DRMaterialClone();
	void* StripCR();
	void* SubsStringJob();
	void* DecodeLine2();
	void* EncodeLine2();
	void* EncodeFile();
	void* EncodeFileWrapper();
	void* EncodeAllFilesInDirectory();
	void* SkipNLines();
	void* DRStricmp();
	void* GlorifyMaterial();
	void* WhitenVertexRGB();
	void* NobbleNonzeroBlacks();
	void* PDCheckDriveExists();
	void* OpacityInPrims();
	void* AlreadyBlended();
	void* BlendifyMaterialTablishly();
	void* BlendifyMaterialPrimitively();
	void* BlendifyMaterial();

};

/*******************************
* Module: world
* Original path: C:/DETHRACE/source/common/world.c
* Lines of code: 19688
********************************/

class world {

	// Properties:
	void* _gActor_array;
	void* _gGroove_funk_bindings;
	void* _gDelete_list;
	void* _gLight_array;
	void* _gAdditional_models;
	void* _gSpec_vol_actors;
	void* _gDepth_effect_names;
	void* _gFunk_nature_names;
	void* _gGroove_object_names;
	void* _gGroove_path_names;
	void* _gGroove_nature_names;
	void* _gFunk_anim_names;
	void* _gFunk_move_names;
	void* _gAdditional_actor_path;
	void* _gTime_mode_names;
	void* _gAdditional_model_path;
	void* _gPrevious_groove_times;
	void* _gRace_file_version;
	void* _gActor_centre;
	void* _gWall_texturing_level;
	void* _gNumber_of_additional_models;
	void* _gNumber_of_actors;
	void* _gTemp;
	void* _gLast_actor;
	void* _gKnown_actor;
	void* _gAdditional_actors;
	void* _gGroove_by_proxy_actor;
	void* _gRendering_accessories;
	void* _gCurrent_scale_mode;
	void* _gNumber_of_lights;
	void* _gRoad_texturing_level;
	void* _gDelete_count;
	void* _gNearest_distance;
	void* _gNearest_actor;
	void* _gStandard_lamp;
	void* _gCurrent_rotate_mode;
	void* _gCar_texturing_level;
	void* _gSight_distance_squared;
	void* _gLollipop_names;
	void* _gAxis_names;
	void* _gGroovidelics_array_size;
	void* _gGroovidelics_array;
	void* _gSpec_vol_mode;
	void* _gFunk_type_names;
	void* _gFunkotronics_array;
	void* _gFunkotronics_array_size;

	// Methods:
	void* MapSawToTriangle();
	void* SetSightDistance();
	void* FindActorInArray();
	void* FindLightInArray();
	void* CloneActor();
	void* InitialiseStorageSpace();
	void* DisposeStorageSpace();
	void* ClearOutStorageSpace();
	void* AddPixelmapToStorage();
	void* AddShadeTableToStorage();
	void* AddMaterialToStorage();
	void* AddModelToStorage();
	void* LoadNPixelmaps();
	void* LoadSinglePixelmap();
	void* LoadSingleMaterial();
	void* LoadNShadeTables();
	void* LoadSingleShadeTable();
	void* LoadNMaterials();
	void* LoadNModels();
	void* DodgyModelUpdate();
	void* SuffixedMaterial();
	void* FaceIsRoad();
	void* RoadPerspToUntex();
	void* WallPerspToLinear();
	void* WallPerspToUntex();
	void* ProcessModelFaceMaterials2();
	void* ProcessModelFaceMaterials();
	void* LoadNTrackModels();
	void* LoadSomePixelmaps();
	void* LoadSomeShadeTables();
	void* LoadSomeMaterials();
	void* LoadSomeModels();
	void* LoadSomeTrackModels();
	void* AddFunkGrooveBinding();
	void* ControlBoundFunkGroove();
	void* ControlBoundFunkGroovePlus();
	void* ShiftBoundGrooveFunks();
	void* AddNewFunkotronic();
	void* DisposeFunkotronics();
	void* AddProximityVertex();
	void* AddProximityVertexXYZ();
	void* CalcProximities();
	void* AddProximities();
	void* Adjust2FloatsForExceptions();
	void* AddFunkotronics();
	void* DisposeGroovidelics();
	void* AddNewGroovidelic();
	void* AddGroovidelics();
	void* KillGroovadelic();
	void* KillFunkotronic();
	void* DeleteBastards();
	void* DeleteAnyZeroBastards();
	void* ApplyTransToModels();
	void* FindSpecVolIndex();
	void* MungeMaterial();
	void* SetSpecVolMatSize();
	void* FindInverseAndWorldBox();
	void* UpdateSpecVol();
	void* SaveSpecialVolumes();
	void* SaveAdditionalStuff();
	void* _ProcessMaterials();
	void* _ProcessFaceMaterials2();
	void* ChangePerspToSubdivCB();
	void* ChangePerspToSubdiv();
	void* ChangeSubdivToPerspCB();
	void* ChangeSubdivToPersp();
	void* _ProcessFaceMaterials();
	void* DRPixelmapHasZeros();
	void* StorageContainsPixelmap();
	void* HideStoredOpaqueTextures();
	void* RevealStoredTransparentTextures();
	void* HideStoredTextures();
	void* RevealStoredTextures();
	void* SetCarStorageTexturingLevel();
	void* GetCarTexturingLevel();
	void* SetCarTexturingLevel();
	void* HasThisSuffix();
	void* UnsuffixedMaterial();
	void* RoadUntexToPersp();
	void* WallLinearToUntex();
	void* WallUntexToLinear();
	void* WallUntexToPersp();
	void* WallLinearToPersp();
	void* GetRoadTexturingLevel();
	void* SetRoadTexturingLevel();
	void* ReallySetRoadTexturingLevel();
	void* GetWallTexturingLevel();
	void* SetWallTexturingLevel();
	void* ReallySetWallTexturingLevel();
	void* DisposeSuffixedMaterials();
	void* DisposeTexturingMaterials();
	void* _SetAccessoryRenderingCB();
	void* SetAccessoryRendering();
	void* GetAccessoryRendering();
	void* SetCarSimplificationLevel();
	void* GetCarSimplificationLevel();
	void* ParseSpecialVolume();
	void* AddExceptionToList();
	void* LoadExceptionsFile();
	void* LoadExceptionsFileForTrack();
	void* FreeExceptions();
	void* LoadTrack();
	void* _RemoveBounds();
	void* RemoveBoundsStructures();
	void* FreeTrack();
	void* ProcessTrack();
	void* NormaliseDegreeAngle();
	void* FunkThoseTronics();
	void* LollipopizeActor();
	void* CalcActorGlobalPos();
	void* PointOutOfSight();
	void* PathGrooveBastard();
	void* ObjectGrooveBastard();
	void* GrooveThisDelic();
	void* GrooveThoseDelics();
	void* StopGroovidelic();
	void* SetGrooveInterrupt();
	void* ResetGrooveFlags();
	void* GetDefaultSpecialVolumeForWater();
	void* FindSpecialVolume();
	void* SaveAdditionalActors();
	void* DistanceFromFace();
	void* _CalcHighestID();
	void* _SetID();
	void* UniquificateActorsName();
	void* AccessoryHeadup();
	void* _CalcHighestNonAmID();
	void* _SetIDAndDupModel();
	void* DuplicateIfNotAmpersand();
	void* DropActor();
	void* DropActor0();
	void* DropActor1();
	void* DropActor2();
	void* DropActor3();
	void* DropActor4();
	void* DropActor5();
	void* DropActor6();
	void* DropActor7();
	void* DropActor8();
	void* DropActor9();
	void* _IdentifyAccCB();
	void* IdentifyAcc();
	void* _DelGrooveRef();
	void* _DelReferencedModels();
	void* DeleteAcc();
	void* _OffsetModel();
	void* OffsetActor();
	void* CentreActor();
	void* SnapAccToVertical();
	void* RotateAccessory();
	void* ScaleAccessory();
	void* MoveAccessory();
	void* RotateAccL();
	void* RotateAccL2();
	void* RotateAccL3();
	void* RotateAccL4();
	void* RotateAccR();
	void* RotateAccR2();
	void* RotateAccR3();
	void* RotateAccR4();
	void* CycleAccRotate();
	void* CycleAccScale();
	void* ScaleAccUp2();
	void* ScaleAccUp3();
	void* ScaleAccUp4();
	void* ScaleAccDown2();
	void* ScaleAccDown3();
	void* ScaleAccDown4();
	void* MoveXAccL();
	void* MoveXAccL2();
	void* MoveXAccL3();
	void* MoveXAccL4();
	void* MoveXAccR();
	void* MoveXAccR2();
	void* MoveXAccR3();
	void* MoveXAccR4();
	void* MoveYAccL();
	void* MoveYAccL2();
	void* MoveYAccL3();
	void* MoveYAccL4();
	void* MoveYAccR();
	void* MoveYAccR2();
	void* MoveYAccR3();
	void* MoveYAccR4();
	void* MoveZAccL();
	void* MoveZAccL2();
	void* MoveZAccL3();
	void* MoveZAccL4();
	void* MoveZAccR();
	void* MoveZAccR2();
	void* MoveZAccR3();
	void* MoveZAccR4();
	void* GetInternalMat();
	void* GetExternalMat();
	void* BuildSpecVolModel();
	void* DropSpecVol();
	void* DropSpecVol0();
	void* DropSpecVol1();
	void* DropSpecVol2();
	void* DropSpecVol3();
	void* DropSpecVol4();
	void* DropSpecVol5();
	void* DropSpecVol6();
	void* DropSpecVol7();
	void* DropSpecVol8();
	void* DropSpecVol9();
	void* IdentifySpecVol();
	void* DelSpecVolumeGraph();
	void* DeleteSpecVol();
	void* RotateSpecVolL();
	void* RotateSpecVolL2();
	void* RotateSpecVolL3();
	void* RotateSpecVolL4();
	void* RotateSpecVolR();
	void* RotateSpecVolR2();
	void* RotateSpecVolR3();
	void* RotateSpecVolR4();
	void* CycleSpecVolRotate();
	void* CycleSpecVolScale();
	void* ScaleSpecVolUp2();
	void* ScaleSpecVolUp3();
	void* ScaleSpecVolUp4();
	void* ScaleSpecVolDown2();
	void* ScaleSpecVolDown3();
	void* ScaleSpecVolDown4();
	void* MoveXSpecVolL();
	void* MoveXSpecVolL2();
	void* MoveXSpecVolL3();
	void* MoveXSpecVolL4();
	void* MoveXSpecVolR();
	void* MoveXSpecVolR2();
	void* MoveXSpecVolR3();
	void* MoveXSpecVolR4();
	void* MoveYSpecVolL();
	void* MoveYSpecVolL2();
	void* MoveYSpecVolL3();
	void* MoveYSpecVolL4();
	void* MoveYSpecVolR();
	void* MoveYSpecVolR2();
	void* MoveYSpecVolR3();
	void* MoveYSpecVolR4();
	void* MoveZSpecVolL();
	void* MoveZSpecVolL2();
	void* MoveZSpecVolL3();
	void* MoveZSpecVolL4();
	void* MoveZSpecVolR();
	void* MoveZSpecVolR2();
	void* MoveZSpecVolR3();
	void* MoveZSpecVolR4();
	void* SnapSpecVolToVertical();
	void* ShowSpecialVolumes();
	void* HideSpecialVolumes();

};

/*******************************
* Module: dosnet
* Original path: C:/DETHRACE/source/pc-dos/dosnet.c
* Lines of code: 1815
********************************/

class dosnet {

	// Properties:
	void* _gListen_elements;
	void* _gLocal_ipx_addr_string;
	void* _gSend_elements;
	void* _gLocal_addr_ipx;
	void* _gReceive_buffer;
	void* _gRemote_net_player_info;
	void* _gBroadcast_addr_ipx;
	void* _gLocal_net_player_info;
	void* _gSend_buffer;
	void* _gNetworks;
	void* _gRemote_addr_ipx;
	void* _gSend_packet;
	void* _gListen_segment;
	void* _gSend_packet_ptr;
	void* _gSend_segment;
	void* _gListen_packet;
	void* _gListen_packet_ptr;
	void* _gMsg_header_strlen;
	void* _gNumber_of_networks;
	void* _gNumber_of_hosts;
	void* _gNetwork_init_flags;
	void* _gJoinable_games;
	void* _RMI;
	void* _gMatts_PC;
	void* _gLast_received_IPX_header;
	void* _gSocket_number_network_order;
	void* _gSocket_number_pd_format;
	void* _gECB_offset;
	void* _gListen_selector;
	void* _gSend_selector;

	// Methods:
	void* ClearupPDNetworkStuff();
	void* MATTMessageCheck();
	void* GetProfileText();
	void* GetSocketNumberFromProfileFile();
	void* EthernetAddressToU32();
	void* NetNowIPXLocalTarget2String();
	void* GetMessageTypeFromMessage();
	void* SameEthernetAddress();
	void* GetIPXAddrFromPlayerID();
	void* MakeMessageToSend();
	void* ReceiveHostResponses();
	void* BroadcastMessage();
	void* hmiIPXCloseSocket();
	void* hmiIPXListenForPacket();
	void* hmiIPXPostListen();
	void* _hmiIPXGetData();
	void* hmiIPXSendPacket();
	void* hmiIPXSendDataDirect();
	void* hmiIPXGetInternetworkAddr();
	void* hmiIPXGetLocalTarget();
	void* AllocateRealMem();
	void* FreeRealMem();
	void* hmiIPXInstalled();
	void* hmiIPXOpenSocket();
	void* GetLargestPacketSizeOoErBetterInsertLinfordChristieJokeHere();
	void* hmiIPXInitSystem();
	void* GetIPXToStickItsEarToTheGround();
	void* PDNetInitialise();
	void* PDNetShutdown();
	void* PDNetStartProducingJoinList();
	void* PDNetEndJoinList();
	void* PDNetGetNextJoinGame();
	void* PDNetDisposeGameDetails();
	void* PDNetHostGame();
	void* PDNetJoinGame();
	void* PDNetLeaveGame();
	void* PDNetHostFinishGame();
	void* PDNetExtractGameID();
	void* PDNetExtractPlayerID();
	void* PDNetObtainSystemUserName();
	void* PDNetSendMessageToPlayer();
	void* PDNetSendMessageToAllPlayers();
	void* PDNetGetNextMessage();
	void* PDNetAllocateMessage();
	void* PDNetDisposeMessage();
	void* PDNetSetPlayerSystemInfo();
	void* PDNetDisposePlayer();
	void* PDNetSendMessageToAddress();
	void* PDNetInitClient();
	void* PDNetGetHeaderSize();

};

/*******************************
* Module: dossys
* Original path: C:/DETHRACE/source/pc-dos/dossys.c
* Lines of code: 2140
********************************/

class dossys {

	// Properties:
	void* _gASCII_table;
	void* _gKeyboard_bits;
	void* _gASCII_shift_table;
	void* _gGraf_specs;
	void* _gNetwork_profile_fname;
	void* _gJoystick_min1y;
	void* _gJoystick_min2y;
	void* _gJoystick_min2x;
	void* _gRaw_joystick2y;
	void* _gRaw_joystick2x;
	void* _gRaw_joystick1y;
	void* _gRaw_joystick1x;
	void* _gJoystick_range2y;
	void* _gJoystick_range2x;
	void* _gJoystick_range1y;
	void* _gJoystick_range1x;
	void* _gNo_voodoo;
	void* _gSwitched_resolution;
	void* _gReplay_override;
	void* _gReal_back_screen;
	void* _gJoystick_min1x;
	void* _gTemp_screen;
	void* _gDOSGfx_initialized;
	void* _gUpper_loop_limit;
	void* _gExtra_mem;
	void* _gReal_back_screen_locked;
	void* _gPrev_keyboard_handler;
	void* _gScan_code;

	// Methods:
	void* KeyboardHandler();
	void* KeyDown();
	void* KeyTranslation();
	void* KeyBegin();
	void* KeyEnd();
	void* KeyDown22();
	void* PDSetKeyArray();
	void* PDGetASCIIFromKey();
	void* PDFatalError();
	void* PDNonFatalError();
	void* PDInitialiseSystem();
	void* PDShutdownSystem();
	void* PDSaveOriginalPalette();
	void* PDRevertPalette();
	void* PDInitScreenVars();
	void* PDInitScreen();
	void* PDLockRealBackScreen();
	void* PDUnlockRealBackScreen();
	void* PDAllocateScreenAndBack();
	void* Copy8BitTo16BitPixelmap();
	void* Double8BitTo16BitPixelmap();
	void* PDInterfacePixelmap();
	void* SwapBackScreen();
	void* ReallyCopyBackScreen();
	void* CopyBackScreen();
	void* PDScreenBufferSwap();
	void* PDPixelmapToScreenRectangleCopy();
	void* PDPixelmapHLineOnScreen();
	void* PDPixelmapVLineOnScreen();
	void* PDInstallErrorHandlers();
	void* PDSetFileVariables();
	void* PDBuildAppPath();
	void* PDForEveryFile();
	void* PDSetPalette();
	void* PDSetPaletteEntries();
	void* PDSwitchToRealResolution();
	void* PDSwitchToLoresMode();
	void* PDMouseButtons();
	void* PDGetMousePosition();
	void* PDGetTotalTime();
	void* PDServiceSystem();
	void* LargestBlockAvail();
	void* PDGrabLargestMammaryWeCanPlayWith();
	void* PDAllocateActionReplayBuffer();
	void* PDDisposeActionReplayBuffer();
	void* Usage();
	void* main();
	void* OurGetChar();
	void* PDGetGorePassword();
	void* PDDisplayGoreworthiness();
	void* PDEnterDebugger();
	void* PDEndItAllAndReRunTheBastard();
	void* matherr();
	void* LoopLimitTooLow();
	void* UpperLoopLimit();
	void* InitJoysticks();
	void* ReadJoystickAxis();
	void* PDReadJoySticks();
	void* PDGetJoy1X();
	void* PDGetJoy1Y();
	void* PDGetJoy2X();
	void* PDGetJoy2Y();
	void* PDGetJoy1Button1();
	void* PDGetJoy1Button2();
	void* PDGetJoy1Button3();
	void* PDGetJoy1Button4();
	void* PDGetJoy2Button1();
	void* PDGetJoy2Button2();
	void* PDGetJoy2Button3();
	void* PDGetJoy2Button4();
	void* PDFileUnlock();
	void* CriticalISR();
	void* PDCheckDriveExists2();
	void* PDDoWeLeadAnAustereExistance();

};

/*******************************
* Module: mem
* Original path: C:/BRSRC13/CORE/FW/mem.c
* Lines of code: 130
********************************/

class mem {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrMemAllocate();
	void* _BrMemFree();
	void* _BrMemInquire();
	void* _BrMemAlign();
	void* _BrMemCalloc();
	void* _BrMemStrDup();

};

/*******************************
* Module: regsupt
* Original path: C:/BRSRC13/CORE/V1DB/regsupt.c
* Lines of code: 415
********************************/

class regsupt {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrModelAdd();
	void* _BrModelRemove();
	void* _BrModelFind();
	void* _BrModelFindHook();
	void* _BrModelAddMany();
	void* _BrModelRemoveMany();
	void* _BrModelFindMany();
	void* _BrModelCount();
	void* _BrModelEnum();
	void* _BrMaterialAdd();
	void* _BrMaterialRemove();
	void* _BrMaterialFind();
	void* _BrMaterialFindHook();
	void* _BrMaterialAddMany();
	void* _BrMaterialRemoveMany();
	void* _BrMaterialFindMany();
	void* _BrMaterialCount();
	void* _BrMaterialEnum();
	void* _BrMapAdd();
	void* _BrMapRemove();
	void* _BrMapFind();
	void* _BrMapFindHook();
	void* _BrMapAddMany();
	void* _BrMapRemoveMany();
	void* _BrMapFindMany();
	void* _BrMapCount();
	void* _BrMapEnum();
	void* _BrTableAdd();
	void* _BrTableRemove();
	void* _BrTableFind();
	void* _BrTableFindHook();
	void* _BrTableAddMany();
	void* _BrTableRemoveMany();
	void* _BrTableFindMany();
	void* _BrTableCount();
	void* _BrTableEnum();

};

/*******************************
* Module: modsupt
* Original path: C:/BRSRC13/CORE/V1DB/modsupt.c
* Lines of code: 268
********************************/

class modsupt {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrModelApplyMap();
	void* _BrModelFitMap();
	void* _BrModelFree();
	void* _BrModelAllocate();
	void* _BrPrimitiveListAllocate();
	void* _BrModelAddPrimitiveList();

};

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

/*******************************
* Module: prepmatl
* Original path: C:/BRSRC13/CORE/V1DB/prepmatl.c
* Lines of code: 291
********************************/

class prepmatl {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrMaterialUpdate();
	void* BrMaterialClear();

};

/*******************************
* Module: prepmesh
* Original path: C:/BRSRC13/CORE/V1DB/prepmesh.c
* Lines of code: 1031
********************************/

class prepmesh {

	// Properties:
	void* _compareModel;
	void* _pm_edge_scratch;
	void* _pm_edge_hash;
	void* _num_edges;
	void* _pm_edge_table;
	void* _rscid;

	// Methods:
	void* addEdge();
	void* prepareEdges();
	void* BrPrepareEdges();
	void* _FacesCompare();
	void* _TVCompare_XYZ();
	void* _TVCompare_MXYZUVN();
	void* _TVCompare_MVN();
	void* BrScalarToFractionClamp();
	void* PrepareFaceNormals();
	void* Smoothing();
	void* SmoothingCreased();
	void* CopyVertex();
	void* CopyFace();
	void* PrepareGroups();
	void* PrepareBoundingRadius();
	void* PrepareBoundingBox();
	void* RegenerateFaceNormals();
	void* RegenerateVertexNormals();
	void* _BrModelUpdate();
	void* BrModelClear();

};

/*******************************
* Module: diag
* Original path: C:/BRSRC13/CORE/FW/diag.c
* Lines of code: 88
********************************/

class diag {

	// Properties:
	void* __diag_scratch;
	void* _rscid;

	// Methods:
	void* _BrFailure();
	void* _BrWarning();
	void* _BrFatal();
	void* __BrAssert();
	void* __BrUAssert();

};

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

/*******************************
* Module: matrix34
* Original path: C:/BRSRC13/CORE/MATH/matrix34.c
* Lines of code: 969
********************************/

class matrix34 {

	// Properties:
	void* _mattmp1;
	void* _mattmp2;
	void* _rscid;

	// Methods:
	void* _BrMatrix34Copy();
	void* _BrMatrix34Mul();
	void* _BrMatrix34Identity();
	void* _BrMatrix34RotateX();
	void* _BrMatrix34RotateY();
	void* _BrMatrix34RotateZ();
	void* _BrMatrix34Rotate();
	void* _BrMatrix34Translate();
	void* _BrMatrix34Scale();
	void* _BrMatrix34ShearX();
	void* _BrMatrix34ShearY();
	void* _BrMatrix34ShearZ();
	void* _BrMatrix34Inverse();
	void* _BrMatrix34LPInverse();
	void* _BrMatrix34LPNormalise();
	void* _BrMatrix34RollingBall();
	void* _BrBoundsToMatrix34();
	void* _BrMatrix34Copy4();
	void* BrMatrix34TApplyFV();
	void* _BrMatrix34Apply();
	void* _BrMatrix34ApplyP();
	void* _BrMatrix34ApplyV();
	void* _BrMatrix34TApply();
	void* _BrMatrix34TApplyP();
	void* _BrMatrix34TApplyV();
	void* _BrMatrix34Pre();
	void* _BrMatrix34Post();
	void* _BrMatrix34PreRotateX();
	void* _BrMatrix34PostRotateX();
	void* _BrMatrix34PreRotateY();
	void* _BrMatrix34PostRotateY();
	void* _BrMatrix34PreRotateZ();
	void* _BrMatrix34PostRotateZ();
	void* _BrMatrix34PreRotate();
	void* _BrMatrix34PostRotate();
	void* _BrMatrix34PreTranslate();
	void* _BrMatrix34PostTranslate();
	void* _BrMatrix34PreScale();
	void* _BrMatrix34PostScale();
	void* _BrMatrix34PreShearX();
	void* _BrMatrix34PostShearX();
	void* _BrMatrix34PreShearY();
	void* _BrMatrix34PostShearY();
	void* _BrMatrix34PreShearZ();
	void* _BrMatrix34PostShearZ();

};

/*******************************
* Module: transfrm
* Original path: C:/BRSRC13/CORE/MATH/transfrm.c
* Lines of code: 269
********************************/

class transfrm {

	// Properties:
	void* _rscid;
	void* __CombineTransforms;

	// Methods:
	void* _BrTransformToMatrix34();
	void* _BrMatrix34PreTransform();
	void* _BrMatrix34PostTransform();
	void* _BrMatrix4PreTransform();
	void* _BrMatrix34ToTransform();
	void* _BrTransformToTransform();

};

/*******************************
* Module: vector
* Original path: C:/BRSRC13/CORE/MATH/vector.c
* Lines of code: 543
********************************/

class vector {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrVector2Copy();
	void* _BrVector2Set();
	void* _BrVector2SetInt();
	void* _BrVector2SetFloat();
	void* _BrVector2Negate();
	void* _BrVector2Add();
	void* _BrVector2Accumulate();
	void* _BrVector2Sub();
	void* _BrVector2Scale();
	void* _BrVector2InvScale();
	void* _BrVector2Dot();
	void* _BrVector2Length();
	void* _BrVector2LengthSquared();
	void* _BrVector3Copy();
	void* _BrVector3Set();
	void* _BrVector3SetInt();
	void* _BrVector3SetFloat();
	void* _BrVector3Negate();
	void* _BrVector3Add();
	void* _BrVector3Accumulate();
	void* _BrVector3Sub();
	void* _BrVector3Scale();
	void* _BrVector3InvScale();
	void* _BrVector3Dot();
	void* _BrVector3Cross();
	void* _BrVector3Length();
	void* _BrVector3LengthSquared();
	void* _BrVector3Normalise();
	void* _BrVector3NormaliseLP();
	void* _BrVector4Dot();
	void* _BrVector4Copy();
	void* BrFVector2Dot();
	void* BrFVector3Copy();
	void* BrVector3ScaleF();
	void* BrFVector3Dot();
	void* BrFVector3Normalise();
	void* BrFVector3NormaliseLP();
	void* _BrVector2Normalise();

};

/*******************************
* Module: angles
* Original path: C:/BRSRC13/CORE/MATH/angles.c
* Lines of code: 247
********************************/

class angles {

	// Properties:
	void* _rscid;
	void* _OrderAxes;

	// Methods:
	void* _BrEulerToMatrix34();
	void* _BrMatrix34ToEuler();
	void* _BrEulerToMatrix4();
	void* _BrMatrix4ToEuler();
	void* _BrEulerToQuat();
	void* _BrQuatToEuler();

};

/*******************************
* Module: matrix4
* Original path: C:/BRSRC13/CORE/MATH/matrix4.c
* Lines of code: 422
********************************/

class matrix4 {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrMatrix4Copy();
	void* _BrMatrix4Mul();
	void* _BrMatrix4Identity();
	void* _BrMatrix4Scale();
	void* _BrMatrix4Inverse();
	void* Determinant3();
	void* _BrMatrix4Determinant();
	void* _BrMatrix4Adjoint();
	void* _BrMatrix4Perspective();
	void* _BrMatrix4Apply();
	void* _BrMatrix4ApplyP();
	void* _BrMatrix4ApplyV();
	void* _BrMatrix4TApply();
	void* _BrMatrix4TApplyP();
	void* _BrMatrix4TApplyV();
	void* _BrMatrix4Copy34();
	void* _BrMatrix4Mul34();
	void* _BrMatrix4Pre34();
	void* _BrMatrix4ShearZ();

};

/*******************************
* Module: v1dbfile
* Original path: C:/BRSRC13/CORE/V1DB/v1dbfile.c
* Lines of code: 2151
********************************/

class v1dbfile {

	// Properties:
	void* _MaterialLoadEntries;
	void* _MaterialLoadTable;
	void* _ActorLoadTable;
	void* _br_camera_F;
	void* _camera_type_F;
	void* _ModelLoadTable;
	void* _br_camera_FM;
	void* _camera_type_FM;
	void* _br_light_F;
	void* _light_type_F;
	void* _light_type_FM;
	void* _br_light_FM;
	void* _br_plane_F;
	void* _br_bounds3_FM;
	void* _br_bounds3_F;
	void* _br_plane_FM;
	void* _TransformTypes;
	void* _br_transform_translation_F;
	void* _br_transform_translation_FM;
	void* _angle_order_F;
	void* _br_transform_euler_FM;
	void* _br_transform_look_up_F;
	void* _br_transform_look_up_FM;
	void* _br_transform_euler_F;
	void* _br_transform_quat_F;
	void* _br_transform_quat_FM;
	void* _angle_order_FM;
	void* _br_transform_matrix34_F;
	void* _br_transform_matrix34_FM;
	void* _render_style_FM;
	void* _actor_type_F;
	void* _br_actor_FM;
	void* _br_actor_F;
	void* _render_style_F;
	void* _actor_type_FM;
	void* _br_material_old_F;
	void* _br_material_FM;
	void* _br_material_F;
	void* _br_material_old_FM;
	void* _br_pivot_F;
	void* _br_pivot_FM;
	void* _br_old_model_1_F;
	void* _br_old_model_1_FM;
	void* _br_model_FM;
	void* _br_model_F;
	void* _br_old_face_FM;
	void* _br_old_face_F;
	void* _br_old_face_1_FM;
	void* _br_old_face_1_F;
	void* _br_face_FM;
	void* _br_face_F;
	void* _br_old_vertex_uv_FM;
	void* _br_vertex_uv_F;
	void* _br_old_vertex_uv_F;
	void* _br_vertex_uv_FM;
	void* _br_vertex_F;
	void* _br_vertex_FM;
	void* _ActorLoadEntries;
	void* _ModelLoadEntries;
	void* _MaterialMaps;
	void* _rscid;

	// Methods:
	void* FopWrite_VERTICES();
	void* FopRead_VERTICES();
	void* FopRead_OLD_VERTICES();
	void* FopWrite_VERTEX_UV();
	void* FopRead_VERTEX_UV();
	void* FopRead_OLD_VERTICES_UV();
	void* FopRead_MATERIAL_INDEX();
	void* FopWrite_MATERIAL_INDEX();
	void* FopRead_OLD_MATERIAL_INDEX();
	void* FopRead_FACES();
	void* FopWrite_FACES();
	void* FopRead_OLD_FACES_1();
	void* FopRead_OLD_FACES();
	void* FopWrite_FACE_MATERIAL();
	void* FopRead_FACE_MATERIAL();
	void* FopRead_MODEL();
	void* FopWrite_MODEL();
	void* FopRead_OLD_MODEL_1();
	void* FopRead_OLD_MODEL();
	void* FopRead_PIVOT();
	void* FopRead_MATERIAL_OLD();
	void* FopRead_MATERIAL();
	void* FopWrite_MATERIAL();
	void* FopRead_PIXELMAP_REF();
	void* FopWrite_PIXELMAP_REF();
	void* FopWrite_ACTOR();
	void* FopRead_ACTOR();
	void* FopWrite_ACTOR_MODEL();
	void* FopRead_ACTOR_MODEL();
	void* FopWrite_ACTOR_MATERIAL();
	void* FopRead_ACTOR_MATERIAL();
	void* FopWrite_ACTOR_TRANSFORM();
	void* FopRead_ACTOR_TRANSFORM();
	void* FopWrite_ACTOR_LIGHT();
	void* FopRead_ACTOR_LIGHT();
	void* FopWrite_ACTOR_CAMERA();
	void* FopRead_ACTOR_CAMERA();
	void* FopWrite_ACTOR_BOUNDS();
	void* FopRead_ACTOR_BOUNDS();
	void* FopWrite_ACTOR_CLIP_PLANE();
	void* FopRead_ACTOR_CLIP_PLANE();
	void* FopWrite_ACTOR_ADD_CHILD();
	void* FopRead_ACTOR_ADD_CHILD();
	void* FopWrite_TRANSFORM();
	void* FopRead_TRANSFORM();
	void* FopWrite_BOUNDS();
	void* FopRead_BOUNDS();
	void* FopWrite_PLANE();
	void* FopRead_PLANE();
	void* FopWrite_LIGHT();
	void* FopRead_LIGHT();
	void* FopWrite_CAMERA();
	void* FopRead_CAMERA();
	void* _BrModelLoadMany();
	void* _PtrCompare();
	void* _WriteModel();
	void* _BrModelSaveMany();
	void* _BrActorLoadMany();
	void* WriteActor();
	void* _BrActorSaveMany();
	void* _BrMaterialLoadMany();
	void* _WriteMaterial();
	void* _BrMaterialSaveMany();
	void* _BrModelLoad();
	void* _BrModelSave();
	void* _BrMaterialLoad();
	void* _BrMaterialSave();
	void* _BrActorLoad();
	void* _BrActorSave();
	void* _BrModelFileCount();
	void* _BrActorFileCount();
	void* _BrMaterialFileCount();

};

/*******************************
* Module: pixelmap
* Original path: C:/BRSRC13/CORE/PIXELMAP/pixelmap.c
* Lines of code: 24
********************************/

class pixelmap {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrPixelmapAllocate();

};

/*******************************
* Module: fontptrs
* Original path: unknown
* Lines of code: unknown
********************************/

class fontptrs {

	// Properties:
	void* _BrFontProp4x6;
	void* _BrFontProp7x9;
	void* _BrFontFixed3x5;
	void* _rscid;

	// Methods:

};

/*******************************
* Module: pmdsptch
* Original path: C:/BRSRC13/CORE/PIXELMAP/pmdsptch.c
* Lines of code: 969
********************************/

class pmdsptch {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrPixelmapAllocateSub();
	void* _BrPixelmapFree();
	void* _BrPixelmapResize();
	void* _BrPixelmapMatch();
	void* _BrPixelmapMatchSized();
	void* _BrPixelmapMatchTyped();
	void* _BrPixelmapMatchTypedSized();
	void* _BrPixelmapClone();
	void* _BrPixelmapFill();
	void* _BrPixelmapRectangle();
	void* _BrPixelmapRectangle2();
	void* DispatchCopy();
	void* DispatchRectangleCopy();
	void* DispatchRectangleStretchCopy();
	void* _BrPixelmapRectangleCopy();
	void* _BrPixelmapRectangleStretchCopy();
	void* _BrPixelmapRectangleFill();
	void* _BrPixelmapDirtyRectangleCopy();
	void* _BrPixelmapDirtyRectangleClear();
	void* _BrPixelmapDirtyRectangleDoubleBuffer();
	void* _BrPixelmapPixelSet();
	void* _BrPixelmapPixelGet();
	void* _BrPixelmapCopy();
	void* _BrPixelmapLine();
	void* _BrPixelmapDoubleBuffer();
	void* _BrPixelmapText();
	void* _BrPixelmapTextF();
	void* _BrPixelmapTextWidth();
	void* _BrPixelmapTextHeight();
	void* _BrPixelmapCopyBits();
	void* _BrPixelmapFileSize();
	void* _BrPixelmapPixelSize();
	void* _BrPixelmapChannels();
	void* _BrPixelmapPaletteSet();
	void* _BrPixelmapPaletteEntrySet();
	void* _BrPixelmapPaletteEntrySetMany();
	void* _BrPixelmapDirectLock();
	void* _BrPixelmapDirectUnlock();

};

/*******************************
* Module: fwsetup
* Original path: C:/BRSRC13/CORE/FW/fwsetup.c
* Lines of code: 218
********************************/

class fwsetup {

	// Properties:
	void* _Image_BRCORE1;
	void* _fw;
	void* _functionPointers_BRCORE1;
	void* _namePointers_BRCORE1;
	void* _resourceClasses;
	void* _nameOrdinals_BRCORE1;
	void* _rscid;

	// Methods:
	void* _BrFwBegin();
	void* _BrFwEnd();
	void* _BrDiagHandlerSet();
	void* _BrFilesystemSet();
	void* _BrAllocatorSet();

};

/*******************************
* Module: resreg
* Original path: C:/BRSRC13/CORE/FW/resreg.c
* Lines of code: 103
********************************/

class resreg {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrResClassAdd();
	void* _BrResClassRemove();
	void* _BrResClassFind();
	void* _BrResClassFindHook();
	void* _BrResClassAddMany();
	void* _BrResClassRemoveMany();
	void* _BrResClassFindMany();
	void* _BrResClassCount();
	void* _BrResClassEnum();

};

/*******************************
* Module: matsupt
* Original path: C:/BRSRC13/CORE/V1DB/matsupt.c
* Lines of code: 44
********************************/

class matsupt {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrMaterialAllocate();
	void* _BrMaterialFree();

};

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

/*******************************
* Module: preptab
* Original path: C:/BRSRC13/CORE/V1DB/preptab.c
* Lines of code: 19
********************************/

class preptab {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrTableUpdate();

};

/*******************************
* Module: resource
* Original path: C:/BRSRC13/CORE/FW/resource.c
* Lines of code: 539
********************************/

class resource {

	// Properties:
	void* _rscid;

	// Methods:
	void* ResToUser();
	void* UserToRes();
	void* _BrResAllocate();
	void* BrResInternalFree();
	void* _BrResFree();
	void* _BrResFreeNoCallback();
	void* _BrResAdd();
	void* _BrResRemove();
	void* _BrResClass();
	void* _BrResIsChild();
	void* _BrResSize();
	void* _ResSizeTotal();
	void* _BrResSizeTotal();
	void* _BrResChildEnum();
	void* _BrResCheck();
	void* _BrResStrDup();
	void* InternalResourceDump();
	void* _BrResDump();
	void* _BrResClassIdentifier();

};

/*******************************
* Module: pmfile
* Original path: C:/BRSRC13/CORE/PIXELMAP/pmfile.c
* Lines of code: 357
********************************/

class pmfile {

	// Properties:
	void* _PixelmapLoadTable;
	void* _br_old_pixelmap_F;
	void* _pixelmap_type_F;
	void* _br_pixelmap_F;
	void* _br_old_pixelmap_FM;
	void* _br_pixelmap_FM;
	void* _pixelmap_type_FM;
	void* _PixelmapLoadEntries;
	void* _rscid;

	// Methods:
	void* FopWrite_PIXELMAP();
	void* FopRead_OLD_PIXELMAP();
	void* FopRead_PIXELMAP();
	void* FopWrite_PIXELS();
	void* FopRead_PIXELS();
	void* FopWrite_ADD_MAP();
	void* FopRead_ADD_MAP();
	void* _BrPixelmapLoadMany();
	void* WritePixelmap();
	void* _BrPixelmapSaveMany();
	void* _BrPixelmapLoad();
	void* _BrPixelmapSave();

};

/*******************************
* Module: bswap
* Original path: C:/BRSRC13/CORE/FW/bswap.c
* Lines of code: 137
********************************/

class bswap {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrSwap32();
	void* _BrSwap16();
	void* _BrSwapFloat();
	void* _BrSwapBlock();

};

/*******************************
* Module: matrix23
* Original path: C:/BRSRC13/CORE/MATH/matrix23.c
* Lines of code: 405
********************************/

class matrix23 {

	// Properties:
	void* _mattmp1;
	void* _mattmp2;
	void* _rscid;

	// Methods:
	void* _BrMatrix23Copy();
	void* _BrMatrix23Mul();
	void* _BrMatrix23Identity();
	void* _BrMatrix23Rotate();
	void* _BrMatrix23Translate();
	void* _BrMatrix23Scale();
	void* _BrMatrix23ShearX();
	void* _BrMatrix23ShearY();
	void* _BrMatrix23Inverse();
	void* _BrMatrix23LPInverse();
	void* _BrMatrix23LPNormalise();
	void* _BrMatrix23ApplyP();
	void* _BrMatrix23ApplyV();
	void* _BrMatrix23TApplyP();
	void* _BrMatrix23TApplyV();
	void* _BrMatrix23Pre();
	void* _BrMatrix23Post();
	void* _BrMatrix23PreRotate();
	void* _BrMatrix23PostRotate();
	void* _BrMatrix23PreTranslate();
	void* _BrMatrix23PostTranslate();
	void* _BrMatrix23PreScale();
	void* _BrMatrix23PostScale();
	void* _BrMatrix23PreShearX();
	void* _BrMatrix23PostShearX();
	void* _BrMatrix23PreShearY();
	void* _BrMatrix23PostShearY();

};

/*******************************
* Module: brqsort
* Original path: C:/BRSRC13/CORE/FW/brqsort.c
* Lines of code: 172
********************************/

class brqsort {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrQsort();
	void* swap_chars();
	void* swap_ints();
	void* swap_int_1();

};

/*******************************
* Module: prepmap
* Original path: C:/BRSRC13/CORE/V1DB/prepmap.c
* Lines of code: 51
********************************/

class prepmap {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrMapUpdate();
	void* BrBufferUpdate();
	void* BrBufferClear();

};

/*******************************
* Module: devsetup
* Original path: C:/BRSRC13/CORE/FW/devsetup.c
* Lines of code: 621
********************************/

class devsetup {

	// Properties:
	void* _last_begin_screen;
	void* _rscid;

	// Methods:
	void* BrDevLastBeginQuery();
	void* BrDevLastBeginSet();
	void* _BrDevBeginVar();
	void* _BrDevBegin();
	void* _BrDevBeginTV();
	void* _BrDevBeginOld();
	void* _BrDevEndOld();
	void* _BrDevPaletteSetOld();
	void* _BrDevPaletteSetEntryOld();
	void* _BrRendererFacilityFind();
	void* _BrPrimitiveLibraryFind();
	void* _BrGeometryFormatFind();

};

/*******************************
* Module: readmse
* Original path: C:/BRSRC13/CORE/DOSIO/readmse.c
* Lines of code: 128
********************************/

class readmse {

	// Properties:
	void* _mouseMemory;
	void* _regs;
	void* _mouseActive;
	void* _rscid;
	void* _mouseHandler;

	// Methods:
	void* _DOSMouseBegin();
	void* _DOSMouseEnd();
	void* _DOSMouseRead();

};

/*******************************
* Module: stdlib
* Original path: C:/BRSRC13/CORE/STD/stdlib.c
* Lines of code: 205
********************************/

class stdlib {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrMemCmp();
	void* _BrMemCpy();
	void* _BrMemSet();
	void* _BrStrCat();
	void* _BrStrCmp();
	void* _BrStrICmp();
	void* _BrStrCpy();
	void* _BrStrLen();
	void* _BrStrNCmp();
	void* _BrStrNICmp();
	void* _BrStrNCpy();
	void* _BrStrRChr();
	void* _BrAbort();
	void* _BrGetEnv();
	void* _BrStrToF();
	void* _BrStrToD();
	void* _BrStrToL();
	void* _BrStrToUL();
	void* _BrIsAlpha();
	void* _BrIsDigit();
	void* _BrIsSpace();
	void* _BrIsPrint();
	void* _BrVSprintf();
	void* _BrVSprintfN();
	void* _BrVSScanf();

};

/*******************************
* Module: register
* Original path: C:/BRSRC13/CORE/FW/register.c
* Lines of code: 365
********************************/

class register {

	// Properties:
	void* _rscid;

	// Methods:
	void* BrRegistryNew();
	void* BrRegistryClear();
	void* BrRegistryAdd();
	void* BrRegistryAddMany();
	void* BrRegistryRemove();
	void* BrRegistryRemoveMany();
	void* BrRegistryFind();
	void* BrRegistryFindMany();
	void* BrRegistryCount();
	void* BrRegistryEnum();
	void* BrRegistryNewStatic();
	void* BrRegistryAddStatic();
	void* BrRegistryRemoveStatic();

};

/*******************************
* Module: pattern
* Original path: C:/BRSRC13/CORE/FW/pattern.c
* Lines of code: 109
********************************/

class pattern {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrNamePatternMatch();

};

/*******************************
* Module: brlists
* Original path: C:/BRSRC13/CORE/FW/brlists.c
* Lines of code: 161
********************************/

class brlists {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrNewList();
	void* _BrAddHead();
	void* _BrAddTail();
	void* _BrRemHead();
	void* _BrRemTail();
	void* _BrInsert();
	void* _BrRemove();
	void* _BrSimpleNewList();
	void* _BrSimpleAddHead();
	void* _BrSimpleRemHead();
	void* _BrSimpleInsert();
	void* _BrSimpleRemove();

};

/*******************************
* Module: scratch
* Original path: C:/BRSRC13/CORE/FW/scratch.c
* Lines of code: 97
********************************/

class scratch {

	// Properties:
	void* _scratchString;
	void* _rscid;

	// Methods:
	void* _BrScratchAllocate();
	void* _BrScratchFree();
	void* _BrScratchFlush();
	void* _BrScratchInquire();
	void* _BrScratchString();
	void* _BrScratchStringSize();

};

/*******************************
* Module: plane
* Original path: C:/BRSRC13/CORE/MATH/plane.c
* Lines of code: 73
********************************/

class plane {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrPlaneEquation();

};

/*******************************
* Module: math
* Original path: C:/BRSRC13/CORE/STD/math.c
* Lines of code: 38
********************************/

class math {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrFloatFloor();
	void* _BrFloatCeil();
	void* _BrFloatSqrt();
	void* _BrFloatPow();
	void* _BrFloatAtan2();

};

/*******************************
* Module: printf
* Original path: C:/BRSRC13/CORE/FW/printf.c
* Lines of code: 81
********************************/

class printf {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrSprintf();
	void* _BrSprintfN();
	void* _BrLogPrintf();
	void* _BrSScanf();

};

/*******************************
* Module: otable
* Original path: C:/BRSRC13/CORE/V1DB/otable.c
* Lines of code: 427
********************************/

class otable {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrZsOrderTableAllocate();
	void* _BrZsOrderTableFree();
	void* _BrZsActorOrderTableSet();
	void* _BrZsActorOrderTableGet();
	void* _BrZsOrderTableClear();
	void* _BrZsOrderTablePrimitiveInsert();
	void* _BrZsPrimitiveBucketSelect();
	void* _BrZsOrderTablePrimaryEnable();
	void* _BrZsOrderTablePrimaryDisable();
	void* InsertOrderTableList();
	void* SetOrderTableBounds();
	void* SetOrderTableRange();
	void* RenderOrderTableList();
	void* RenderPrimaryOrderTable();

};

/*******************************
* Module: modrend
* Original path: C:/BRSRC13/CORE/V1DB/modrend.c
* Lines of code: 231
********************************/

class modrend {

	// Properties:
	void* _bounds_colours;
	void* _bounds_vertices;
	void* _bounds_faces;
	void* _RenderStyleCalls;
	void* _bounds_prepared;
	void* _bounds_model;
	void* _bounds_face_groups;
	void* _rscid;

	// Methods:
	void* renderFaces();
	void* renderEdges();
	void* renderPoints();
	void* nullRender();
	void* makeMeshFromBounds();
	void* boundingBoxRenderPoints();
	void* boundingBoxRenderEdges();
	void* boundingBoxRenderFaces();

};

/*******************************
* Module: quat
* Original path: C:/BRSRC13/CORE/MATH/quat.c
* Lines of code: 261
********************************/

class quat {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrQuatMul();
	void* _BrQuatNormalise();
	void* _BrQuatInvert();
	void* _BrQuatSlerp();
	void* _BrQuatToMatrix34();
	void* _BrMatrix34ToQuat();
	void* _BrQuatToMatrix4();
	void* _BrMatrix4ToQuat();

};

/*******************************
* Module: genfile
* Original path: C:/BRSRC13/CORE/FW/genfile.c
* Lines of code: 89
********************************/

class genfile {

	// Properties:
	void* _file_info_FM;
	void* _file_info_F;
	void* _file_type_FM;
	void* _file_type_F;
	void* _rscid;

	// Methods:
	void* FopRead_END();
	void* FopWrite_END();
	void* FopWrite_FILE_INFO();

};

/*******************************
* Module: datafile
* Original path: C:/BRSRC13/CORE/FW/datafile.c
* Lines of code: 2067
********************************/

class datafile {

	// Properties:
	void* __BrFilePrimsNull;
	void* __BrFilePrimsReadBinary;
	void* __BrFilePrimsWriteText;
	void* __BrFilePrimsWriteBinary;
	void* __BrFilePrimsReadText;
	void* _member_type_names;
	void* _DatafileStack;
	void* _ChunkNames;
	void* _rscid;
	void* _DatafileStackTop;

	// Methods:
	void* DfPush();
	void* DfPop();
	void* DfTop();
	void* DfTopType();
	void* TextReadLine();
	void* scalarTypeConvert();
	void* DfStructWriteBinary();
	void* DfStructReadBinary();
	void* DfStructSizeBinary();
	void* EnumFromString();
	void* EnumToString();
	void* DfStructWriteText();
	void* StructWriteTextSub();
	void* DfStructReadText();
	void* StructReadTextSub();
	void* DfStructSizeText();
	void* DfStructWriteArray();
	void* DfStructReadArray();
	void* DfChunkWriteText();
	void* DfChunkReadText();
	void* DfChunkWriteBinary();
	void* DfChunkReadBinary();
	void* DfCountWriteText();
	void* DfCountReadText();
	void* DfCountWriteBinary();
	void* DfCountReadBinary();
	void* DfCountSizeText();
	void* DfCountSizeBinary();
	void* BlockWriteSetup();
	void* DfBlockWriteText();
	void* DfBlockReadText();
	void* DfBlockWriteBinary();
	void* DfBlockReadBinary();
	void* DfBlockSizeText();
	void* DfBlockSizeBinary();
	void* DfNameReadText();
	void* DfNameWriteText();
	void* DfNameSizeText();
	void* DfNameReadBinary();
	void* DfNameWriteBinary();
	void* DfNameSizeBinary();
	void* DfSkipText();
	void* DfSkipBinary();
	void* DfChunksInterpret();
	void* BrNullOther();
	void* _DfFileIdentify();
	void* DfOpen();
	void* DfClose();
	void* _BrWriteModeSet();

};

/*******************************
* Module: file
* Original path: C:/BRSRC13/CORE/FW/file.c
* Lines of code: 216
********************************/

class file {

	// Properties:
	void* _rscid;

	// Methods:
	void* __BrFileFree();
	void* _BrFileAttributes();
	void* _BrFileOpenRead();
	void* _BrFileOpenWrite();
	void* _BrFileClose();
	void* _BrFileEof();
	void* _BrFileGetChar();
	void* _BrFilePutChar();
	void* _BrFileRead();
	void* _BrFileWrite();
	void* _BrFileGetLine();
	void* _BrFilePutLine();
	void* _BrFileAdvance();
	void* _BrFilePrintf();

};

/*******************************
* Module: SOSCNTL
* Original path: D:/HMI/DIGI4W/SOSLIB/SRC/SOSCNTL.C
* Lines of code: 370
********************************/

class SOSCNTL {

	// Properties:

	// Methods:
	void* sosModule3Start();
	void* sosDIGIGetDMAPosition();
	void* sosDIGISetMasterVolume();
	void* sosDIGISetSampleVolume();
	void* sosDIGIGetSampleVolume();
	void* sosDIGIGetBytesProcessed();
	void* sosDIGIGetLoopCount();
	void* sosDIGISetPanLocation();
	void* sosDIGIGetPanLocation();
	void* sosDIGISetSampleRate();
	void* sosDIGIGetSampleRate();
	void* sosDIGIGetPanSpeed();
	void* sosDIGIGetSampleID();
	void* sosDIGIGetSampleHandle();
	void* sosDIGISamplesPlaying();
	void* sosDIGISampleDone();
	void* sosModule3End();

};

/*******************************
* Module: SOSSTART
* Original path: D:/HMI/DIGI4W/SOSLIB/SRC/SOSSTART.C
* Lines of code: 173
********************************/

class SOSSTART {

	// Properties:

	// Methods:
	void* sosModule9Start();
	void* sosDIGIStartSample();
	void* sosDIGIStopSample();
	void* sosDIGIStopAllSamples();
	void* sosModule9End();

};

/*******************************
* Module: SOSTMR
* Original path: D:/HMI/DIGI4W/SOSLIB/SRC/SOSTMR.C
* Lines of code: 557
********************************/

class SOSTMR {

	// Properties:

	// Methods:
	void* sosModule11Start();
	void* sosTIMERInitSystem();
	void* sosTIMERUnInitSystem();
	void* sosTIMERRegisterEvent();
	void* sosTIMERAlterEventRate();
	void* sosTIMERRemoveEvent();
	void* sosTIMERGetEventRate();
	void* sosTIMERSetRate();
	void* sosTIMERHandler();
	void* sosTIMEROldHandler();
	void* sosModule11End();

};

/*******************************
* Module: SOSINIT
* Original path: D:/HMI/DIGI4W/SOSLIB/SRC/SOSINIT.C
* Lines of code: 703
********************************/

class SOSINIT {

	// Properties:

	// Methods:
	void* sosModule6Start();
	void* sosDIGIInitDriver();
	void* sosDIGIUnInitDriver();
	void* sosDIGIAllocDMABuffer();
	void* sosAllocVDSPage();
	void* sosFreeVDSPage();
	void* sosDIGIMixFunction0();
	void* sosDIGIMixFunction1();
	void* sosDIGIMixFunction2();
	void* sosDIGIMixFunction3();
	void* sosDIGIMixFunction4();
	void* sosModule6End();

};

/*******************************
* Module: SOSSYS
* Original path: D:/HMI/DIGI4W/SOSLIB/SRC/SOSSYS.C
* Lines of code: 94
********************************/

class SOSSYS {

	// Properties:

	// Methods:
	void* sosModule10Start();
	void* sosDIGIInitSystem();
	void* sosDIGIUnInitSystem();
	void* sosModule10End();

};

/*******************************
* Module: SOSDATA
* Original path: unknown
* Lines of code: unknown
********************************/

class SOSDATA {

	// Properties:
	void* __wSOSDMAPortList;
	void* __pSOSErrorStrings;
	void* __wSOSData1End;
	void* __wSOSData1Start;
	void* __pSOSMixerStubs;
	void* __sDETSystem;
	void* __sTIMERSystem;
	void* __sSOSSystem;

	// Methods:

};

/*******************************
* Module: pmmem
* Original path: C:/BRSRC13/CORE/PIXELMAP/pmmem.c
* Lines of code: 1302
********************************/

class pmmem {

	// Properties:
	void* _matchTemplateEntries;
	void* _devicePixelmapDispatch;
	void* _devicePixelmapTemplateEntries;
	void* _pmTypeInfo;
	void* _rscid;

	// Methods:
	void* DevicePixelmapMemAllocate();
	void* _CheckDispatch();
	void* __M_br_device_pixelmap_mem_allocateSub();
	void* __M_br_device_pixelmap_mem_free();
	void* __M_br_device_pixelmap_mem_identifier();
	void* __M_br_device_pixelmap_mem_type();
	void* __M_br_device_pixelmap_mem_isType();
	void* __M_br_device_pixelmap_mem_device();
	void* __M_br_device_pixelmap_mem_space();
	void* __M_br_device_pixelmap_mem_queryTemplate();
	void* __M_br_device_pixelmap_mem_validSource();
	void* __M_br_device_pixelmap_mem_resize();
	void* __M_br_device_pixelmap_mem_match();
	void* __M_br_device_pixelmap_mem_copyTo();
	void* __M_br_device_pixelmap_mem_copyFrom();
	void* __M_br_device_pixelmap_mem_fill();
	void* __M_br_device_pixelmap_mem_doubleBuffer();
	void* __M_br_device_pixelmap_mem_copyDirty();
	void* __M_br_device_pixelmap_mem_copyToDirty();
	void* __M_br_device_pixelmap_mem_copyFromDirty();
	void* __M_br_device_pixelmap_mem_fillDirty();
	void* __M_br_device_pixelmap_mem_doubleBufferDirty();
	void* __M_br_device_pixelmap_mem_rectangleCopyTo();
	void* __M_br_device_pixelmap_mem_rectangleCopyFrom();
	void* __M_br_device_pixelmap_mem_rectangleStretchCopyTo();
	void* __M_br_device_pixelmap_mem_rectangleStretchCopyFrom();
	void* __M_br_device_pixelmap_mem_rectangleFill();
	void* __M_br_device_pixelmap_mem_pixelSet();
	void* __M_br_device_pixelmap_mem_line();
	void* __M_br_device_pixelmap_mem_copyBits();
	void* __M_br_device_pixelmap_mem_pixelQuery();
	void* __M_br_device_pixelmap_mem_pixelAddressQuery();
	void* __M_br_device_pixelmap_mem_pixelAddressSet();
	void* __M_br_device_pixelmap_mem_originSet();
	void* __M_br_device_pixelmap_mem_rowSize();
	void* __M_br_device_pixelmap_mem_rowQuery();
	void* __M_br_device_pixelmap_mem_rowSet();
	void* __M_br_device_pixelmap_mem_flush();
	void* __M_br_device_pixelmap_mem_synchronise();
	void* __M_br_device_pixelmap_mem_directLock();
	void* __M_br_device_pixelmap_mem_directUnlock();

};

/*******************************
* Module: gencopy
* Original path: C:/BRSRC13/CORE/PIXELMAP/gencopy.c
* Lines of code: 39
********************************/

class gencopy {

	// Properties:
	void* _rscid;

	// Methods:
	void* GeneralRectangleCopy();
	void* GeneralCopy();
	void* GeneralRectangleStretchCopy();

};

/*******************************
* Module: image
* Original path: C:/BRSRC13/CORE/FW/image.c
* Lines of code: 358
********************************/

class image {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrImageAdd();
	void* _BrImageRemove();
	void* _BrImageFind();
	void* imageLoadHost();
	void* _BrImageReference();
	void* imageLookupName();
	void* _BrImageLookupName();
	void* _BrImageLookupOrdinal();
	void* _BrImageDereference();
	void* _BrImageFree();
	void* __BrImageFree();

};

/*******************************
* Module: object
* Original path: C:/BRSRC13/CORE/FW/object.c
* Lines of code: 64
********************************/

class object {

	// Properties:
	void* _rscid;

	// Methods:
	void* __M_br_object_query();
	void* __M_br_object_queryBuffer();
	void* __M_br_object_queryMany();
	void* __M_br_object_queryManySize();
	void* __M_br_object_queryAll();
	void* __M_br_object_queryAllSize();
	void* __BrObjectFree();

};

/*******************************
* Module: devlist
* Original path: C:/BRSRC13/CORE/FW/devlist.c
* Lines of code: 403
********************************/

class devlist {

	// Properties:
	void* _rscid;

	// Methods:
	void* AddRequestedDrivers();
	void* devAdd();
	void* _BrDevAdd();
	void* _BrDevAddStatic();
	void* _BrDevCheckAdd();
	void* _BrDevAddConfig();
	void* _BrDevRemove();
	void* _BrDevFind();
	void* _BrDevFindMany();
	void* _BrDevCount();
	void* _BrDevContainedFind();
	void* _BrDevContainedFindMany();
	void* _BrDevContainedCount();

};

/*******************************
* Module: error
* Original path: C:/BRSRC13/CORE/FW/error.c
* Lines of code: 26
********************************/

class error {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrLastErrorGet();
	void* _BrLastErrorSet();

};

/*******************************
* Module: lexer
* Original path: C:/BRSRC13/CORE/FW/lexer.c
* Lines of code: 682
********************************/

class lexer {

	// Properties:

	// Methods:
	void* _lexerError();
	void* _BrLexerAllocate();
	void* _BrLexerCommentSet();
	void* _BrLexerErrorSet();
	void* _BrLexerFree();
	void* _fileGetchar();
	void* _BrLexerPushFile();
	void* _stringGetchar();
	void* _BrLexerPushString();
	void* _BrLexerPop();
	void* lexerAdvance();
	void* lexerAdvanceDump();
	void* _BrLexerDumpSet();
	void* _BrLexerTokenError();
	void* _BrLexerPosition();
	void* _BrParseFixed();
	void* _BrParseFloat();
	void* _BrParseInteger();
	void* _BrParseVectorFixed();
	void* _BrParseVectorFloat();
	void* _BrParseMatrixFixed();
	void* _BrParseMatrixFloat();

};

/*******************************
* Module: objectc
* Original path: C:/BRSRC13/CORE/FW/objectc.c
* Lines of code: 380
********************************/

class objectc {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrObjectListAllocate();
	void* __M_br_object_container_addFront();
	void* __M_br_object_container_remove();
	void* __M_br_object_container_removeFront();
	void* __M_br_object_container_find();
	void* __M_br_object_container_findMany();
	void* __M_br_object_container_count();
	void* __M_br_object_container_tokensMatchBegin();
	void* __M_br_object_container_tokensMatch();
	void* __M_br_object_container_tokensMatchEnd();
	void* _BrObjectContainerFree();

};

/*******************************
* Module: tokenval
* Original path: C:/BRSRC13/CORE/FW/tokenval.c
* Lines of code: 1956
********************************/

class tokenval {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrTVTemplateAllocate();
	void* _BrTVTemplateFree();
	void* templateResolveNames();
	void* templateMakeMap();
	void* ConvertFloatToFixed();
	void* ConvertFixedToFloat();
	void* ConvertLongCopy();
	void* ValueQuery();
	void* ValueSet();
	void* ValueExtraSize();
	void* _BrTokenValueQuery();
	void* _BrTokenValueQueryMany();
	void* _BrTokenValueQueryManySize();
	void* _BrTokenValueQueryAll();
	void* _BrTokenValueQueryAllSize();
	void* _BrTokenValueSet();
	void* _BrTokenValueSetMany();
	void* DumpMatrixInteger();
	void* DumpMatrixFixed();
	void* DumpMatrixFloat();
	void* DumpObject();
	void* _BrTokenValueDump();
	void* _BrStringToTokenValue();
	void* parseTokenValue();
	void* _BrTokenValueCompare();
	void* BrTokenValueDup();

};

/*******************************
* Module: token
* Original path: C:/BRSRC13/CORE/FW/token.c
* Lines of code: 284
********************************/

class token {

	// Properties:
	void* _predefinedTokens;
	void* _rscid;
	void* _tokenTypes;

	// Methods:
	void* BrTokenBegin();
	void* _BrTokenCreate();
	void* _BrTokenIdentifier();
	void* _BrTokenType();
	void* _BrTokenCount();
	void* _BrTokenFind();
	void* _BrTokenFindMany();
	void* BrTokenFindType();

};

/*******************************
* Module: brexcept
* Original path: C:/BRSRC13/CORE/STD/brexcept.c
* Lines of code: 111
********************************/

class brexcept {

	// Properties:
	void* _exceptionValue;
	void* __BrExceptionHandler;
	void* _rscid;

	// Methods:
	void* __BrExceptionBegin();
	void* __BrExceptionEnd();
	void* __BrExceptionThrow();
	void* __BrExceptionValueFetch();
	void* __BrExceptionResource();

};

/*******************************
* Module: stddiag
* Original path: C:/BRSRC13/CORE/STD/stddiag.c
* Lines of code: 37
********************************/

class stddiag {

	// Properties:
	void* _BrStdioDiagHandler;
	void* __BrDefaultDiagHandler;
	void* _rscid;

	// Methods:
	void* _BrStdioWarning();
	void* _BrStdioFailure();

};

/*******************************
* Module: stdfile
* Original path: C:/BRSRC13/CORE/STD/stdfile.c
* Lines of code: 262
********************************/

class stdfile {

	// Properties:
	void* __BrDefaultFilesystem;
	void* _BrStdioFilesystem;
	void* _rscid;

	// Methods:
	void* _BrStdioAttributes();
	void* _BrStdioOpenRead();
	void* _BrStdioOpenWrite();
	void* _BrStdioClose();
	void* _BrStdioEof();
	void* _BrStdioGetChar();
	void* _BrStdioPutChar();
	void* _BrStdioRead();
	void* _BrStdioWrite();
	void* _BrStdioGetLine();
	void* _BrStdioPutLine();
	void* _BrStdioAdvance();

};

/*******************************
* Module: stdmem
* Original path: C:/BRSRC13/CORE/STD/stdmem.c
* Lines of code: 55
********************************/

class stdmem {

	// Properties:
	void* _rscid;
	void* _BrStdlibAllocator;
	void* __BrDefaultAllocator;

	// Methods:
	void* _BrStdlibAllocate();
	void* _BrStdlibFree();
	void* _BrStdlibInquire();
	void* _BrStdlibAlign();

};

/*******************************
* Module: sys_conf
* Original path: C:/BRSRC13/CORE/FW/sys_conf.c
* Lines of code: 293
********************************/

class sys_conf {

	// Properties:
	void* _valid_system_config_tokens;

	// Methods:
	void* Is_Valid_Sys_Config_Token();
	void* LoadIniEntry();
	void* LoadIniConfig();
	void* LoadRegistryEntry();
	void* LoadRegistryConfig();
	void* BrSetDefaultConfig();
	void* BrSystemConfigBegin();
	void* _BrSystemConfigLoad();
	void* _BrSystemConfigSetString();
	void* _BrSystemConfigQueryString();

};

/*******************************
* Module: def_mdl
* Original path: unknown
* Lines of code: unknown
********************************/

class def_mdl {

	// Properties:
	void* _default_model_faces;
	void* _default_model_vertices;
	void* __BrDefaultModel;
	void* _rscid;

	// Methods:

};

/*******************************
* Module: def_mat
* Original path: C:/BRSRC13/CORE/V1DB/def_mat.c
* Lines of code: 56
********************************/

class def_mat {

	// Properties:
	void* _rscid;

	// Methods:
	void* SetupDefaultMaterial();

};

/*******************************
* Module: def_otab
* Original path: unknown
* Lines of code: unknown
********************************/

class def_otab {

	// Properties:
	void* __default_table;
	void* _rscid;
	void* __BrDefaultOrderTable;

	// Methods:

};

/*******************************
* Module: brbegin
* Original path: C:/BRSRC13/CORE/FW/brbegin.c
* Lines of code: 64
********************************/

class brbegin {

	// Properties:
	void* _active;
	void* _rscid;

	// Methods:
	void* _BrBegin();
	void* _BrEnd();

};

/*******************************
* Module: hstsetup
* Original path: C:/BRSRC13/CORE/HOST/hstsetup.c
* Lines of code: 110
********************************/

class hstsetup {

	// Properties:
	void* _hostInfo;
	void* _functionPointers_BRHOST1;
	void* _Image_BRHOST1;
	void* _namePointers_BRHOST1;
	void* _nameOrdinals_BRHOST1;

	// Methods:
	void* _HostBegin();
	void* _HostEnd();
	void* _HostInfo();

};

/*******************************
* Module: eventq
* Original path: C:/BRSRC13/CORE/DOSIO/eventq.c
* Lines of code: 112
********************************/

class eventq {

	// Properties:
	void* _rscid;
	void* __DOSEventQEnabled;
	void* __DOSEventMemory;

	// Methods:
	void* _DOSEventBegin();
	void* _DOSEventEnd();
	void* _DOSEventWait();

};

/*******************************
* Module: logwrite
* Original path: C:/BRSRC13/CORE/STD/logwrite.c
* Lines of code: 18
********************************/

class logwrite {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrLogWrite();

};

/*******************************
* Module: custsupt
* Original path: C:/BRSRC13/CORE/V1DB/custsupt.c
* Lines of code: 511
********************************/

class custsupt {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrModelToScreenQuery();
	void* _BrModelToViewQuery();
	void* _BrOriginToScreenXY();
	void* _BrOriginToScreenXYZO();
	void* _BrPointToScreenXY();
	void* _BrPointToScreenXYZO();
	void* _BrPointToScreenXYMany();
	void* _BrPointToScreenXYZOMany();
	void* _BrZbDepthToScreenZ();
	void* _BrZbScreenZToDepth();
	void* _BrZsDepthToScreenZ();
	void* _BrZsScreenZToDepth();
	void* _BrScreenZToCamera();
	void* _BrScreenXYZToCamera();

};

/*******************************
* Module: SOSLOAD
* Original path: D:/HMI/DIGI4W/SOSLIB/SRC/SOSLOAD.C
* Lines of code: 205
********************************/

class SOSLOAD {

	// Properties:

	// Methods:
	void* sosModule7Start();
	void* sosDIGILoadDriver();
	void* sosDIGIUnLoadDriver();
	void* sosModule7End();

};

/*******************************
* Module: SOSALLOC
* Original path: D:/HMI/DIGI4W/SOSLIB/SRC/SOSALLOC.C
* Lines of code: 135
********************************/

class SOSALLOC {

	// Properties:

	// Methods:
	void* sosModule1Start();
	void* sosAlloc();
	void* sosFree();
	void* sosSetMemAllocFunction();
	void* sosSetMemFreeFunction();
	void* sosModule1End();

};

/*******************************
* Module: SOSCAPS
* Original path: D:/HMI/DIGI4W/SOSLIB/SRC/SOSCAPS.C
* Lines of code: 65
********************************/

class SOSCAPS {

	// Properties:

	// Methods:
	void* sosModule2Start();
	void* sosDIGIGetDeviceCaps();
	void* sosModule2End();

};

/*******************************
* Module: SOSLOCK
* Original path: D:/HMI/DIGI4W/SOSLIB/SRC/SOSLOCK.C
* Lines of code: 283
********************************/

class SOSLOCK {

	// Properties:

	// Methods:
	void* sosModule8Start();
	void* sosDIGILockLibrary();
	void* sosDIGIUnLockLibrary();
	void* sosModule8End();

};

/*******************************
* Module: pmgen
* Original path: C:/BRSRC13/CORE/PIXELMAP/pmgen.c
* Lines of code: 657
********************************/

class pmgen {

	// Properties:
	void* _rscid;

	// Methods:
	void* __M_br_device_pixelmap_gen_match();
	void* __M_br_device_pixelmap_gen_copy();
	void* __M_br_device_pixelmap_gen_copyTo();
	void* __M_br_device_pixelmap_gen_copyFrom();
	void* __M_br_device_pixelmap_gen_fill();
	void* __M_br_device_pixelmap_gen_doubleBuffer();
	void* __M_br_device_pixelmap_gen_copyDirty();
	void* __M_br_device_pixelmap_gen_copyToDirty();
	void* __M_br_device_pixelmap_gen_copyFromDirty();
	void* __M_br_device_pixelmap_gen_fillDirty();
	void* __M_br_device_pixelmap_gen_doubleBufferDirty();
	void* __M_br_device_pixelmap_gen_rectangle();
	void* __M_br_device_pixelmap_gen_rectangle2();
	void* __M_br_device_pixelmap_gen_line();
	void* __M_br_device_pixelmap_gen_text();
	void* __M_br_device_pixelmap_gen_textBounds();
	void* __M_br_device_pixelmap_gen_copyBits();
	void* __M_br_device_pixelmap_gen_flush();
	void* __M_br_device_pixelmap_gen_synchronise();
	void* __M_br_device_pixelmap_gen_directLock();
	void* __M_br_device_pixelmap_gen_directUnlock();

};

/*******************************
* Module: pmsetup
* Original path: C:/BRSRC13/CORE/PIXELMAP/pmsetup.c
* Lines of code: 63
********************************/

class pmsetup {

	// Properties:
	void* _Image_BRPMAP1;
	void* _resourceClasses;
	void* _functionPointers_BRPMAP1;
	void* _namePointers_BRPMAP1;
	void* __pixelmap;
	void* _nameOrdinals_BRPMAP1;

	// Methods:
	void* _BrPixelmapBegin();
	void* _BrPixelmapEnd();

};

/*******************************
* Module: genclip
* Original path: C:/BRSRC13/CORE/PIXELMAP/genclip.c
* Lines of code: 316
********************************/

class genclip {

	// Properties:
	void* _rscid;

	// Methods:
	void* _PixelmapPointClip();
	void* _PixelmapLineClip();
	void* _PixelmapRectangleClip();
	void* _PixelmapRectangleClipTwo();
	void* _PixelmapCopyBitsClip();

};

/*******************************
* Module: himage
* Original path: C:/BRSRC13/CORE/HOST/himage.c
* Lines of code: 33
********************************/

class himage {

	// Properties:

	// Methods:
	void* _HostImageLoad();
	void* _HostImageUnload();
	void* _HostImageLookupName();
	void* _HostImageLookupOrdinal();

};

/*******************************
* Module: loader
* Original path: C:/BRSRC13/CORE/FW/loader.c
* Lines of code: 380
********************************/

class loader {

	// Properties:
	void* _rscid;

	// Methods:
	void* ImageLoad();

};

/*******************************
* Module: hostcfg
* Original path: C:/BRSRC13/CORE/HOST/hostcfg.c
* Lines of code: 136
********************************/

class hostcfg {

	// Properties:

	// Methods:
	void* _HostDefaultDevice();
	void* _HostIniSectionExists();
	void* _HostIniQuery();
	void* _HostRegistryQuery();

};

/*******************************
* Module: assocarr
* Original path: C:/BRSRC13/CORE/FW/assocarr.c
* Lines of code: 199
********************************/

class assocarr {

	// Properties:

	// Methods:
	void* BrAssociativeArrayAllocate();
	void* Set_Associative_Array_Value();
	void* BrAssociativeArraySetEntry();
	void* BrAssociativeArrayRemoveEntry();
	void* BrAssociativeArrayQuery();

};

/*******************************
* Module: brbhook
* Original path: C:/BRSRC13/CORE/FW/brbhook.c
* Lines of code: 19
********************************/

class brbhook {

	// Properties:
	void* _rscid;

	// Methods:
	void* __BrBeginHook();
	void* __BrEndHook();

};

/*******************************
* Module: hook
* Original path: C:/BRSRC13/CORE/HOST/hook.c
* Lines of code: 82
********************************/

class hook {

	// Properties:

	// Methods:
	void* _HostInterruptHook();
	void* _HostInterruptUnhook();
	void* _HostExceptionHook();
	void* _HostExceptionUnhook();

};

/*******************************
* Module: memmgmt
* Original path: C:/BRSRC13/CORE/HOST/memmgmt.c
* Lines of code: 646
********************************/

class memmgmt {

	// Properties:
	void* _regs;

	// Methods:
	void* _HostLock();
	void* _HostUnlock();
	void* _HostSelectorAllocate();
	void* _HostSelectorAllocateLinear();
	void* _HostSelectorAllocateAlias();
	void* _HostSelectorAllocatePhysical();
	void* _HostSelectorFree();
	void* _HostSelectorBaseSet();
	void* _HostSelectorLimitSet();
	void* _HostSelectorBaseQuery();
	void* _HostSelectorLimitQuery();

};

/*******************************
* Module: SOSDETEC
* Original path: D:/HMI/DIGI4W/SOSLIB/SRC/SOSDETEC.C
* Lines of code: 786
********************************/

class SOSDETEC {

	// Properties:

	// Methods:
	void* sosModule4Start();
	void* sosDIGIDetectInit();
	void* sosDIGIDetectUnInit();
	void* sosDIGIDetectFindHardware();
	void* sosDIGIDetectGetCaps();
	void* sosDIGIDetectFindFirst();
	void* sosDIGIDetectFindNext();
	void* sosDIGIDetectGetSettings();
	void* sosDIGIDetectVerifySettings();
	void* sosModule4End();

};

/*******************************
* Module: SOSERR
* Original path: D:/HMI/DIGI4W/SOSLIB/SRC/SOSERR.C
* Lines of code: 48
********************************/

class SOSERR {

	// Properties:

	// Methods:
	void* sosModule5Start();
	void* sosGetErrorString();
	void* sosModule5End();

};

/*******************************
* Module: pmnull
* Original path: C:/BRSRC13/CORE/PIXELMAP/pmnull.c
* Lines of code: 145
********************************/

class pmnull {

	// Properties:
	void* _rscid;

	// Methods:
	void* __M_br_device_pixelmap_null_resize();
	void* __M_br_device_pixelmap_null_copyTo();
	void* __M_br_device_pixelmap_null_copyFrom();
	void* __M_br_device_pixelmap_null_fill();
	void* __M_br_device_pixelmap_null_doubleBuffer();
	void* __M_br_device_pixelmap_null_copyDirty();
	void* __M_br_device_pixelmap_null_copyToDirty();
	void* __M_br_device_pixelmap_null_copyFromDirty();
	void* __M_br_device_pixelmap_null_fillDirty();
	void* __M_br_device_pixelmap_null_doubleBufferDirty();
	void* __M_br_device_pixelmap_null_rectangleCopyTo();
	void* __M_br_device_pixelmap_null_rectangleCopyFrom();
	void* __M_br_device_pixelmap_null_rectangleStretchCopyTo();
	void* __M_br_device_pixelmap_null_rectangleStretchCopyFrom();
	void* __M_br_device_pixelmap_null_rectangleFill();
	void* __M_br_device_pixelmap_null_pixelSet();
	void* __M_br_device_pixelmap_null_copyBits();
	void* __M_br_device_pixelmap_null_pixelQuery();
	void* __M_br_device_pixelmap_null_pixelAddressQuery();
	void* __M_br_device_pixelmap_null_pixelAddressSet();

};

