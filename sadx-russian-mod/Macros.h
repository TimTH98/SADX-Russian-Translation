#pragma once

#define ReplaceTexPVR_Common(a) do { \
	_snprintf_s(pathbuf, LengthOfArray(pathbuf), "%s\\textures\\pvr_common\\index.txt", path); \
	helperFunctions.ReplaceFile("system\\" a ".PVR", pathbuf); \
} while (0)

#define ReplaceTexPVR_Mission(a) do { \
	_snprintf_s(pathbuf, LengthOfArray(pathbuf), "%s\\textures\\pvr_mission_fr\\index.txt", path); \
	helperFunctions.ReplaceFile("system\\" a ".PVR", pathbuf); \
} while (0)

#define ReplacePNG_GoalRing(a) do { \
	_snprintf_s(pathbuf, LengthOfArray(pathbuf), "%s\\textures\\pvr_mission_goalring\\index.txt", path); \
	helperFunctions.ReplaceFile("system\\" a ".PVR", pathbuf); \
} while (0)

#define ReplacePNG_StageE(a) do { \
	_snprintf_s(pathbuf, LengthOfArray(pathbuf), "%s\\textures\\pvr_stage_en\\index.txt", path); \
	helperFunctions.ReplaceFile("system\\" a ".PVR", pathbuf); \
} while (0)

#define ReplacePNG_StageJ(a) do { \
	_snprintf_s(pathbuf, LengthOfArray(pathbuf), "%s\\textures\\pvr_stage_jp\\index.txt", path); \
	helperFunctions.ReplaceFile("system\\" a ".PVR", pathbuf); \
} while (0)

#define ReplacePNG_Subtitle(a) do { \
	_snprintf_s(pathbuf, LengthOfArray(pathbuf), "%s\\textures\\subtitle\\index.txt", path); \
	helperFunctions.ReplaceFile("system\\" a ".PVR", pathbuf); \
} while (0)

#define ReplaceTexPVM_HD_Rus(a) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" a "_HD_RUS.PVM") \

#define ReplacePVM_Rus(a) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" a "_RUS.PVM") \

#define ReplaceTexPVM(a, b) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" b ".PVM") \

#define ReplaceTex(pvm, pvr, folder, pngname, gbix, x, y) helperFunctions.ReplaceTexture(pvm, pvr, (std::string(path) + "\\textures\\alt\\" folder "\\" pngname ".png").c_str(), gbix, x, y);
// ReplaceTex("AVA_MULTI", "multistg0600", "MultiThumbnails", "STP_Multi_TreeTops-S", 54926007, 128, 72);

// “ут есть потенциальный шиткод, надо разобратьс€
// Potential shitcode is here, should be come up with this