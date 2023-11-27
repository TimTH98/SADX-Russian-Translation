#include "stdafx.h"
#include <SADXModLoader.h>
#include <IniFile.hpp>

#include "SA1Staff.h"
#include "VariousText.h"
#include "LoadTextures.h"
#include "ModConfig.h"

bool CreditsLoaded = false;

extern "C"
{
	__declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
	{						
		SetConfigFile(path, helperFunctions);
		DCChaoGarden();
		LoadText();
		BossNames();
		BossHelps();
		MissionText();
		GG_Games();
		LoadTextures(path, helperFunctions);
		LoadExtraText(helperFunctions);
	} 
	
	__declspec(dllexport) void OnFrame()
	{
		if (!CreditsLoaded)
		{
			LoadSA1Staff();
			CreditsLoaded = true;
		}

		TextLanguage = 2;
		//VoiceLanguage = 0;
	}

	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}

