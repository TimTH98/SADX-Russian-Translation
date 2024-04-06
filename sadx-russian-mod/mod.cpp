#include "stdafx.h"
#include <SADXModLoader.h>
#include <IniFile.hpp>

#include "BetaRestores.h"
#include "ExtraSubs.h"
#include "GameCredits.h"
#include "VariousText.h"
#include "LoadTextures.h"
#include "ModConfig.h"


bool CreditsLoaded = false;
HMODULE DConv = GetModuleHandle(L"DCMods_Main");			// Init Dreamcast Conversion

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

		LoadTextures(path, helperFunctions);
		ReplaceMultiplayerText(helperFunctions);
		ReplaceSuperSonicHint();
		SetConfigFile(path, helperFunctions);

		OverwriteBetaRestoresText(helperFunctions);		
	} 
	
	__declspec(dllexport) void OnFrame()
	{
		if (!CreditsLoaded)
		{
			if (DConv)
			{
				LoadSADCCredits();
			}				
			else
			{
				LoadSADXCredits();
			}
			CreditsLoaded = true;
		}

		TextLanguage = 2;
		
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

