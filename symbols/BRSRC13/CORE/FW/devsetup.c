/*******************************
* Module: devsetup
* Original path: C:/BRSRC13/CORE/FW/devsetup.c
* Lines of code: 621
********************************/

class devsetup {

	// Properties:
	void* _last_begin_screen;
	void* _rscid;

	// Methods:
	void* BrDevLastBeginQuery();
	void* BrDevLastBeginSet();
	void* _BrDevBeginVar();
	void* _BrDevBegin();
	void* _BrDevBeginTV();
	void* _BrDevBeginOld();
	void* _BrDevEndOld();
	void* _BrDevPaletteSetOld();
	void* _BrDevPaletteSetEntryOld();
	void* _BrRendererFacilityFind();
	void* _BrPrimitiveLibraryFind();
	void* _BrGeometryFormatFind();

};