#include "stdafx.h"

#include "IniFile.hpp"
#include "CustomSubTimings.h"
#include "ExtraSubs.h"
#include "LoadTextures.h"

#include <fstream>


/* Warning messages */

void DisplayMessage(std::wstring message)
{
	MessageBox(NULL, message.c_str(), L"Предупреждение", MB_OK | MB_ICONWARNING | MB_DEFBUTTON2);
}

std::wstring JPVoiceMessage = L"Мод принудительно включает японскую озвучку.\n\nЭто сделано из-за того, что между\nяпонской и английской версией озвучки игры\nесть значительные расхождения в некоторых катсценах\n(другую реплику произносит другой персонаж).\n\nВы можете отключить эту функцию в настройках\nк моду с переводом.\nПри следующем запуске это сообщение не появится.";
std::wstring CutsceneEditingModsMessage = L"У вас включён один из модов, изменяющих катсцены:\n\n– Tweaked Cutscenes;\n– Cream the Rabbit in SA1 Dreamcast Style;\n– Rouge the Bat in SA1 Dreamcast Style.\n\nВо избежание конфликтов с этими модами\nопция \"Изменённые тайминги субтитров\"\nне будет применена.";


/* Config reading */

bool DreamcastConversionEnabled() { return GetModuleHandle(L"DCMods_Main") != nullptr; };
HMODULE TweakedCutscenes = GetModuleHandle(L"SADX-cutscene-decompilation");
HMODULE Cream = GetModuleHandle(L"CreamtheRabbit(SA1-Style)");
HMODULE Rouge = GetModuleHandle(L"Rouge-the-Bat-(SA1-Style)");

std::string TGS_Selectors;
std::string DreamcastChaoIcon;
std::string StartButton;
bool AltGGHelp;
std::string StageBorder;
bool EditedCutsceneTimings;
std::string AltSonicTeamLogo;
std::string BossFontStyle;
std::string GetBossTitlesStyle() { return BossFontStyle; }

bool ForceJPVoice;
bool ExtraSubtitles;
bool DisableMenuExtraSubs;
bool ForceJapaneseVoice() { return ForceJPVoice; }
bool ExtraSubsEnabled() { return ExtraSubtitles; }
bool MenuExtraSubsDisabled() { return DisableMenuExtraSubs; }


void ReadConfig(const char* path)
{
	const IniFile* config = new IniFile(std::string(path) + "\\config.ini");

	TGS_Selectors = config->getString("DisplaySettings", "TGS_Selectors", "Vanilla");
	StartButton = config->getString("DisplaySettings", "StartButton", "Start");
	StageBorder = config->getString("DisplaySettings", "StageBorder", "US");
	BossFontStyle = config->getString("DisplaySettings", "BossFontStyle", "HD GUI");

	EditedCutsceneTimings = config->getBool("SubsAndVoices", "EditedTimings", true);
	ForceJPVoice = config->getBool("SubsAndVoices", "ForcedJapVoices", true);

	ExtraSubtitles = config->getBool("ExtraSubtitles", "EnableExtraSubs", true);
	DisableMenuExtraSubs = config->getBool("ExtraSubtitles", "DisableMenuExtraSubs", false);

	DreamcastChaoIcon = config->getString("Extra", "DreamcastChaoIcon", "DX");
	AltGGHelp = config->getBool("Extra", "ExtraGGHelp", false);
	AltSonicTeamLogo = config->getString("Extra", "ExtraSonicTeamLogo", "Disable");

	delete config;
}


/* Doing things according to config parameters */

void LoadTGSSelectors(const HelperFunctions& helperFunctions)
{
	if (TGS_Selectors == "TGS")
	{
		ReplaceTexPVM("B_CHNAM_E", "B_CHNAM_E_TGS");
		ReplaceTexPVM("AVA_METAL_SONIC", "AVA_METAL_SONIC_TGS");
	}
	else if (TGS_Selectors == "Vanilla")
	{
		ReplaceTexPVM("B_CHNAM_E", "B_CHNAM_E_HD");
		ReplaceTexPVM("AVA_METAL_SONIC", "AVA_METAL_SONIC_DX");
	}
}

