#include "stdafx.h"
#include "SADXModLoader.h"
#include <IniFile.hpp>
#include "Macros.h"

#include "CustomSubTimings.h"

#include <fstream>

void DisplayMessage(std::wstring message)
{
	int returnValue = MessageBox(NULL, message.c_str(), L"Предупреждение", MB_OK | MB_ICONWARNING | MB_DEFBUTTON2);
}

std::wstring message0 = L"Мод принудительно включает японскую озвучку.\n\nЭто сделано из-за того, что между\nяпонской и английской версией озвучки игры\nесть значительные расхождения в некоторых катсценах\n(другую реплику произносит другой персонаж).\n\nВы можете отключить эту функцию в настройках\nк моду с переводом.\nПри следующем запуске это сообщение не появится.";
std::wstring message1 = L"У вас включён один из модов, изменяющих катсцены:\n\n– Tweaked Cutscenes;\n– Cream the Rabbit in SA1 Dreamcast Style;\n– Rouge the Bat in SA1 Dreamcast Style.\n\nВо избежание конфликтов с этими модами\nопция \"Изменённые тайминги субтитров\"\nне будет применена.";

bool ForcedJapVoices;
bool GetJPVoiceSetting() { return ForcedJapVoices; }

void SetConfigFile(const char* path, const HelperFunctions& helperFunctions)
{
	std::string TGS_Selectors;
	std::string DreamcastChaoIcon;
	std::string StartButton;
	bool ExtraGGHelp;
	std::string StageBorder;
	bool EditedTimings;
	std::string ExtraSonicTeamLogo;

	char pathbuf[MAX_PATH];

	HMODULE DConv = GetModuleHandle(L"DCMods_Main");			// Init Dreamcast Conversion dll	

	HMODULE TweakedCutscenes = GetModuleHandle(L"SADX-cutscene-decompilation");
	HMODULE Cream = GetModuleHandle(L"CreamtheRabbit(SA1-Style)");
	HMODULE Rouge = GetModuleHandle(L"Rouge-the-Bat-(SA1-Style)");

	const IniFile* config = new IniFile(std::string(path) + "\\config.ini");

	TGS_Selectors = config->getString("Customs", "TGS_Selectors", "Vanilla");
	StartButton = config->getString("Customs", "StartButton", "Start");
	StageBorder = config->getString("Customs", "StageBorder", "US");

	EditedTimings = config->getBool("SubsAndVoices", "EditedTimings", true);
	ForcedJapVoices = config->getBool("SubsAndVoices", "ForcedJapVoices", true);
	
	DreamcastChaoIcon = config->getString("Extra", "DreamcastChaoIcon", "DX");
	ExtraGGHelp = config->getBool("Extra", "ExtraGGHelp", false);
	ExtraSonicTeamLogo = config->getString("Extra", "ExtraSonicTeamLogo", "Disable");

	// TGS
	if (TGS_Selectors == "TGS") {
		ReplaceTexPVM("B_CHNAM_E", "B_CHNAM_E_TGS");
		ReplaceTexPVM("AVA_METAL_SONIC", "AVA_METAL_SONIC_TGS");
	}
	else if (TGS_Selectors == "Vanilla") {
		ReplaceTexPVM("B_CHNAM_E", "B_CHNAM_E_HD");
		ReplaceTexPVM("AVA_METAL_SONIC", "AVA_METAL_SONIC_DX");
	}

	// Start Button Prompt
	if (StartButton == "Enter") {
		ReplaceTex("PRESSSTART", "hyoji_pressstart", "config\\startButton\\demo", "enter", 5000900, 256, 32);
		ReplaceTex("AVA_GTITLE0_E", "p_enter_us_00", "config\\startButton\\titlescreen", "enter_00", 3489661283, 256, 256);
		ReplaceTex("AVA_GTITLE0_E", "p_enter_us_01", "config\\startButton\\titlescreen", "enter_01", 3489661284, 256, 256);
		ReplaceTex("AVA_GTITLE0_E", "p_enter_us_02", "config\\startButton\\titlescreen", "enter_02", 3489661285, 256, 256);
		ReplaceTex("AVA_GTITLE0_DC_HD", "pressstart", "config\\startButton\\titlescreen", "pressenter", 3489661269, 256, 32);
	}

	// Stage Border Variations
	#pragma region Stages name PVRs
	if (StageBorder == "US") {
		ReplacePNG_StageE("A_STAGE01_E");			// Amy		| Twinkle Park
		ReplacePNG_StageE("A_STAGE02_E");			// Amy		| Hot Shelter
		ReplacePNG_StageE("A_STAGE03_E");			// Amy		| Final Egg
		ReplacePNG_StageE("B_STAGE01_E");			// Big		| Twinkle Park
		ReplacePNG_StageE("B_STAGE02_E");			// Big		| Icecap
		ReplacePNG_StageE("B_STAGE03_E");			// Big		| Emerald Coast
		ReplacePNG_StageE("B_STAGE04_E");			// Big		| Hot Shelter
		ReplacePNG_StageE("E_STAGE01_E");			// E102		| Final Egg
		ReplacePNG_StageE("E_STAGE02_E");			// E102		| Emerald Coast
		ReplacePNG_StageE("E_STAGE03_E");			// E102		| Windy Valley
		ReplacePNG_StageE("E_STAGE04_E");			// E102		| Red Mountain
		ReplacePNG_StageE("E_STAGE05_E");			// E102		| Hot Shelter
		ReplacePNG_StageE("K_STAGE01_E");			// Knuckles	| Speed Highway
		ReplacePNG_StageE("K_STAGE02_E");			// Knuckles	| Casinopolis
		ReplacePNG_StageE("K_STAGE03_E");			// Knuckles	| Red Mountain
		ReplacePNG_StageE("K_STAGE04_E");			// Knuckles	| Lost World
		ReplacePNG_StageE("K_STAGE05_E");			// Knuckles	| Sky Deck
		ReplacePNG_StageE("M_STAGE01_E");			// Tails	| Windy Valley
		ReplacePNG_StageE("M_STAGE02_E");			// Tails	| Casinopolis
		ReplacePNG_StageE("M_STAGE03_E");			// Tails	| Icecap
		ReplacePNG_StageE("M_STAGE04_E");			// Tails	| Sky Deck
		ReplacePNG_StageE("M_STAGE05_E");			// Tails	| Speed Highway
		ReplacePNG_StageE("ST_STAGE01_E");			// Minigame	| Sky Chase 1
		ReplacePNG_StageE("ST_STAGE02_E");			// Minigame	| Sky Chase 2
		ReplacePNG_StageE("ST_STAGE03_E");			// Minigame	| Twinkle Circuit
		ReplacePNG_StageE("ST_STAGE04_E");			// Minigame	| Sans Hill
		ReplacePNG_StageE("ST_STAGE05_E");			// Minigame	| Hedgehog Hammer
		ReplacePNG_StageE("S_STAGE01_E");			// Sonic	| Emerald Coast
		ReplacePNG_StageE("S_STAGE02_E");			// Sonic	| Windy Valley
		ReplacePNG_StageE("S_STAGE03_E");			// Sonic	| Casinopolis
		ReplacePNG_StageE("S_STAGE04_E");			// Sonic	| Icecap
		ReplacePNG_StageE("S_STAGE05_E");			// Sonic	| Twinkle Park
		ReplacePNG_StageE("S_STAGE06_E");			// Sonic	| Speed Highway
		ReplacePNG_StageE("S_STAGE07_E");			// Sonic	| Red Mountain
		ReplacePNG_StageE("S_STAGE08_E");			// Sonic	| Sky Deck
		ReplacePNG_StageE("S_STAGE09_E");			// Sonic	| Lost World
		ReplacePNG_StageE("S_STAGE10_E");			// Sonic	| Final Egg
		ReplacePNG_StageE("T_EGGCARRIER_E");		// Field	| Egg Carrier
		ReplacePNG_StageE("T_MISTICRUIN_E");		// Field	| Mystic Ruins
		ReplacePNG_StageE("T_STATIONSQUARE_E");		// Field	| Station Square
	}

	else if (StageBorder == "JP") {
		ReplacePNG_StageJ("A_STAGE01_E");			// Amy		| Twinkle Park
		ReplacePNG_StageJ("A_STAGE02_E");			// Amy		| Hot Shelter
		ReplacePNG_StageJ("A_STAGE03_E");			// Amy		| Final Egg
		ReplacePNG_StageJ("B_STAGE01_E");			// Big		| Twinkle Park
		ReplacePNG_StageJ("B_STAGE02_E");			// Big		| Icecap
		ReplacePNG_StageJ("B_STAGE03_E");			// Big		| Emerald Coast
		ReplacePNG_StageJ("B_STAGE04_E");			// Big		| Hot Shelter
		ReplacePNG_StageJ("E_STAGE01_E");			// E102		| Final Egg
		ReplacePNG_StageJ("E_STAGE02_E");			// E102		| Emerald Coast
		ReplacePNG_StageJ("E_STAGE03_E");			// E102		| Windy Valley
		ReplacePNG_StageJ("E_STAGE04_E");			// E102		| Red Mountain
		ReplacePNG_StageJ("E_STAGE05_E");			// E102		| Hot Shelter
		ReplacePNG_StageJ("K_STAGE01_E");			// Knuckles	| Speed Highway
		ReplacePNG_StageJ("K_STAGE02_E");			// Knuckles	| Casinopolis
		ReplacePNG_StageJ("K_STAGE03_E");			// Knuckles	| Red Mountain
		ReplacePNG_StageJ("K_STAGE04_E");			// Knuckles	| Lost World
		ReplacePNG_StageJ("K_STAGE05_E");			// Knuckles	| Sky Deck
		ReplacePNG_StageJ("M_STAGE01_E");			// Tails	| Windy Valley
		ReplacePNG_StageJ("M_STAGE02_E");			// Tails	| Casinopolis
		ReplacePNG_StageJ("M_STAGE03_E");			// Tails	| Icecap
		ReplacePNG_StageJ("M_STAGE04_E");			// Tails	| Sky Deck
		ReplacePNG_StageJ("M_STAGE05_E");			// Tails	| Speed Highway
		ReplacePNG_StageJ("ST_STAGE01_E");			// Minigame	| Sky Chase 1
		ReplacePNG_StageJ("ST_STAGE02_E");			// Minigame	| Sky Chase 2
		ReplacePNG_StageJ("ST_STAGE03_E");			// Minigame	| Twinkle Circuit
		ReplacePNG_StageJ("ST_STAGE04_E");			// Minigame	| Sans Hill
		ReplacePNG_StageJ("ST_STAGE05_E");			// Minigame	| Hedgehog Hammer
		ReplacePNG_StageJ("S_STAGE01_E");			// Sonic	| Emerald Coast
		ReplacePNG_StageJ("S_STAGE02_E");			// Sonic	| Windy Valley
		ReplacePNG_StageJ("S_STAGE03_E");			// Sonic	| Casinopolis
		ReplacePNG_StageJ("S_STAGE04_E");			// Sonic	| Icecap
		ReplacePNG_StageJ("S_STAGE05_E");			// Sonic	| Twinkle Park
		ReplacePNG_StageJ("S_STAGE06_E");			// Sonic	| Speed Highway
		ReplacePNG_StageJ("S_STAGE07_E");			// Sonic	| Red Mountain
		ReplacePNG_StageJ("S_STAGE08_E");			// Sonic	| Sky Deck
		ReplacePNG_StageJ("S_STAGE09_E");			// Sonic	| Lost World
		ReplacePNG_StageJ("S_STAGE10_E");			// Sonic	| Final Egg
		ReplacePNG_StageJ("T_EGGCARRIER_E");		// Field	| Egg Carrier
		ReplacePNG_StageJ("T_MISTICRUIN_E");		// Field	| Mystic Ruins
		ReplacePNG_StageJ("T_STATIONSQUARE_E");		// Field	| Station Square
	}
	#pragma endregion

	std::wstring modpath(path, path + strlen(path));
	std::wstring editedTimings = L"\\edited_timings.ini";
	std::string flagPath = "\\jap-voice-flag";

	// Custom Timings
	if (EditedTimings)
	{
		if (TweakedCutscenes || Cream || Rouge)
		{
			DisplayMessage(message1);
		}
		else
		{
			helperFunctions.LoadEXEData((modpath + editedTimings).c_str(), modpath.c_str());
			SetCustomTimings(path, helperFunctions);
		}
	}	

	// Обработка форса происходит в основном файле мода (mod.cpp), в файле конфига обрабатывается 
	// только вывод сообщения и обработка флаг-файла
	if (!GetJPVoiceSetting())	// Если опция форса выключена (то есть форсируется яп)
		remove((path + flagPath).c_str());	// Удалить нахер флаг, если опция ВЫКЛЮЧЕНИЯ включена
	else
	{
		std::ifstream flagFile(path + flagPath);
		if (!flagFile) {	// При отсутствии флаг-файла 
			DisplayMessage(message0);
			std::ofstream flagFileOut(path + flagPath);	// Создать флаг-файл
			flagFileOut.close();
		}
	}

	// Chao Garden Portals Icons
	if (DreamcastChaoIcon == "DC")
	{
		ReplaceTex("CHAO_OBJECT", "al_ws10", "config\\chaoPortalsIcons", "eggCarrier_dc", 504562, 128, 128);
		ReplaceTex("CHAO_OBJECT", "al_ws11", "config\\chaoPortalsIcons", "mysticRuins_dc", 504564, 128, 128);
		ReplaceTex("CHAO_OBJECT", "al_ws12", "config\\chaoPortalsIcons", "stationSquare_dc", 504566, 128, 128);

		ReplaceTex("AL_DX_OBJ_CMN", "al_ws10", "config\\chaoPortalsIcons", "eggCarrier_dc", 1100078, 128, 128);
		ReplaceTex("AL_DX_OBJ_CMN", "al_ws11", "config\\chaoPortalsIcons", "mysticRuins_dc", 1100079, 128, 128);
		ReplaceTex("AL_DX_OBJ_CMN", "al_ws12", "config\\chaoPortalsIcons", "stationSquare_dc", 1100080, 128, 128);
	}

	// Alternative GG Game help
	ReplaceTexPVM_HD_Rus("GG_TEXLIST_FR");
	if (ExtraGGHelp) {
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

	if (ExtraSonicTeamLogo == "Black")
		ReplaceTexFMV("SONICTEAM", "SONICTEAM_Black");
	if (ExtraSonicTeamLogo == "White")
		ReplaceTexFMV("SONICTEAM", "SONICTEAM_White");
}