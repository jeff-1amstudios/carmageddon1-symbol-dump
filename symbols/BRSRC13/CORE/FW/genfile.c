/*******************************
* Module: genfile
* Original path: C:/BRSRC13/CORE/FW/genfile.c
* Lines of code: 89
********************************/

class genfile {

	// Properties:
	void* _file_info_FM;
	void* _file_info_F;
	void* _file_type_FM;
	void* _file_type_F;
	void* _rscid;

	// Methods:
	void* FopRead_END();
	void* FopWrite_END();
	void* FopWrite_FILE_INFO();

};