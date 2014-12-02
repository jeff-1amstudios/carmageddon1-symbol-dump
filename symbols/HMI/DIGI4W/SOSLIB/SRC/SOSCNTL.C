/*******************************
* Module: SOSCNTL
* Original path: D:/HMI/DIGI4W/SOSLIB/SRC/SOSCNTL.C
* Lines of code: 370
********************************/

class SOSCNTL {

	// Properties:

	// Methods:
	void* sosModule3Start();
	void* sosDIGIGetDMAPosition();
	void* sosDIGISetMasterVolume();
	void* sosDIGISetSampleVolume();
	void* sosDIGIGetSampleVolume();
	void* sosDIGIGetBytesProcessed();
	void* sosDIGIGetLoopCount();
	void* sosDIGISetPanLocation();
	void* sosDIGIGetPanLocation();
	void* sosDIGISetSampleRate();
	void* sosDIGIGetSampleRate();
	void* sosDIGIGetPanSpeed();
	void* sosDIGIGetSampleID();
	void* sosDIGIGetSampleHandle();
	void* sosDIGISamplesPlaying();
	void* sosDIGISampleDone();
	void* sosModule3End();

};