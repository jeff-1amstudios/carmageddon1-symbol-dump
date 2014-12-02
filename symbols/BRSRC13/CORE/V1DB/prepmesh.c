/*******************************
* Module: prepmesh
* Original path: C:/BRSRC13/CORE/V1DB/prepmesh.c
* Lines of code: 1031
********************************/

class prepmesh {

	// Properties:
	void* _compareModel;
	void* _pm_edge_scratch;
	void* _pm_edge_hash;
	void* _num_edges;
	void* _pm_edge_table;
	void* _rscid;

	// Methods:
	void* addEdge();
	void* prepareEdges();
	void* BrPrepareEdges();
	void* _FacesCompare();
	void* _TVCompare_XYZ();
	void* _TVCompare_MXYZUVN();
	void* _TVCompare_MVN();
	void* BrScalarToFractionClamp();
	void* PrepareFaceNormals();
	void* Smoothing();
	void* SmoothingCreased();
	void* CopyVertex();
	void* CopyFace();
	void* PrepareGroups();
	void* PrepareBoundingRadius();
	void* PrepareBoundingBox();
	void* RegenerateFaceNormals();
	void* RegenerateVertexNormals();
	void* _BrModelUpdate();
	void* BrModelClear();

};