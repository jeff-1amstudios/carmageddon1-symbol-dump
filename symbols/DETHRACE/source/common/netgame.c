/*******************************
* Module: netgame
* Original path: C:/DETHRACE/source/common/netgame.c
* Lines of code: 2046
********************************/

class netgame {

	// Properties:
	void* _gGame_scores;
	void* _gPowerup_cost;
	void* _gPed_target;
	void* _gNot_shown_race_type_headup;
	void* _gLast_it_change;
	void* _gTime_for_punishment;
	void* _gLast_lepper;
	void* _gInitialised_grid;
	void* _gIt_or_fox;

	// Methods:
	void* SendCarData();
	void* ReceivedRecover();
	void* CopyMechanics();
	void* ReceivedMechanics();
	void* ReceivedCopInfo();
	void* SendAllNonCarPositions();
	void* ReceivedNonCarPosition();
	void* ReceivedNonCar();
	void* SignalToStartRace2();
	void* SignalToStartRace();
	void* SetUpNetCarPositions();
	void* ReinitialiseCar();
	void* RepositionPlayer();
	void* DisableCar();
	void* EnableCar();
	void* DoNetworkHeadups();
	void* SortNetHeadAscending();
	void* SortNetHeadDescending();
	void* ClipName();
	void* DoNetScores2();
	void* DoNetScores();
	void* InitNetHeadups();
	void* DisposeNetHeadups();
	void* EverybodysLost();
	void* DeclareWinner();
	void* PlayerIsIt();
	void* FarEnoughAway();
	void* CarInContactWithItOrFox();
	void* SelectRandomItOrFox();
	void* CalcPlayerScores();
	void* SendPlayerScores();
	void* DoNetGameManagement();
	void* InitialisePlayerScore();
	void* InitPlayers();
	void* BuyPSPowerup();
	void* BuyArmour();
	void* BuyPower();
	void* BuyOffense();
	void* UseGeneralScore();
	void* NetSendEnvironmentChanges();
	void* UpdateEnvironments();
	void* ReceivedGameplay();
	void* SendGameplay();
	void* SendGameplayToAllPlayers();
	void* SendGameplayToHost();
	void* InitNetGameplayStuff();
	void* DefaultNetName();
	void* NetSendPointCrush();
	void* RecievedCrushPoint();
	void* GetReducedMatrix();
	void* GetExpandedMatrix();
	void* NetEarnCredits();

};