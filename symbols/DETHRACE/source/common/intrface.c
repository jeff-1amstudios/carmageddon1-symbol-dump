/*******************************
* Module: intrface
* Original path: C:/DETHRACE/source/common/intrface.c
* Lines of code: 758
********************************/

class intrface {

	// Properties:
	void* _gDisabled_choices;
	void* _gCurrent_mode;
	void* _gStart_time;
	void* _gCurrent_choice;
	void* _gSpec;
	void* _gAlways_typing;
	void* _gDisabled_count;

	// Methods:
	void* SetAlwaysTyping();
	void* ClearAlwaysTyping();
	void* ChoiceDisabled();
	void* ResetInterfaceTimeout();
	void* ChangeSelection();
	void* RecopyAreas();
	void* DisableChoice();
	void* EnableChoice();
	void* DoInterfaceScreen();
	void* ChangeSelectionTo();

};