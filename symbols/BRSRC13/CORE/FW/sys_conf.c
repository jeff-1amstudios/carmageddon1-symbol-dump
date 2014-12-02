/*******************************
* Module: sys_conf
* Original path: C:/BRSRC13/CORE/FW/sys_conf.c
* Lines of code: 293
********************************/

class sys_conf {

	// Properties:
	void* _valid_system_config_tokens;

	// Methods:
	void* Is_Valid_Sys_Config_Token();
	void* LoadIniEntry();
	void* LoadIniConfig();
	void* LoadRegistryEntry();
	void* LoadRegistryConfig();
	void* BrSetDefaultConfig();
	void* BrSystemConfigBegin();
	void* _BrSystemConfigLoad();
	void* _BrSystemConfigSetString();
	void* _BrSystemConfigQueryString();

};