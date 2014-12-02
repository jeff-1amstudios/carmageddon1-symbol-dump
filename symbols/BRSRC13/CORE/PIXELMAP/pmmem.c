/*******************************
* Module: pmmem
* Original path: C:/BRSRC13/CORE/PIXELMAP/pmmem.c
* Lines of code: 1302
********************************/

class pmmem {

	// Properties:
	void* _matchTemplateEntries;
	void* _devicePixelmapDispatch;
	void* _devicePixelmapTemplateEntries;
	void* _pmTypeInfo;
	void* _rscid;

	// Methods:
	void* DevicePixelmapMemAllocate();
	void* _CheckDispatch();
	void* __M_br_device_pixelmap_mem_allocateSub();
	void* __M_br_device_pixelmap_mem_free();
	void* __M_br_device_pixelmap_mem_identifier();
	void* __M_br_device_pixelmap_mem_type();
	void* __M_br_device_pixelmap_mem_isType();
	void* __M_br_device_pixelmap_mem_device();
	void* __M_br_device_pixelmap_mem_space();
	void* __M_br_device_pixelmap_mem_queryTemplate();
	void* __M_br_device_pixelmap_mem_validSource();
	void* __M_br_device_pixelmap_mem_resize();
	void* __M_br_device_pixelmap_mem_match();
	void* __M_br_device_pixelmap_mem_copyTo();
	void* __M_br_device_pixelmap_mem_copyFrom();
	void* __M_br_device_pixelmap_mem_fill();
	void* __M_br_device_pixelmap_mem_doubleBuffer();
	void* __M_br_device_pixelmap_mem_copyDirty();
	void* __M_br_device_pixelmap_mem_copyToDirty();
	void* __M_br_device_pixelmap_mem_copyFromDirty();
	void* __M_br_device_pixelmap_mem_fillDirty();
	void* __M_br_device_pixelmap_mem_doubleBufferDirty();
	void* __M_br_device_pixelmap_mem_rectangleCopyTo();
	void* __M_br_device_pixelmap_mem_rectangleCopyFrom();
	void* __M_br_device_pixelmap_mem_rectangleStretchCopyTo();
	void* __M_br_device_pixelmap_mem_rectangleStretchCopyFrom();
	void* __M_br_device_pixelmap_mem_rectangleFill();
	void* __M_br_device_pixelmap_mem_pixelSet();
	void* __M_br_device_pixelmap_mem_line();
	void* __M_br_device_pixelmap_mem_copyBits();
	void* __M_br_device_pixelmap_mem_pixelQuery();
	void* __M_br_device_pixelmap_mem_pixelAddressQuery();
	void* __M_br_device_pixelmap_mem_pixelAddressSet();
	void* __M_br_device_pixelmap_mem_originSet();
	void* __M_br_device_pixelmap_mem_rowSize();
	void* __M_br_device_pixelmap_mem_rowQuery();
	void* __M_br_device_pixelmap_mem_rowSet();
	void* __M_br_device_pixelmap_mem_flush();
	void* __M_br_device_pixelmap_mem_synchronise();
	void* __M_br_device_pixelmap_mem_directLock();
	void* __M_br_device_pixelmap_mem_directUnlock();

};