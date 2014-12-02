/*******************************
* Module: transfrm
* Original path: C:/BRSRC13/CORE/MATH/transfrm.c
* Lines of code: 269
********************************/

class transfrm {

	// Properties:
	void* _rscid;
	void* __CombineTransforms;

	// Methods:
	void* _BrTransformToMatrix34();
	void* _BrMatrix34PreTransform();
	void* _BrMatrix34PostTransform();
	void* _BrMatrix4PreTransform();
	void* _BrMatrix34ToTransform();
	void* _BrTransformToTransform();

};