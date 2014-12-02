/*******************************
* Module: lexer
* Original path: C:/BRSRC13/CORE/FW/lexer.c
* Lines of code: 682
********************************/

class lexer {

	// Properties:

	// Methods:
	void* _lexerError();
	void* _BrLexerAllocate();
	void* _BrLexerCommentSet();
	void* _BrLexerErrorSet();
	void* _BrLexerFree();
	void* _fileGetchar();
	void* _BrLexerPushFile();
	void* _stringGetchar();
	void* _BrLexerPushString();
	void* _BrLexerPop();
	void* lexerAdvance();
	void* lexerAdvanceDump();
	void* _BrLexerDumpSet();
	void* _BrLexerTokenError();
	void* _BrLexerPosition();
	void* _BrParseFixed();
	void* _BrParseFloat();
	void* _BrParseInteger();
	void* _BrParseVectorFixed();
	void* _BrParseVectorFloat();
	void* _BrParseMatrixFixed();
	void* _BrParseMatrixFloat();

};