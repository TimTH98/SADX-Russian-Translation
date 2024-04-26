#include "stdafx.h"

#include "IniFile.hpp"
#include "ExtraSubs.h"
#include "GameCredits.h"
#include "LoadTextures.h"
#include "ModConfig.h"
#include "OtherModsText.h"
#include "VariousText.h"


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
		LoadNowSaving();
		
		if (ForceJapaneseVoice())
		{
			VoiceLanguage = Languages_Japanese;
		}			

		if (ExtraSubsEnabled())
		{
			DisplaySubtitleOnFrame();
		}
	}

	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}