void ReplaceStartButtonWithEnter(const char* path, const HelperFunctions& helperFunctions)
{
	if (DreamcastConversionEnabled())
	{
		ReplaceTex("PRESSSTART", "hyoji_pressstart", "config\\startButton\\demo", "enter_dc", 5000900, 256, 32);
	}
	else 
	{
		ReplaceTex("PRESSSTART", "hyoji_pressstart", "config\\startButton\\demo", "enter", 5000900, 256, 32);
	} 

	ReplaceTex("AVA_GTITLE0_E", "p_enter_us_00", "config\\startButton\\titlescreen", "enter_00", 3489661283, 256, 256);
	ReplaceTex("AVA_GTITLE0_E", "p_enter_us_01", "config\\startButton\\titlescreen", "enter_01", 3489661284, 256, 256);
	ReplaceTex("AVA_GTITLE0_E", "p_enter_us_02", "config\\startButton\\titlescreen", "enter_02", 3489661285, 256, 256);
	ReplaceTex("AVA_GTITLE0_DC_HD", "pressstart", "config\\startButton\\titlescreen", "pressenter", 3489661269, 256, 32);
}

void LoadStageBorders(const char* path, const HelperFunctions& helperFunctions)
{
	if (StageBorder == "US")
	{
		LoadUSStageBorders(path, helperFunctions);
	}
	else
	{
		LoadJPStageBorders(path, helperFunctions);
	}
}

void LoadDreamcastChaoIcon(const char* path, const HelperFunctions& helperFunctions)
{
	ReplaceTex("CHAO_OBJECT", "al_ws10", "config\\chaoPortalsIcons", "eggCarrier_dc", 504562, 128, 128);
	ReplaceTex("CHAO_OBJECT", "al_ws11", "config\\chaoPortalsIcons", "mysticRuins_dc", 504564, 128, 128);
	ReplaceTex("CHAO_OBJECT", "al_ws12", "config\\chaoPortalsIcons", "stationSquare_dc", 504566, 128, 128);

	ReplaceTex("AL_DX_OBJ_CMN", "al_ws10", "config\\chaoPortalsIcons", "eggCarrier_dc", 1100078, 128, 128);
	ReplaceTex("AL_DX_OBJ_CMN", "al_ws11", "config\\chaoPortalsIcons", "mysticRuins_dc", 1100079, 128, 128);
	ReplaceTex("AL_DX_OBJ_CMN", "al_ws12", "config\\chaoPortalsIcons", "stationSquare_dc", 1100080, 128, 128);
}

void InitCustomCutsceneTimings(const char* path, const HelperFunctions& helperFunctions)
{
	std::wstring modpath(path, path + strlen(path));
	std::wstring editedTimings = L"\\edited_timings.ini";	

	if (EditedCutsceneTimings)
	{
		if (TweakedCutscenes || Cream || Rouge)
		{
			DisplayMessage(CutsceneEditingModsMessage);
		}
		else
		{
			helperFunctions.LoadEXEData((modpath + editedTimings).c_str(), modpath.c_str());
			SetCustomCutsceneTimings(path, helperFunctions);
		}
	}
}

void InitJPVoiceFlag(const char* path)
{
	// Обработка форса происходит в основном файле мода (mod.cpp), в файле конфига обрабатывается 
	// только вывод сообщения и обработка флаг-файла

	std::string flagPath = "\\jap-voice-flag";

	if (!ForceJapaneseVoice())	// Если опция форса выключена (то есть не форсируется яп)
		remove((path + flagPath).c_str());	// Удалить нахер флаг
	else
	{
		std::ifstream flagFile(path + flagPath);

		// При отсутствии флаг-файла 
		if (!flagFile)
		{
			DisplayMessage(JPVoiceMessage);
			std::ofstream flagFileOut(path + flagPath);	// Создать флаг-файл
			flagFileOut.close();
		}
	}
}

