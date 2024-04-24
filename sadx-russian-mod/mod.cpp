#include "stdafx.h"

#include "IniFile.hpp"
#include "ExtraSubs.h"
#include "GameCredits.h"
#include "LoadTextures.h"
#include "ModConfig.h"
#include "OtherModsText.h"
#include "VariousText.h"

DataArray(char, NowSavingString, 0x007DCBF4, 13);

extern "C"
{
	__declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
	{						
		InitConfig(path, helperFunctions);
		LoadText();
		WriteTextForOtherMods(helperFunctions);
		LoadTextures(path, helperFunctions);		
	}
	
	__declspec(dllexport) void OnFrame()
	{
		TextLanguage = Languages_French;
		LoadCredits();
		
		if (ForceJapaneseVoice())
		{
			VoiceLanguage = Languages_Japanese;
		}			

		if (ExtraSubsEnabled())
		{
			DisplaySubtitleOnFrame();
		}	

		WriteData((char*)NowSavingString, "COXPAHEHO");
	}

	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}

