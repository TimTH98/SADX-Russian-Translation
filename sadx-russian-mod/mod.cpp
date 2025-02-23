#include "stdafx.h"

#include "IniFile.hpp"
#include "ExtraSubs.h"
#include "GameCredits.h"
#include "LanguageSetting.h"
#include "LoadedMods.h"
#include "LoadTextures.h"
#include "ModConfig.h"
#include "OtherModsText.h"
#include "VariousText.h"


extern "C"
{
	__declspec(dllexport) void Init(const char *path, const HelperFunctions &helperFunctions)
	{						
		LoadedMods::Check();
		Config::Init(path, helperFunctions);
		InitLanguageSetting();
		LoadText();
		WriteTextForOtherMods(helperFunctions);
		LoadTextures(path, helperFunctions);
	}

	__declspec(dllexport) void OnFrame()
	{
		SetFrenchTextAtLaunch(); // Потому что некоторые вещи, судя по всему, делаются после Init (в OnFrame, но один раз), и именно это делает, например, дримкаст-конверсия
		LoadCredits();
		LoadNowSaving();

		if (Config::EnableExtraSubtitles)
		{
			DisplaySubtitleOnFrame();
		}
	}

	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}

