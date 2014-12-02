/*******************************
* Module: pmfile
* Original path: C:/BRSRC13/CORE/PIXELMAP/pmfile.c
* Lines of code: 357
********************************/

class pmfile {

	// Properties:
	void* _PixelmapLoadTable;
	void* _br_old_pixelmap_F;
	void* _pixelmap_type_F;
	void* _br_pixelmap_F;
	void* _br_old_pixelmap_FM;
	void* _br_pixelmap_FM;
	void* _pixelmap_type_FM;
	void* _PixelmapLoadEntries;
	void* _rscid;

	// Methods:
	void* FopWrite_PIXELMAP();
	void* FopRead_OLD_PIXELMAP();
	void* FopRead_PIXELMAP();
	void* FopWrite_PIXELS();
	void* FopRead_PIXELS();
	void* FopWrite_ADD_MAP();
	void* FopRead_ADD_MAP();
	void* _BrPixelmapLoadMany();
	void* WritePixelmap();
	void* _BrPixelmapSaveMany();
	void* _BrPixelmapLoad();
	void* _BrPixelmapSave();

};