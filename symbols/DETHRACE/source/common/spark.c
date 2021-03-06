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