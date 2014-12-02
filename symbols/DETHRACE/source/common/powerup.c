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