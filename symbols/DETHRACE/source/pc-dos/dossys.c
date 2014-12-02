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