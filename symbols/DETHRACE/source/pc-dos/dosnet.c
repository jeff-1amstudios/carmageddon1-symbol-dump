/*******************************
* Module: dosnet
* Original path: C:/DETHRACE/source/pc-dos/dosnet.c
* Lines of code: 1815
********************************/

class dosnet {

	// Properties:
	void* _gListen_elements;
	void* _gLocal_ipx_addr_string;
	void* _gSend_elements;
	void* _gLocal_addr_ipx;
	void* _gReceive_buffer;
	void* _gRemote_net_player_info;
	void* _gBroadcast_addr_ipx;
	void* _gLocal_net_player_info;
	void* _gSend_buffer;
	void* _gNetworks;
	void* _gRemote_addr_ipx;
	void* _gSend_packet;
	void* _gListen_segment;
	void* _gSend_packet_ptr;
	void* _gSend_segment;
	void* _gListen_packet;
	void* _gListen_packet_ptr;
	void* _gMsg_header_strlen;
	void* _gNumber_of_networks;
	void* _gNumber_of_hosts;
	void* _gNetwork_init_flags;
	void* _gJoinable_games;
	void* _RMI;
	void* _gMatts_PC;
	void* _gLast_received_IPX_header;
	void* _gSocket_number_network_order;
	void* _gSocket_number_pd_format;
	void* _gECB_offset;
	void* _gListen_selector;
	void* _gSend_selector;

	// Methods:
	void* ClearupPDNetworkStuff();
	void* MATTMessageCheck();
	void* GetProfileText();
	void* GetSocketNumberFromProfileFile();
	void* EthernetAddressToU32();
	void* NetNowIPXLocalTarget2String();
	void* GetMessageTypeFromMessage();
	void* SameEthernetAddress();
	void* GetIPXAddrFromPlayerID();
	void* MakeMessageToSend();
	void* ReceiveHostResponses();
	void* BroadcastMessage();
	void* hmiIPXCloseSocket();
	void* hmiIPXListenForPacket();
	void* hmiIPXPostListen();
	void* _hmiIPXGetData();
	void* hmiIPXSendPacket();
	void* hmiIPXSendDataDirect();
	void* hmiIPXGetInternetworkAddr();
	void* hmiIPXGetLocalTarget();
	void* AllocateRealMem();
	void* FreeRealMem();
	void* hmiIPXInstalled();
	void* hmiIPXOpenSocket();
	void* GetLargestPacketSizeOoErBetterInsertLinfordChristieJokeHere();
	void* hmiIPXInitSystem();
	void* GetIPXToStickItsEarToTheGround();
	void* PDNetInitialise();
	void* PDNetShutdown();
	void* PDNetStartProducingJoinList();
	void* PDNetEndJoinList();
	void* PDNetGetNextJoinGame();
	void* PDNetDisposeGameDetails();
	void* PDNetHostGame();
	void* PDNetJoinGame();
	void* PDNetLeaveGame();
	void* PDNetHostFinishGame();
	void* PDNetExtractGameID();
	void* PDNetExtractPlayerID();
	void* PDNetObtainSystemUserName();
	void* PDNetSendMessageToPlayer();
	void* PDNetSendMessageToAllPlayers();
	void* PDNetGetNextMessage();
	void* PDNetAllocateMessage();
	void* PDNetDisposeMessage();
	void* PDNetSetPlayerSystemInfo();
	void* PDNetDisposePlayer();
	void* PDNetSendMessageToAddress();
	void* PDNetInitClient();
	void* PDNetGetHeaderSize();

};