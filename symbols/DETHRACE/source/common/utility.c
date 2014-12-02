/*******************************
* Module: utility
* Original path: C:/DETHRACE/source/common/utility.c
* Lines of code: 2148
********************************/

class utility {

	// Properties:
	void* _gLong_key;
	void* _gOther_long_key;
	void* _gMisc_strings;
	void* _gIn_check_quit;
	void* _gLost_time;
	void* _gEncryption_method;
	void* _g16bit_palette;
	void* _gSource_for_16bit_palette;

	// Methods:
	void* CheckQuit();
	void* sqr();
	void* EncodeLine();
	void* IRandomBetween();
	void* PercentageChance();
	void* IRandomPosNeg();
	void* FRandomBetween();
	void* FRandomPosNeg();
	void* SRandomBetween();
	void* SRandomPosNeg();
	void* GetALineWithNoPossibleService();
	void* GetALineAndDontArgue();
	void* PathCat();
	void* Chance();
	void* tandeg();
	void* GetFileLength();
	void* BooleanTo1Or0();
	void* DRPixelmapAllocate();
	void* DRPixelmapAllocateSub();
	void* DRPixelmapMatchSized();
	void* CopyDoubled8BitTo16BitRectangle();
	void* Scale8BitPixelmap();
	void* Tile8BitPixelmap();
	void* FindExceptionInList();
	void* PurifiedPixelmap();
	void* DRPixelmapLoad();
	void* DRPixelmapLoadMany();
	void* WaitFor();
	void* DRActorEnumRecurse();
	void* _CompareActorID();
	void* DRActorFindRecurse();
	void* DRActorEnumRecurseWithMat();
	void* DRActorEnumRecurseWithTrans();
	void* sign();
	void* fsign();
	void* OpenUniqueFileB();
	void* PrintScreenFile();
	void* PrintScreenFile16();
	void* PrintScreen();
	void* GetTotalTime();
	void* GetRaceTime();
	void* AddLostTime();
	void* TimerString();
	void* GetMiscString();
	void* GetCopyOfMiscString();
	void* Flash();
	void* MaterialCopy();
	void* RGBDifferenceSqr();
	void* FindBestMatch();
	void* BuildShadeTablePath();
	void* LoadGeneratedShadeTable();
	void* SaveGeneratedShadeTable();
	void* GenerateShadeTable();
	void* GenerateDarkenedShadeTable();
	void* PossibleService();
	void* DRMatrix34TApplyP();
	void* PaletteEntry16Bit();
	void* PaletteOf16Bits();
	void* Copy8BitTo16Bit();
	void* Copy8BitTo16BitRectangle();
	void* Copy8BitTo16BitRectangleWithTransparency();
	void* Copy8BitToOnscreen16BitRectangleWithTransparency();
	void* Copy8BitRectangleTo16BitRhombusWithTransparency();
	void* DRPixelmapRectangleCopy();
	void* DRPixelmapCopy();
	void* DRPixelmapRectangleFill();
	void* NormalSideOfPlane();
	void* DRMaterialClone();
	void* StripCR();
	void* SubsStringJob();
	void* DecodeLine2();
	void* EncodeLine2();
	void* EncodeFile();
	void* EncodeFileWrapper();
	void* EncodeAllFilesInDirectory();
	void* SkipNLines();
	void* DRStricmp();
	void* GlorifyMaterial();
	void* WhitenVertexRGB();
	void* NobbleNonzeroBlacks();
	void* PDCheckDriveExists();
	void* OpacityInPrims();
	void* AlreadyBlended();
	void* BlendifyMaterialTablishly();
	void* BlendifyMaterialPrimitively();
	void* BlendifyMaterial();

};