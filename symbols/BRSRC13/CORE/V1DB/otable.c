/*******************************
* Module: otable
* Original path: C:/BRSRC13/CORE/V1DB/otable.c
* Lines of code: 427
********************************/

class otable {

	// Properties:
	void* _rscid;

	// Methods:
	void* _BrZsOrderTableAllocate();
	void* _BrZsOrderTableFree();
	void* _BrZsActorOrderTableSet();
	void* _BrZsActorOrderTableGet();
	void* _BrZsOrderTableClear();
	void* _BrZsOrderTablePrimitiveInsert();
	void* _BrZsPrimitiveBucketSelect();
	void* _BrZsOrderTablePrimaryEnable();
	void* _BrZsOrderTablePrimaryDisable();
	void* InsertOrderTableList();
	void* SetOrderTableBounds();
	void* SetOrderTableRange();
	void* RenderOrderTableList();
	void* RenderPrimaryOrderTable();

};