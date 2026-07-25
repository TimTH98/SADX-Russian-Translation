#include "stdafx.h"
#include "ModConfig.h"
#include "LoadedMods.h"
#include "CustomSubTimings.h"
#include "ExtraSubs.h"
#include "LoadTextures.h"
#include "IniFile.hpp"
#include <fstream>
#include "..\Other Mods\TweakedCutscenesConfig.h"
#include "..\Other Mods\DreamcastConversionConfig.h"


// Warning messages

void DisplayMessage(std::wstring message)
{
	MessageBox(NULL, message.c_str(), L"Предупреждение", MB_OK | MB_ICONWARNING | MB_DEFBUTTON2);
}

std::wstring CutsceneEditingModsMessage =
	L"У вас включён один из модов, изменяющих катсцены:\n\n"
	L"– Cream the Rabbit in SA1 Dreamcast Style;\n"
	L"– Rouge the Bat in SA1 Dreamcast Style.\n\n"
	L"Во избежание конфликтов с этими модами\n"
	L"опция \"Изменённые тайминги субтитров\"\n"
	L"не будет применена.";


// Config reading

std::string Config::TGS_Selectors;
std::string Config::StageTitlesStyle;
std::string Config::BossTitlesStyle;

bool Config::EditedCutsceneTimings;
bool Config::ForceJPVoice;

bool Config::EnableExtraSubtitles;
bool Config::DisableMenuExtraSubs;
bool Config::DisplaySESubtitles;

std::string Config::DreamcastChaoIcon;
std::string Config::AltSonicTeamLogo;
bool Config::AltGGHelp;
bool Config::EnableObjTextures;


void Config::Read(const char* path)
{
	const IniFile* config = new IniFile(std::string(path) + "\\config.ini");

	TGS_Selectors = config->getString("DisplaySettings", "TGS_Selectors", "Vanilla");
	StageTitlesStyle = config->getString("DisplaySettings", "StageBorder", "JP");
	BossTitlesStyle = config->getString("DisplaySettings", "BossFontStyle", "Vanilla");

	EditedCutsceneTimings = config->getBool("SubsAndVoices", "EditedTimings", true);
	ForceJPVoice = config->getBool("SubsAndVoices", "ForcedJapVoices", true);

	EnableExtraSubtitles = config->getBool("ExtraSubtitles", "EnableExtraSubs", true);
	DisableMenuExtraSubs = config->getBool("ExtraSubtitles", "DisableMenuExtraSubs", false);
	DisplaySESubtitles = config->getBool("ExtraSubtitles", "DisplaySESubtitles", false);

	DreamcastChaoIcon = config->getString("Extra", "DreamcastChaoIcon", "DX");	
	AltSonicTeamLogo = config->getString("Extra", "ExtraSonicTeamLogo", "Disable");
	AltGGHelp = config->getBool("Extra", "ExtraGGHelp", false);
	EnableObjTextures = config->getBool("Extra", "EnableObjTextures", false);

	delete config;
}

void InitCustomCutsceneTimings(const char* path, const HelperFunctions& helperFunctions)
{
	std::wstring modpath(path, path + strlen(path));
	std::wstring editedTimings = L"\\edited_timings.ini";	

	if (Config::EditedCutsceneTimings)
	{
		helperFunctions.LoadEXEData((modpath + editedTimings).c_str(), modpath.c_str());
		if (LoadedMods::Cream || LoadedMods::Rouge)
		{
			DisplayMessage(CutsceneEditingModsMessage);
		}			
		else 
		{
			TweakedCutscenesConfig::Read(helperFunctions);
			DreamcastConversionConfig::Read(helperFunctions);
			SetCustomCutsceneTimings(path, helperFunctions);
		}				
	}
}

void LoadAlternateSonicTeamFMV(const HelperFunctions& helperFunctions)
{
	if (Config::AltSonicTeamLogo == "Black")
	{
		ReplaceFMV("SONICTEAM", "SONICTEAM_Black");
	}		
	else if (Config::AltSonicTeamLogo == "White")
	{
		ReplaceFMV("SONICTEAM", "SONICTEAM_White");
	}		
}


void Config::Init(const char* path, const HelperFunctions& helperFunctions)
{
	Read(path);
	
	InitCustomCutsceneTimings(path, helperFunctions);

	if (AltSonicTeamLogo != "Disable")
	{
		LoadAlternateSonicTeamFMV(helperFunctions);
	}

	if (EnableExtraSubtitles)
	{
		InitExtraSubs();
	}
}