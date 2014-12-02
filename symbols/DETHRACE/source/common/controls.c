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