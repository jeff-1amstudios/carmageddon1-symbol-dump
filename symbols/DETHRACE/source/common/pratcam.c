/*******************************
* Module: pratcam
* Original path: C:/DETHRACE/source/common/pratcam.c
* Lines of code: 757
********************************/

class pratcam {

	// Properties:
	void* _gPrat_flic;
	void* _gWhirr_noise;
	void* _gPratcam_sequences;
	void* _gPratcam_flics;
	void* _gCurrent_pratcam_chunk;
	void* _gPending_ambient_prat;
	void* _gCurrent_pratcam_index;
	void* _gPrat_buffer;
	void* _gNumber_of_prat_sequences;
	void* _gNumber_of_prat_flics;
	void* _gLast_pratcam_frame_time;
	void* _gCurrent_pratcam_precedence;
	void* _gCurrent_ambient_prat_sequence;
	void* _gCurrent_pratcam_alternative;

	// Methods:
	void* PratcamGetCurrent();
	void* PratcamGetAmbient();
	void* PratcamGetPending();
	void* TogglePratcam();
	void* LoadPratcam();
	void* NextPratcamChunk();
	void* NewPratcamSequence();
	void* ChangeAmbientPratcamNow();
	void* ChangeAmbientPratcam();
	void* PratcamEventNow();
	void* PratcamEvent();
	void* HighResPratBufferWidth();
	void* HighResPratBufferHeight();
	void* InitPratcam();
	void* DisposePratcam();
	void* DoPratcam();
	void* TestPratCam();
	void* PratCam0();
	void* PratCam1();
	void* PratCam2();
	void* PratCam3();
	void* PratCam4();
	void* PratCam5();
	void* PratCam6();
	void* PratCam7();
	void* PratCam8();
	void* PratCam9();

};