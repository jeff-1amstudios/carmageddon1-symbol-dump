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