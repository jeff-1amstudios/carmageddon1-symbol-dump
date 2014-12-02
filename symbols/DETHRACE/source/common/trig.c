/*******************************
* Module: trig
* Original path: C:/DETHRACE/source/common/trig.c
* Lines of code: 791
********************************/

class trig {

	// Properties:
	void* _mat23tmp1;
	void* _mat23tmp2;
	void* _mattmp1;
	void* _mattmp2;
	void* _gFixed_sine_table;
	void* _gFloat_sine_table;

	// Methods:
	void* FastFloatSin();
	void* FastFloatCos();
	void* FastFloatTan();
	void* FastScalarSin();
	void* FastScalarCos();
	void* FastScalarTan();
	void* FastScalarSinAngle();
	void* FastScalarCosAngle();
	void* FastScalarTanAngle();
	void* FastFloatArcSin();
	void* FastFloatArcCos();
	void* FastScalarArcSin();
	void* FastScalarArcCos();
	void* FastFloatArcTan2();
	void* FastScalarArcTan2();
	void* FastFloatArcTan2Angle();
	void* FastScalarArcTan2Angle();
	void* DRMatrix34RotateX();
	void* DRMatrix34RotateY();
	void* DRMatrix34RotateZ();
	void* DRMatrix34Rotate();
	void* DRMatrix34PreRotateX();
	void* DRMatrix34PostRotateX();
	void* DRMatrix34PreRotateY();
	void* DRMatrix34PostRotateY();
	void* DRMatrix34PreRotateZ();
	void* DRMatrix34PostRotateZ();
	void* DRMatrix34PreRotate();
	void* DRMatrix34PostRotate();
	void* DRMatrix23Rotate();
	void* DRMatrix23PreRotate();
	void* DRMatrix23PostRotate();

};