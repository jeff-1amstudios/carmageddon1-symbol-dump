/*******************************
* Module: graphics
* Original path: C:/DETHRACE/source/common/graphics.c
* Lines of code: 4072
********************************/

class graphics {

	// Properties:
	void* _gArrows;
	void* _gMap_colours;
	void* _gShadow_points;
	void* _gConcussion;
	void* _gShadow_clip_planes;
	void* _gSheer_mat;
	void* _gLollipops;
	void* _gWobble_array;
	void* _gIdentity34;
	void* _gSaved_shade_tables;
	void* _gCursor_giblet_sequences;
	void* _gCursor_y_offsets;
	void* _gCursor_x_offsets;
	void* _gCursor_giblets;
	void* _gCursor_gib_x_offsets;
	void* _gCursor_gib_y_offsets;
	void* _gTransient_bitmaps;
	void* _gCosine_array;
	void* _gCursors;
	void* _gCursor_giblet_images;
	void* _gShadow_hither_min_move;
	void* _gEval_1;
	void* _gEval_2;
	void* _gShadow_light_z;
	void* _gShadow_light_x;
	void* _gShadow_dim_amount;
	void* _gRGB_colours;
	void* _gNumber_of_lollipops;
	void* _gShadow_light_ray;
	void* _gShadow_hither_z_move;
	void* _gFancy_shadow;
	void* _gShadow_level;
	void* _gShadow_model;
	void* _gShadow_actor;
	void* _gShadow_clip_plane_count;
	void* _gPalette_conversion_table;
	void* _gShadow_material;
	void* _gSaved_table_count;
	void* _gCursor_giblet_sequence3;
	void* _gCursor_giblet_sequence2;
	void* _gFont_names;
	void* _gCurrent_cursor_index;
	void* _gCursor_giblet_sequence1;
	void* _gCursor_giblet_sequence0;
	void* _gPalette_index;
	void* _gCursor_transient_index;
	void* _gScratch_pixels;
	void* _gScratch_palette;
	void* _gPalette_munged;
	void* _gLast_palette_change;
	void* _gColourValues;
	void* _gOrig_render_palette;
	void* _gNext_transient;
	void* _gCurrent_palette;
	void* _gRender_palette;
	void* _gCurrent_splash;
	void* _gCurrent_conversion_table;
	void* _gCamera_to_horiz_angle;
	void* _gColours;
	void* _gFlic_palette;
	void* _gFonts;
	void* _gCurrent_palette_pixels;
	void* _gAR_fudge_headups;
	void* _gMap_render_x;
	void* _gMap_render_y;
	void* _gFaded_palette;
	void* _gWidth;
	void* _gMap_render_height_i;
	void* _gScreen_wobble_x;
	void* _gScreen_wobble_y;
	void* _gCurrent_ambience;
	void* _gY_offset;
	void* _gMap_render_width;
	void* _gMap_render_height;
	void* _gMap_render_width_i;
	void* _gMouse_started;
	void* _gMouse_in_use;
	void* _gHeight;
	void* _gMouse_last_y_coord;
	void* _gMouse_last_x_coord;
	void* _gAmbient_adjustment;
	void* _gMap_render_x_i;
	void* _gX_offset;
	void* _gMap_render_y_i;
	void* _gMirror_on;
	void* _gYon_squared;

	// Methods:
	void* TurnOnPaletteConversion();
	void* TurnOffPaletteConversion();
	void* ResetLollipopQueue();
	void* AddToLollipopQueue();
	void* RenderLollipops();
	void* DRDrawLine();
	void* DrawDigitAt();
	void* DrawNumberAt();
	void* BuildColourTable();
	void* ClearConcussion();
	void* SkipLines();
	void* CopyWords();
	void* Copy8BitStripImageTo16Bit();
	void* CopyStripImage();
	void* SetBRenderScreenAndBuffers();
	void* SetIntegerMapRenders();
	void* AdjustRenderScreenSize();
	void* ScreenSmaller();
	void* ScreenLarger();
	void* DRSetPaletteEntries();
	void* DRSetPalette3();
	void* DRSetPalette2();
	void* DRSetPalette();
	void* InitializePalettes();
	void* SwitchToPalette();
	void* ClearEntireScreen();
	void* ClearWobbles();
	void* InitWobbleStuff();
	void* NewScreenWobble();
	void* SetScreenWobble();
	void* ResetScreenWobble();
	void* CalculateWobblitude();
	void* CalculateConcussion();
	void* SufferFromConcussion();
	void* ProcessNonTrackActors();
	void* OppositeColour();
	void* DrawMapBlip();
	void* DrawMapSmallBlip();
	void* MungeClipPlane();
	void* TryThisEdge();
	void* DistanceFromPlane();
	void* DisableLights();
	void* EnableLights();
	void* ProcessShadow();
	void* RenderShadows();
	void* FlashyMapCheckpoint();
	void* ConditionallyFillWithSky();
	void* RenderAFrame();
	void* InitPaletteAnimate();
	void* RevertPalette();
	void* MungePalette();
	void* ResetPalette();
	void* Darken();
	void* SetFadedPalette();
	void* FadePaletteDown();
	void* FadePaletteUp();
	void* KillSplashScreen();
	void* EnsureRenderPalette();
	void* SplashScreenWith();
	void* EnsurePaletteUp();
	void* _AmbientificateMaterial();
	void* ChangeAmbience();
	void* InitAmbience();
	void* DRPixelmapRectangleMaskedCopy();
	void* DRMaskedStamp();
	void* DRPixelmapRectangleOnscreenCopy();
	void* DRPixelmapRectangleShearedCopy();
	void* DRPixelmapRectangleVScaledCopy();
	void* InitTransientBitmaps();
	void* AllocateTransientBitmap();
	void* DeallocateTransientBitmap();
	void* DeallocateAllTransientBitmaps();
	void* RemoveTransientBitmaps();
	void* SaveTransient();
	void* DrawCursorGiblet();
	void* ProcessCursorGiblets();
	void* NewCursorGiblet();
	void* DoMouseCursor();
	void* AllocateCursorTransient();
	void* StartMouseCursor();
	void* EndMouseCursor();
	void* LoadFont();
	void* DisposeFont();
	void* InitDRFonts();
	void* DrawDropImage();
	void* DropInImageFromTop();
	void* DropOutImageThruBottom();
	void* DropInImageFromBottom();
	void* DropOutImageThruTop();
	void* DrawTellyLine();
	void* DrawTellyImage();
	void* TellyInImage();
	void* TellyOutImage();
	void* SetShadowLevel();
	void* GetShadowLevel();
	void* ToggleShadow();
	void* InitShadow();
	void* _SaveShadeTable();
	void* SaveShadeTables();
	void* DisposeSavedShadeTables();
	void* ShadowMode();
	void* SwitchToRealResolution();
	void* SwitchToLoresMode();
	void* DRPixelmapDoubledCopy();

};