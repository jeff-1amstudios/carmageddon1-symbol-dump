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