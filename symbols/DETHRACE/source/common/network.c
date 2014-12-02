/*******************************
* Module: network
* Original path: C:/DETHRACE/source/common/network.c
* Lines of code: 3102
********************************/

class network {

	// Properties:
	void* _gNew_net_players;
	void* _gGuarantee_list;
	void* _gRace_only_flags;
	void* _gLast_flush_message;
	void* _gMessage_to_free;
	void* _gMid_messages;
	void* _gLast_player_list_received;
	void* _gMin_messages;
	void* _gAdd_proc;
	void* _gNet_service_disable;
	void* _gTo_host_stack;
	void* _gBroadcast_stack;
	void* _gReceiving_batch_number;
	void* _gMess_max_flags;
	void* _gReceiving_new_players;
	void* _gMax_messages;
	void* _gGuarantee_number;
	void* _gNext_guarantee;
	void* _gAsk_time;
	void* _gIn_net_service;
	void* _gNet_initialised;
	void* _gDont_allow_joiners;
	void* _gMess_mid_flags;
	void* _gCurrent_join_poll_game;
	void* _gOnly_receive_guarantee_replies;
	void* _gMess_min_flags;
	void* _gPlayer_list_batch_number;
	void* _gMessage_header_size;
	void* _gJoin_poll_index;
	void* _gJoin_request_denied;
	void* _gHost_died;
	void* _gCar_was_taken;
	void* _gBastard_has_answered;
	void* _gTime_for_next_one;
	void* _gJoin_list_mode;
	void* _gReceived_game_scores;

	// Methods:
	void* NetInitialise();
	void* NetShutdown();
	void* ShutdownNetIfRequired();
	void* DisableNetService();
	void* ReenableNetService();
	void* PermitNetServiceReentrancy();
	void* HaltNetServiceReentrancy();
	void* NetSendHeadupToAllPlayers();
	void* NetSendHeadupToEverybody();
	void* NetSendHeadupToPlayer();
	void* InitialisePlayerStati();
	void* LeaveTempGame();
	void* DisposeCurrentJoinPollGame();
	void* DoNextJoinPoll();
	void* NetStartProducingJoinList();
	void* NetEndJoinList();
	void* NetDisposePIDGameInfo();
	void* NetDisposeGameDetails();
	void* NetAllocatePIDGameDetails();
	void* NetLeaveGameLowLevel();
	void* NetLeaveGame();
	void* NetSetPlayerSystemInfo();
	void* NetDisposePlayer();
	void* FillInThisPlayer();
	void* LoadCarN();
	void* DisposeCarN();
	void* PlayerHasLeft();
	void* NetPlayersChanged();
	void* NetHostGame();
	void* NetInitClient();
	void* NetJoinGameLowLevel();
	void* NetJoinGame();
	void* NetObtainSystemUserName();
	void* NetExtractGameID();
	void* NetExtractPlayerID();
	void* NetSendMessageToAddress();
	void* NetSendMessageToPlayer();
	void* NetSendMessageToHost();
	void* NetReplyToMessage();
	void* NetSendMessageToAllPlayers();
	void* NetGetContentsSize();
	void* NetGetMessageSize();
	void* NetCalcSizeDecider();
	void* NetBuildMessage();
	void* NetGetToHostContents();
	void* NetGetBroadcastContents();
	void* NetSendMessageStacks();
	void* NetAllocateMessage();
	void* NetFreeExcessMemory();
	void* NetDisposeMessage();
	void* NetGetNextMessage();
	void* ReceivedSendMeDetails();
	void* ReceivedDetails();
	void* SendOutPlayerList();
	void* ReceivedJoin();
	void* KickPlayerOut();
	void* ReceivedLeave();
	void* NetFullScreenMessage();
	void* HostHasBittenTheDust();
	void* ReceivedHosticide();
	void* ConfirmReceipt();
	void* ReceivedNewPlayerList();
	void* ReceivedRaceOver();
	void* ReceivedStatusReport();
	void* ReceivedStartRace();
	void* ReceivedGuaranteeReply();
	void* ReceivedHeadup();
	void* ReceivedHostQuery();
	void* ReceivedHostReply();
	void* SendGuaranteeReply();
	void* PlayerIsInList();
	void* ReceivedTimeSync();
	void* ReceivedConfirm();
	void* ReceivedDisableCar();
	void* ReceivedEnableCar();
	void* ReceivedScores();
	void* ReceivedWasted();
	void* ReceivedCarDetailsReq();
	void* ReceivedCarDetails();
	void* ReceivedGameScores();
	void* ReceivedMessage();
	void* NetReceiveAndProcessMessages();
	void* BroadcastStatus();
	void* CheckForDisappearees();
	void* CheckForPendingStartRace();
	void* NetService();
	void* NetFinishRace();
	void* NetPlayerStatusChanged();
	void* NetGetPlayerStatus();
	void* NetGuaranteedSendMessageToAllPlayers();
	void* NetGuaranteedSendMessageToEverybody();
	void* NetGuaranteedSendMessageToHost();
	void* NetGuaranteedSendMessageToPlayer();
	void* NetGuaranteedSendMessageToAddress();
	void* ResendGuaranteedMessages();
	void* SampleFailNotifier();
	void* NetWaitForGuaranteeReplies();
	void* NetPlayerFromID();
	void* NetCarFromPlayerID();
	void* NetPlayerFromCar();
	void* DoCheckSum();
	void* GetCheckSum();
	void* CheckCheckSum();

};