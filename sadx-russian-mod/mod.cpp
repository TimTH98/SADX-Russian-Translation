#include "stdafx.h"
#include <SADXModLoader.h>
#include <IniFile.hpp>

#include "ExtraSubs.h"
#include "GameCredits.h"
#include "LoadTextures.h"
#include "ModConfig.h"
#include "OtherMods.h"
#include "VariousText.h"


extern "C"
{
	__declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
	{						
		DCChaoGarden();
		LoadText();
		BossNames();
		BossHelps();
		MissionText();
		GG_Games();

		OverwriteBetaRestoresText(helperFunctions);
		ReplaceMultiplayerText(helperFunctions);
		ReplaceSuperSonicHint();

		LoadTextures(path, helperFunctions);		
		SetConfigFile(path, helperFunctions);		
	} 
	
	__declspec(dllexport) void OnFrame()
	{
		TextLanguage = Languages_French;
		LoadCredits();
		
		if (GetJPVoiceSetting())
		{
			VoiceLanguage = 0;
		}			

		if (ExtraSubsEnabled())
		{
			DisplaySubtitleOnFrame();
		}		
	}

	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}