void LoadAlternateGGHints(const char* path, const HelperFunctions& helperFunctions)
{
	ReplaceTex("GG_TEXLIST_FR", "y256_s_dm_a", "config\\GGTips", "alt_tips_0", 1315900, 256, 256);
	ReplaceTex("GG_TEXLIST_FR", "y256_s_dm_b", "config\\GGTips", "alt_tips_1", 1316000, 256, 256);
	ReplaceTex("GG_TEXLIST_FR", "y256_s_s1_a", "config\\GGTips", "alt_tips_0", 1315300, 256, 256);
	ReplaceTex("GG_TEXLIST_FR", "y256_s_s1_b", "config\\GGTips", "alt_tips_1", 1315400, 256, 256);
	ReplaceTex("GG_TEXLIST_FR", "y256_s_s2_a", "config\\GGTips", "alt_tips_0", 1315500, 256, 256);
	ReplaceTex("GG_TEXLIST_FR", "y256_s_s2_b", "config\\GGTips", "alt_tips_1", 1315600, 256, 256);
	ReplaceTex("GG_TEXLIST_FR", "y256_s_sb_a", "config\\GGTips", "alt_tips_0", 1317300, 256, 256);
	ReplaceTex("GG_TEXLIST_FR", "y256_s_sb_b", "config\\GGTips", "alt_tips_1", 1317400, 256, 256);
	ReplaceTex("GG_TEXLIST_FR", "y256_s_sd1_a", "config\\GGTips", "alt_tips_0", 1316100, 256, 256);
	ReplaceTex("GG_TEXLIST_FR", "y256_s_sd1_b", "config\\GGTips", "alt_tips_1", 1316200, 256, 256);
	ReplaceTex("GG_TEXLIST_FR", "y256_s_sd2_a", "config\\GGTips", "alt_tips_0", 1316700, 256, 256);
	ReplaceTex("GG_TEXLIST_FR", "y256_s_sd2_b", "config\\GGTips", "alt_tips_1", 1316800, 256, 256);
	ReplaceTex("GG_TEXLIST_FR", "y256_s_sl_a", "config\\GGTips", "alt_tips_0", 1317100, 256, 256);
	ReplaceTex("GG_TEXLIST_FR", "y256_s_sl_b", "config\\GGTips", "alt_tips_1", 1317200, 256, 256);
	ReplaceTex("GG_TEXLIST_FR", "y256_s_ss_a", "config\\GGTips", "alt_tips_0", 1316300, 256, 256);
	ReplaceTex("GG_TEXLIST_FR", "y256_s_ss_b", "config\\GGTips", "alt_tips_1", 1316400, 256, 256);
	ReplaceTex("GG_TEXLIST_FR", "y256_s_st1_a", "config\\GGTips", "alt_tips_0", 1315700, 256, 256);
	ReplaceTex("GG_TEXLIST_FR", "y256_s_st1_b", "config\\GGTips", "alt_tips_1", 1315800, 256, 256);
	ReplaceTex("GG_TEXLIST_FR", "y256_s_st2_a", "config\\GGTips", "alt_tips_0", 1316500, 256, 256);
	ReplaceTex("GG_TEXLIST_FR", "y256_s_st2_b", "config\\GGTips", "alt_tips_1", 1316600, 256, 256);
	ReplaceTex("GG_TEXLIST_FR", "y256_s_ta_a", "config\\GGTips", "alt_tips_0", 1316900, 256, 256);
	ReplaceTex("GG_TEXLIST_FR", "y256_s_ta_b", "config\\GGTips", "alt_tips_1", 1317000, 256, 256);
	ReplaceTex("GG_TEXLIST_FR", "y256_s_ts_a", "config\\GGTips", "alt_tips_0", 1317500, 256, 256);
	ReplaceTex("GG_TEXLIST_FR", "y256_s_ts_b", "config\\GGTips", "alt_tips_1", 1317600, 256, 256);
}

void LoadAlternateSonicTeamFMV(const HelperFunctions& helperFunctions)
{
	if (AltSonicTeamLogo == "Black")
	{
		ReplaceTexFMV("SONICTEAM", "SONICTEAM_Black");
	}		
	else if (AltSonicTeamLogo == "White")
	{
		ReplaceTexFMV("SONICTEAM", "SONICTEAM_White");
	}		
}


void InitConfig(const char* path, const HelperFunctions& helperFunctions)
{
	ReadConfig(path);
	
	LoadTGSSelectors(helperFunctions);
	LoadStageBorders(path, helperFunctions);

	if (StartButton == "Enter")
	{
		ReplaceStartButtonWithEnter(path, helperFunctions);
	}

	if (DreamcastChaoIcon == "DC")
	{
		LoadDreamcastChaoIcon(path, helperFunctions);
	}

	InitCustomCutsceneTimings(path, helperFunctions);
	InitJPVoiceFlag(path);

	// Alternative GG Game help
	ReplaceTexPVM_HD_Rus("GG_TEXLIST_FR");
	if (AltGGHelp)
	{
		LoadAlternateGGHints(path, helperFunctions);
	}

	if (AltSonicTeamLogo != "Disable")
	{
		LoadAlternateSonicTeamFMV(helperFunctions);
	}

	if (ExtraSubtitles)
	{
		InitExtraSubs();
	}
}