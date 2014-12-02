/*******************************
* Module: sound
* Original path: C:/DETHRACE/source/common/sound.c
* Lines of code: 1142
********************************/

class sound {

	// Properties:
	void* _gIndexed_outlets;
	void* _gRandom_CDA_tunes;
	void* _gLast_sound_service;
	void* _gSong_repeat_count;
	void* _gServicing_sound;
	void* _gCD_fully_installed;
	void* _gCD_is_disabled;
	void* _gCDA_is_playing;
	void* _gSound_sources_inited;
	void* _gCDA_tag;
	void* _gEngine_outlet;
	void* _gRandom_Rockin_MIDI_tunes;
	void* _gOld_sound_detail_level;
	void* _gLast_tune;
	void* _gVirgin_pass;
	void* _gCamera_left;
	void* _gRandom_MIDI_tunes;
	void* _gCamera_position;
	void* _gOld_camera_position;
	void* _gCamera_velocity;
	void* _gSound_detail_level;
	void* _gDriver_outlet;
	void* _gPedestrians_outlet;
	void* _gCar_outlet;
	void* _gMIDI_id;
	void* _gMusic_available;
	void* _gMusic_outlet;
	void* _gEffects_outlet;

	// Methods:
	void* UsePathFileToDetermineIfFullInstallation();
	void* InitSound();
	void* DRS3StartSound();
	void* DRS3StartSoundNoPiping();
	void* DRS3StartSound2();
	void* DRS3ChangeVolume();
	void* DRS3ChangeLRVolume();
	void* DRS3ChangePitch();
	void* DRS3ChangeSpeed();
	void* DRS3ChangePitchSpeed();
	void* DRS3StopSound();
	void* DRS3LoadSound();
	void* DRS3ReleaseSound();
	void* DRS3Service();
	void* DRS3OutletSoundsPlaying();
	void* DRS3SoundStillPlaying();
	void* DRS3ShutDown();
	void* DRS3SetOutletVolume();
	void* DRS3OverallVolume();
	void* DRS3StopOutletSound();
	void* DRS3StopAllOutletSounds();
	void* ToggleSoundEnable();
	void* SoundService();
	void* InitSoundSources();
	void* DisposeSoundSources();
	void* DRS3StartSound3D();
	void* DRS3StartSoundFromSource3();
	void* DRS3StartSoundFromSource();
	void* MungeEngineNoise();
	void* SetSoundVolumes();
	void* GetOutletFromIndex();
	void* GetIndexFromOutlet();
	void* DRS3StartCDA();
	void* DRS3StopCDA();
	void* StartMusic();
	void* StopMusic();

};