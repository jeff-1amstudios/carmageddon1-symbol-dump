/*******************************
* Module: newgame
* Original path: C:/DETHRACE/source/common/newgame.c
* Lines of code: 2162
********************************/

class newgame {

	// Properties:
	void* _gBasic_car_names;
	void* _gNet_settings;
	void* _gRadio_bastards;
	void* _gGames_to_join;
	void* _gOptions;
	void* _gNet_target;
	void* _gLast_graph_sel;
	void* _gThe_interface_spec;
	void* _gNet_race_sequence;
	void* _gLast_game_type;
	void* _gCurrent_net_game_count;
	void* _gAnne_flic_data_length;
	void* _gShifted_default_yet;
	void* _gNet_storage_allocated;
	void* _gFrank_flic_data;
	void* _gNet_name;
	void* _gFrank_flic_data_length;
	void* _gAnne_flic_data;
	void* _gLast_net_choose_box;
	void* _gCurrent_game_selection;
	void* _gRace_index;
	void* _gRadio_selected;

	// Methods:
	void* StartRollingPlayerNamesIn();
	void* FrankAnneStart1();
	void* FrankAnneStart2();
	void* GetPlayerName();
	void* FrankAnneDone();
	void* FrankAnneDraw();
	void* FrankieOrAnnie();
	void* SelectSkillLevel();
	void* DoOnePlayerStart();
	void* NewNetGameUp();
	void* NewNetGameDown();
	void* DisposeJoinableGame();
	void* DrawAnItem();
	void* DrawColumnHeading();
	void* DrawGames();
	void* InitGamesToJoin();
	void* DisposeJoinList();
	void* AddToJoinList();
	void* NewNetStart1();
	void* NewNetStart2();
	void* NewNetGetName();
	void* NewNetDone();
	void* NewNetGoAhead();
	void* JoinOrHostGame();
	void* GetNetOptions();
	void* SetNetOptions();
	void* NetPlayCheckboxOn2();
	void* NetPlayCheckboxOff2();
	void* NetPlayCheckboxOn();
	void* NetPlayCheckboxOff();
	void* NetPlayRadioOn2();
	void* NetPlayRadioOff2();
	void* NetPlayRadioOn();
	void* NetPlayRadioOff();
	void* DrawNOptInitialRadios();
	void* NetRadioChanged();
	void* NetCheckboxChanged();
	void* NetOptLeft();
	void* NetOptRight();
	void* NetOptUp();
	void* NetOptDown();
	void* NetRadioClick();
	void* RevertToDefaults();
	void* DefaultNetSettings();
	void* NetOptGoAhead();
	void* NetPlotAGraphBox();
	void* NetDrawAGraphBox();
	void* NetEraseAGraphBox();
	void* DrawNetOptBox();
	void* DoNetOptions();
	void* SetOptions();
	void* PlayRadioOn();
	void* PlayRadioOff();
	void* DrawNetChooseInitial();
	void* NetChooseGoAhead();
	void* PlotAGraphBox();
	void* DrawAGraphBox();
	void* EraseAGraphBox();
	void* DrawNetChoose();
	void* NetChooseLR();
	void* SetGameTarget();
	void* NetGameChoices();
	void* ReadNetGameChoices();
	void* ChooseStartRace();
	void* SetUpOtherNetThings();
	void* RequestCarDetails();
	void* PickARandomCar();
	void* PollCarDetails();
	void* SetNetAvailability();
	void* ChooseNetCar();
	void* InitNetStorageSpace();
	void* DisposeNetStorageSpace();
	void* DoMultiPlayerStart();

};