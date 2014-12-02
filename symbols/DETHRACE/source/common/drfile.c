/*******************************
* Module: drfile
* Original path: C:/DETHRACE/source/common/drfile.c
* Lines of code: 124
********************************/

class drfile {

	// Properties:
	void* _gOld_file_system;
	void* _gFilesystem;

	// Methods:
	void* _DRStdioOpenRead();
	void* _DRStdioOpenWrite();
	void* _DRStdioClose();
	void* _DRStdioRead();
	void* _DRStdioWrite();
	void* InstallDRFileCalls();

};