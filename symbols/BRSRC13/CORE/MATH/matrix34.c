/*******************************
* Module: matrix34
* Original path: C:/BRSRC13/CORE/MATH/matrix34.c
* Lines of code: 969
********************************/

class matrix34 {

	// Properties:
	void* _mattmp1;
	void* _mattmp2;
	void* _rscid;

	// Methods:
	void* _BrMatrix34Copy();
	void* _BrMatrix34Mul();
	void* _BrMatrix34Identity();
	void* _BrMatrix34RotateX();
	void* _BrMatrix34RotateY();
	void* _BrMatrix34RotateZ();
	void* _BrMatrix34Rotate();
	void* _BrMatrix34Translate();
	void* _BrMatrix34Scale();
	void* _BrMatrix34ShearX();
	void* _BrMatrix34ShearY();
	void* _BrMatrix34ShearZ();
	void* _BrMatrix34Inverse();
	void* _BrMatrix34LPInverse();
	void* _BrMatrix34LPNormalise();
	void* _BrMatrix34RollingBall();
	void* _BrBoundsToMatrix34();
	void* _BrMatrix34Copy4();
	void* BrMatrix34TApplyFV();
	void* _BrMatrix34Apply();
	void* _BrMatrix34ApplyP();
	void* _BrMatrix34ApplyV();
	void* _BrMatrix34TApply();
	void* _BrMatrix34TApplyP();
	void* _BrMatrix34TApplyV();
	void* _BrMatrix34Pre();
	void* _BrMatrix34Post();
	void* _BrMatrix34PreRotateX();
	void* _BrMatrix34PostRotateX();
	void* _BrMatrix34PreRotateY();
	void* _BrMatrix34PostRotateY();
	void* _BrMatrix34PreRotateZ();
	void* _BrMatrix34PostRotateZ();
	void* _BrMatrix34PreRotate();
	void* _BrMatrix34PostRotate();
	void* _BrMatrix34PreTranslate();
	void* _BrMatrix34PostTranslate();
	void* _BrMatrix34PreScale();
	void* _BrMatrix34PostScale();
	void* _BrMatrix34PreShearX();
	void* _BrMatrix34PostShearX();
	void* _BrMatrix34PreShearY();
	void* _BrMatrix34PostShearY();
	void* _BrMatrix34PreShearZ();
	void* _BrMatrix34PostShearZ();

};