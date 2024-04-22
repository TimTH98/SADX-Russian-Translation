#pragma once


#define ReplacePVR(folder, file) do { \
	_snprintf_s(pathbuf, LengthOfArray(pathbuf), "%s\\textures\\" folder "\\index.txt", path); \
	helperFunctions.ReplaceFile("system\\" file ".pvr", pathbuf); \
} while (0)

#define ReplaceTexPVM_HD_Rus(a) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" a "_HD_RUS.PVM") \

#define ReplaceTexPVM(a, b) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" b ".PVM") \

#define ReplaceTexFMV(a, b) helperFunctions.ReplaceFile("system\\" a ".mpg", "system\\" b ".mpg") \

#define ReplaceTex(pvm, pvr, folder, pngname, gbix, x, y) helperFunctions.ReplaceTexture(pvm, pvr, (std::string(path) + "\\textures\\alt\\" folder "\\" pngname ".png").c_str(), gbix, x, y);