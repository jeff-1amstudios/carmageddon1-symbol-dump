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