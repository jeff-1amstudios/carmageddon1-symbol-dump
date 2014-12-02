/*******************************
* Module: image
* Original path: C:/BRSRC13/CORE/FW/image.c
* Lines of code: 358
********************************/

class image {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrImageAdd();
	void* _BrImageRemove();
	void* _BrImageFind();
	void* imageLoadHost();
	void* _BrImageReference();
	void* imageLookupName();
	void* _BrImageLookupName();
	void* _BrImageLookupOrdinal();
	void* _BrImageDereference();
	void* _BrImageFree();
	void* __BrImageFree();

};