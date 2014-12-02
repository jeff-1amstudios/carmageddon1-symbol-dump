/*******************************
* Module: SOSTMR
* Original path: D:/HMI/DIGI4W/SOSLIB/SRC/SOSTMR.C
* Lines of code: 557
********************************/

class SOSTMR {

	// Properties:

	// Methods:
	void* sosModule11Start();
	void* sosTIMERInitSystem();
	void* sosTIMERUnInitSystem();
	void* sosTIMERRegisterEvent();
	void* sosTIMERAlterEventRate();
	void* sosTIMERRemoveEvent();
	void* sosTIMERGetEventRate();
	void* sosTIMERSetRate();
	void* sosTIMERHandler();
	void* sosTIMEROldHandler();
	void* sosModule11End();

};