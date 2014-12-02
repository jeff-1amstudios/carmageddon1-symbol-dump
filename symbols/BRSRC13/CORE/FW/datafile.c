/*******************************
* Module: datafile
* Original path: C:/BRSRC13/CORE/FW/datafile.c
* Lines of code: 2067
********************************/

class datafile {

	// Properties:
	void* __BrFilePrimsNull;
	void* __BrFilePrimsReadBinary;
	void* __BrFilePrimsWriteText;
	void* __BrFilePrimsWriteBinary;
	void* __BrFilePrimsReadText;
	void* _member_type_names;
	void* _DatafileStack;
	void* _ChunkNames;
	void* _rscid;
	void* _DatafileStackTop;

	// Methods:
	void* DfPush();
	void* DfPop();
	void* DfTop();
	void* DfTopType();
	void* TextReadLine();
	void* scalarTypeConvert();
	void* DfStructWriteBinary();
	void* DfStructReadBinary();
	void* DfStructSizeBinary();
	void* EnumFromString();
	void* EnumToString();
	void* DfStructWriteText();
	void* StructWriteTextSub();
	void* DfStructReadText();
	void* StructReadTextSub();
	void* DfStructSizeText();
	void* DfStructWriteArray();
	void* DfStructReadArray();
	void* DfChunkWriteText();
	void* DfChunkReadText();
	void* DfChunkWriteBinary();
	void* DfChunkReadBinary();
	void* DfCountWriteText();
	void* DfCountReadText();
	void* DfCountWriteBinary();
	void* DfCountReadBinary();
	void* DfCountSizeText();
	void* DfCountSizeBinary();
	void* BlockWriteSetup();
	void* DfBlockWriteText();
	void* DfBlockReadText();
	void* DfBlockWriteBinary();
	void* DfBlockReadBinary();
	void* DfBlockSizeText();
	void* DfBlockSizeBinary();
	void* DfNameReadText();
	void* DfNameWriteText();
	void* DfNameSizeText();
	void* DfNameReadBinary();
	void* DfNameWriteBinary();
	void* DfNameSizeBinary();
	void* DfSkipText();
	void* DfSkipBinary();
	void* DfChunksInterpret();
	void* BrNullOther();
	void* _DfFileIdentify();
	void* DfOpen();
	void* DfClose();
	void* _BrWriteModeSet();

};