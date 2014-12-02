/*******************************
* Module: pmdsptch
* Original path: C:/BRSRC13/CORE/PIXELMAP/pmdsptch.c
* Lines of code: 969
********************************/

class pmdsptch {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrPixelmapAllocateSub();
	void* _BrPixelmapFree();
	void* _BrPixelmapResize();
	void* _BrPixelmapMatch();
	void* _BrPixelmapMatchSized();
	void* _BrPixelmapMatchTyped();
	void* _BrPixelmapMatchTypedSized();
	void* _BrPixelmapClone();
	void* _BrPixelmapFill();
	void* _BrPixelmapRectangle();
	void* _BrPixelmapRectangle2();
	void* DispatchCopy();
	void* DispatchRectangleCopy();
	void* DispatchRectangleStretchCopy();
	void* _BrPixelmapRectangleCopy();
	void* _BrPixelmapRectangleStretchCopy();
	void* _BrPixelmapRectangleFill();
	void* _BrPixelmapDirtyRectangleCopy();
	void* _BrPixelmapDirtyRectangleClear();
	void* _BrPixelmapDirtyRectangleDoubleBuffer();
	void* _BrPixelmapPixelSet();
	void* _BrPixelmapPixelGet();
	void* _BrPixelmapCopy();
	void* _BrPixelmapLine();
	void* _BrPixelmapDoubleBuffer();
	void* _BrPixelmapText();
	void* _BrPixelmapTextF();
	void* _BrPixelmapTextWidth();
	void* _BrPixelmapTextHeight();
	void* _BrPixelmapCopyBits();
	void* _BrPixelmapFileSize();
	void* _BrPixelmapPixelSize();
	void* _BrPixelmapChannels();
	void* _BrPixelmapPaletteSet();
	void* _BrPixelmapPaletteEntrySet();
	void* _BrPixelmapPaletteEntrySetMany();
	void* _BrPixelmapDirectLock();
	void* _BrPixelmapDirectUnlock();

};