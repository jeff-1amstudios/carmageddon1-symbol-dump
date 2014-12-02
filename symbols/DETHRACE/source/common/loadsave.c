/*******************************
* Module: loadsave
* Original path: C:/DETHRACE/source/common/loadsave.c
* Lines of code: 978
********************************/

class loadsave {

	// Properties:
	void* _gSaved_games;
	void* _gStarted_typing;
	void* _gSave_allowed;

	// Methods:
	void* CorrectLoadByteOrdering();
	void* CalcLSChecksum();
	void* LoadSavedGames();
	void* DisposeSavedGames();
	void* LoadTheGame();
	void* StartRollingSaveNamesIn();
	void* LoadStart();
	void* DoLoadGame();
	void* CorrectSaveByteOrdering();
	void* SaveTheGame();
	void* ConfirmMidGameSave();
	void* MakeSavedGame();
	void* SaveStart();
	void* GetSaveName();
	void* SaveDone();
	void* SaveGoAhead();
	void* SaveEscape();
	void* SaveGameInterface();
	void* DoSaveGame();

};