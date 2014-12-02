/*******************************
* Module: replay
* Original path: C:/DETHRACE/source/common/replay.c
* Lines of code: 972
********************************/

class replay {

	// Properties:
	void* _gProgress_line_top;
	void* _gProgress_line_left;
	void* _gProgress_line_right;
	void* _gReplay_pixies;
	void* _gReplay_pixie_names;
	void* _gKey_down;
	void* _gNo_cursor;
	void* _gSingle_frame_mode;
	void* _gSave_frame_number;
	void* _gCam_change_button_down;
	void* _gAction_replay_start_time;
	void* _gLast_replay_zappy_screen;
	void* _gStopped_time;
	void* _gCam_change_time;
	void* _gPending_replay_rate;
	void* _gAction_replay_end_time;
	void* _gReplay_rate;
	void* _gSave_file;
	void* _gSave_bunch_ID;
	void* _gPlay_direction;
	void* _gPaused;
	void* _gAction_replay_camera_mode;

	// Methods:
	void* ReplayIsPaused();
	void* GetReplayRate();
	void* GetReplayDirection();
	void* StopSaving();
	void* ActualActionReplayHeadups();
	void* DoActionReplayPostSwap();
	void* DoZappyActionReplayHeadups();
	void* DoActionReplayHeadups();
	void* MoveReplayBuffer();
	void* MoveToEndOfReplay();
	void* MoveToStartOfReplay();
	void* ToggleReplay();
	void* ReverseSound();
	void* FindUniqueFile();
	void* PollActionReplayControls();
	void* CheckReplayTurnOn();
	void* InitializeActionReplay();
	void* DoActionReplay();
	void* SynchronizeActionReplay();

};