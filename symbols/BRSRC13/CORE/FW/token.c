/*******************************
* Module: token
* Original path: C:/BRSRC13/CORE/FW/token.c
* Lines of code: 284
********************************/

class token {

	// Properties:
	void* _predefinedTokens;
	void* _rscid;
	void* _tokenTypes;

	// Methods:
	void* BrTokenBegin();
	void* _BrTokenCreate();
	void* _BrTokenIdentifier();
	void* _BrTokenType();
	void* _BrTokenCount();
	void* _BrTokenFind();
	void* _BrTokenFindMany();
	void* BrTokenFindType();

};