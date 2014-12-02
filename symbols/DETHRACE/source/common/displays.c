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