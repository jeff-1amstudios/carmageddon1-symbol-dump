/*******************************
* Module: modrend
* Original path: C:/BRSRC13/CORE/V1DB/modrend.c
* Lines of code: 231
********************************/

class modrend {

	// Properties:
	void* _bounds_colours;
	void* _bounds_vertices;
	void* _bounds_faces;
	void* _RenderStyleCalls;
	void* _bounds_prepared;
	void* _bounds_model;
	void* _bounds_face_groups;
	void* _rscid;

	// Methods:
	void* renderFaces();
	void* renderEdges();
	void* renderPoints();
	void* nullRender();
	void* makeMeshFromBounds();
	void* boundingBoxRenderPoints();
	void* boundingBoxRenderEdges();
	void* boundingBoxRenderFaces();

};