/*******************************
* Module: options
* Original path: C:/DETHRACE/source/common/options.c
* Lines of code: 2033
********************************/

class options {

	// Properties:
	void* _gKey_defns;
	void* _gRadio_bastards;
	void* _gKey_count;
	void* _gLast_graph_sel;
	void* _gKey_names;
	void* _gPending_entry;
	void* _gThe_interface_spec;
	void* _gOrig_key_mapping;
	void* _gDials_pix;
	void* _gCurrent_key;

	// Methods:
	void* DrawDial();
	void* MoveDialFromTo();
	void* SoundOptionsStart();
	void* SoundOptionsDone();
	void* SoundOptionsLeft();
	void* SoundOptionsRight();
	void* SoundClick();
	void* DoSoundOptions();
	void* GetGraphicsOptions();
	void* SetGraphicsOptions();
	void* PlayRadioOn2();
	void* PlayRadioOff2();
	void* PlayRadioOn();
	void* PlayRadioOff();
	void* DrawInitialRadios();
	void* RadioChanged();
	void* GraphOptLeft();
	void* GraphOptRight();
	void* GraphOptUp();
	void* GraphOptDown();
	void* RadioClick();
	void* GraphOptGoAhead();
	void* PlotAGraphBox();
	void* DrawAGraphBox();
	void* EraseAGraphBox();
	void* DrawGraphBox();
	void* DoGraphicsOptions();
	void* CalibrateJoysticks();
	void* StripControls();
	void* LoadKeyNames();
	void* DisposeKeyNames();
	void* SaveOrigKeyMapping();
	void* GetKeyCoords();
	void* SetKeysToDefault();
	void* SaveKeyMapping();
	void* ChangeKeyMapIndex();
	void* DrawKeyAssignments();
	void* KeyAssignLeft();
	void* KeyAssignRight();
	void* KeyAssignUp();
	void* KeyAssignDown();
	void* KeyAssignGoAhead();
	void* MouseyClickBastard();
	void* DrawInitialKMRadios();
	void* DoControlOptions();
	void* LoadSoundOptionsData();
	void* FreeSoundOptionsData();
	void* DrawDisabledOptions();
	void* DoOptions();

};