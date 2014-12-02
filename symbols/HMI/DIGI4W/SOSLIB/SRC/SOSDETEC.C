/*******************************
* Module: SOSDETEC
* Original path: D:/HMI/DIGI4W/SOSLIB/SRC/SOSDETEC.C
* Lines of code: 786
********************************/

class SOSDETEC {

	// Properties:

	// Methods:
	void* sosModule4Start();
	void* sosDIGIDetectInit();
	void* sosDIGIDetectUnInit();
	void* sosDIGIDetectFindHardware();
	void* sosDIGIDetectGetCaps();
	void* sosDIGIDetectFindFirst();
	void* sosDIGIDetectFindNext();
	void* sosDIGIDetectGetSettings();
	void* sosDIGIDetectVerifySettings();
	void* sosModule4End();

};