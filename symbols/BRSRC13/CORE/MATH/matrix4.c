/*******************************
* Module: matrix4
* Original path: C:/BRSRC13/CORE/MATH/matrix4.c
* Lines of code: 422
********************************/

class matrix4 {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrMatrix4Copy();
	void* _BrMatrix4Mul();
	void* _BrMatrix4Identity();
	void* _BrMatrix4Scale();
	void* _BrMatrix4Inverse();
	void* Determinant3();
	void* _BrMatrix4Determinant();
	void* _BrMatrix4Adjoint();
	void* _BrMatrix4Perspective();
	void* _BrMatrix4Apply();
	void* _BrMatrix4ApplyP();
	void* _BrMatrix4ApplyV();
	void* _BrMatrix4TApply();
	void* _BrMatrix4TApplyP();
	void* _BrMatrix4TApplyV();
	void* _BrMatrix4Copy34();
	void* _BrMatrix4Mul34();
	void* _BrMatrix4Pre34();
	void* _BrMatrix4ShearZ();

};