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