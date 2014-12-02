/*******************************
* Module: input
* Original path: C:/DETHRACE/source/common/input.c
* Lines of code: 1034
********************************/

class input {

	// Properties:
	void* _gJoy_array;
	void* _gKey_array;
	void* _gKey_poll_counter;
	void* _gRolling_letters;
	void* _gLast_poll_keys;
	void* _gCurrent_cursor;
	void* _gCurrent_position;
	void* _gInsert_mode;
	void* _gLetter_x_coords;
	void* _gEdge_trigger_mode;
	void* _gVisible_length;
	void* _gLetter_y_coords;
	void* _gThe_key;
	void* _gLast_key_down_time;
	void* _gThe_length;
	void* _gLast_roll;
	void* _gLast_key_down;
	void* _gGo_ahead_keys;
	void* _gKey_mapping;
	void* _gCurrent_typing;

	// Methods:
	void* SetJoystickArrays();
	void* PollKeys();
	void* CyclePollKeys();
	void* ResetPollKeys();
	void* CheckKeysForMouldiness();
	void* EitherMouseButtonDown();
	void* PDKeyDown2();
	void* PDKeyDown();
	void* PDKeyDown3();
	void* PDAnyKeyDown();
	void* AnyKeyDown();
	void* KevKeyService();
	void* OldKeyIsDown();
	void* KeyIsDown();
	void* WaitForNoKeys();
	void* WaitForAKey();
	void* CmdKeyDown();
	void* GetMousePosition();
	void* InitRollingLetters();
	void* EndRollingLetters();
	void* AddRollingLetter();
	void* AddRollingString();
	void* AddRollingNumber();
	void* RollLettersIn();
	void* ChangeCharTo();
	void* ChangeTextTo();
	void* SetRollingCursor();
	void* BlankSlot();
	void* DoRLBackspace();
	void* DoRLDelete();
	void* DoRLInsert();
	void* DoRLCursorLeft();
	void* DoRLCursorRight();
	void* DoRLTypeLetter();
	void* StopTyping();
	void* RevertTyping();
	void* StartTyping();
	void* TypeKey();
	void* SetSlotXY();
	void* GetTypedName();
	void* KillCursor();
	void* EdgeTriggerModeOn();
	void* EdgeTriggerModeOff();

};