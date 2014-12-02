/*******************************
* Module: tokenval
* Original path: C:/BRSRC13/CORE/FW/tokenval.c
* Lines of code: 1956
********************************/

class tokenval {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrTVTemplateAllocate();
	void* _BrTVTemplateFree();
	void* templateResolveNames();
	void* templateMakeMap();
	void* ConvertFloatToFixed();
	void* ConvertFixedToFloat();
	void* ConvertLongCopy();
	void* ValueQuery();
	void* ValueSet();
	void* ValueExtraSize();
	void* _BrTokenValueQuery();
	void* _BrTokenValueQueryMany();
	void* _BrTokenValueQueryManySize();
	void* _BrTokenValueQueryAll();
	void* _BrTokenValueQueryAllSize();
	void* _BrTokenValueSet();
	void* _BrTokenValueSetMany();
	void* DumpMatrixInteger();
	void* DumpMatrixFixed();
	void* DumpMatrixFloat();
	void* DumpObject();
	void* _BrTokenValueDump();
	void* _BrStringToTokenValue();
	void* parseTokenValue();
	void* _BrTokenValueCompare();
	void* BrTokenValueDup();

};