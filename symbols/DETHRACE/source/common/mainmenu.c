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