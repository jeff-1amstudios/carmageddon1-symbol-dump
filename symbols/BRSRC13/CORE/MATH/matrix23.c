/*******************************
* Module: matrix23
* Original path: C:/BRSRC13/CORE/MATH/matrix23.c
* Lines of code: 405
********************************/

class matrix23 {

	// Properties:
	void* _mattmp1;
	void* _mattmp2;
	void* _rscid;

	// Methods:
	void* _BrMatrix23Copy();
	void* _BrMatrix23Mul();
	void* _BrMatrix23Identity();
	void* _BrMatrix23Rotate();
	void* _BrMatrix23Translate();
	void* _BrMatrix23Scale();
	void* _BrMatrix23ShearX();
	void* _BrMatrix23ShearY();
	void* _BrMatrix23Inverse();
	void* _BrMatrix23LPInverse();
	void* _BrMatrix23LPNormalise();
	void* _BrMatrix23ApplyP();
	void* _BrMatrix23ApplyV();
	void* _BrMatrix23TApplyP();
	void* _BrMatrix23TApplyV();
	void* _BrMatrix23Pre();
	void* _BrMatrix23Post();
	void* _BrMatrix23PreRotate();
	void* _BrMatrix23PostRotate();
	void* _BrMatrix23PreTranslate();
	void* _BrMatrix23PostTranslate();
	void* _BrMatrix23PreScale();
	void* _BrMatrix23PostScale();
	void* _BrMatrix23PreShearX();
	void* _BrMatrix23PostShearX();
	void* _BrMatrix23PreShearY();
	void* _BrMatrix23PostShearY();

};