/*******************************
* Module: v1dbfile
* Original path: C:/BRSRC13/CORE/V1DB/v1dbfile.c
* Lines of code: 2151
********************************/

class v1dbfile {

	// Properties:
	void* _MaterialLoadEntries;
	void* _MaterialLoadTable;
	void* _ActorLoadTable;
	void* _br_camera_F;
	void* _camera_type_F;
	void* _ModelLoadTable;
	void* _br_camera_FM;
	void* _camera_type_FM;
	void* _br_light_F;
	void* _light_type_F;
	void* _light_type_FM;
	void* _br_light_FM;
	void* _br_plane_F;
	void* _br_bounds3_FM;
	void* _br_bounds3_F;
	void* _br_plane_FM;
	void* _TransformTypes;
	void* _br_transform_translation_F;
	void* _br_transform_translation_FM;
	void* _angle_order_F;
	void* _br_transform_euler_FM;
	void* _br_transform_look_up_F;
	void* _br_transform_look_up_FM;
	void* _br_transform_euler_F;
	void* _br_transform_quat_F;
	void* _br_transform_quat_FM;
	void* _angle_order_FM;
	void* _br_transform_matrix34_F;
	void* _br_transform_matrix34_FM;
	void* _render_style_FM;
	void* _actor_type_F;
	void* _br_actor_FM;
	void* _br_actor_F;
	void* _render_style_F;
	void* _actor_type_FM;
	void* _br_material_old_F;
	void* _br_material_FM;
	void* _br_material_F;
	void* _br_material_old_FM;
	void* _br_pivot_F;
	void* _br_pivot_FM;
	void* _br_old_model_1_F;
	void* _br_old_model_1_FM;
	void* _br_model_FM;
	void* _br_model_F;
	void* _br_old_face_FM;
	void* _br_old_face_F;
	void* _br_old_face_1_FM;
	void* _br_old_face_1_F;
	void* _br_face_FM;
	void* _br_face_F;
	void* _br_old_vertex_uv_FM;
	void* _br_vertex_uv_F;
	void* _br_old_vertex_uv_F;
	void* _br_vertex_uv_FM;
	void* _br_vertex_F;
	void* _br_vertex_FM;
	void* _ActorLoadEntries;
	void* _ModelLoadEntries;
	void* _MaterialMaps;
	void* _rscid;

	// Methods:
	void* FopWrite_VERTICES();
	void* FopRead_VERTICES();
	void* FopRead_OLD_VERTICES();
	void* FopWrite_VERTEX_UV();
	void* FopRead_VERTEX_UV();
	void* FopRead_OLD_VERTICES_UV();
	void* FopRead_MATERIAL_INDEX();
	void* FopWrite_MATERIAL_INDEX();
	void* FopRead_OLD_MATERIAL_INDEX();
	void* FopRead_FACES();
	void* FopWrite_FACES();
	void* FopRead_OLD_FACES_1();
	void* FopRead_OLD_FACES();
	void* FopWrite_FACE_MATERIAL();
	void* FopRead_FACE_MATERIAL();
	void* FopRead_MODEL();
	void* FopWrite_MODEL();
	void* FopRead_OLD_MODEL_1();
	void* FopRead_OLD_MODEL();
	void* FopRead_PIVOT();
	void* FopRead_MATERIAL_OLD();
	void* FopRead_MATERIAL();
	void* FopWrite_MATERIAL();
	void* FopRead_PIXELMAP_REF();
	void* FopWrite_PIXELMAP_REF();
	void* FopWrite_ACTOR();
	void* FopRead_ACTOR();
	void* FopWrite_ACTOR_MODEL();
	void* FopRead_ACTOR_MODEL();
	void* FopWrite_ACTOR_MATERIAL();
	void* FopRead_ACTOR_MATERIAL();
	void* FopWrite_ACTOR_TRANSFORM();
	void* FopRead_ACTOR_TRANSFORM();
	void* FopWrite_ACTOR_LIGHT();
	void* FopRead_ACTOR_LIGHT();
	void* FopWrite_ACTOR_CAMERA();
	void* FopRead_ACTOR_CAMERA();
	void* FopWrite_ACTOR_BOUNDS();
	void* FopRead_ACTOR_BOUNDS();
	void* FopWrite_ACTOR_CLIP_PLANE();
	void* FopRead_ACTOR_CLIP_PLANE();
	void* FopWrite_ACTOR_ADD_CHILD();
	void* FopRead_ACTOR_ADD_CHILD();
	void* FopWrite_TRANSFORM();
	void* FopRead_TRANSFORM();
	void* FopWrite_BOUNDS();
	void* FopRead_BOUNDS();
	void* FopWrite_PLANE();
	void* FopRead_PLANE();
	void* FopWrite_LIGHT();
	void* FopRead_LIGHT();
	void* FopWrite_CAMERA();
	void* FopRead_CAMERA();
	void* _BrModelLoadMany();
	void* _PtrCompare();
	void* _WriteModel();
	void* _BrModelSaveMany();
	void* _BrActorLoadMany();
	void* WriteActor();
	void* _BrActorSaveMany();
	void* _BrMaterialLoadMany();
	void* _WriteMaterial();
	void* _BrMaterialSaveMany();
	void* _BrModelLoad();
	void* _BrModelSave();
	void* _BrMaterialLoad();
	void* _BrMaterialSave();
	void* _BrActorLoad();
	void* _BrActorSave();
	void* _BrModelFileCount();
	void* _BrActorFileCount();
	void* _BrMaterialFileCount();

};