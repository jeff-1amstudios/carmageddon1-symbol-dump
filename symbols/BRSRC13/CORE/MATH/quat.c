/*******************************
* Module: quat
* Original path: C:/BRSRC13/CORE/MATH/quat.c
* Lines of code: 261
********************************/

class quat {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrQuatMul();
	void* _BrQuatNormalise();
	void* _BrQuatInvert();
	void* _BrQuatSlerp();
	void* _BrQuatToMatrix34();
	void* _BrMatrix34ToQuat();
	void* _BrQuatToMatrix4();
	void* _BrMatrix4ToQuat();

};