/*******************************
* Module: cutscene
* Original path: C:/DETHRACE/source/common/cutscene.c
* Lines of code: 340
********************************/

class cutscene {

	// Properties:
	void* _gLast_demo_end_anim;

	// Methods:
	void* RADMALLOC();
	void* RADFREE();
	void* ShowCutScene();
	void* DoSCILogo();
	void* DoStainlessLogo();
	void* PlaySmackerFile();
	void* DoOpeningAnimation();
	void* DoNewGameAnimation();
	void* DoGoToRaceAnimation();
	void* DoEndRaceAnimation();
	void* DoGameOverAnimation();
	void* DoGameCompletedAnimation();
	void* StartLoadingScreen();

};