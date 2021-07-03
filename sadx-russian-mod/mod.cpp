#include "stdafx.h"
#include <SADXModLoader.h>
#include <IniFile.hpp>
#include <cmath>

#include "DreamcastChaoGardenHints.h"
#include "SA1Staff.h"
#include "Funcs.h"
#include "VariousText.h"

std::string TGS_Selectors = "Vanilla";
std::string DreamcastChaoIcon = "DX";
std::string StartButton = "Start";
bool ExtraGGHelp = false;
std::string StageBorder = "US";

void LoadChaoGardenHintMessages()
{
	WriteData((HintText_Entry * *)0x9BF070, (HintText_Entry*)& ChaoGardenMessages_English);
	WriteData((HintText_Entry * *)0x9BF084, (HintText_Entry*)& ChaoGardenMessages_English);
	WriteData((HintText_Entry * *)0x9BF098, (HintText_Entry*)& ChaoGardenMessages_English);
	WriteData((HintText_Entry * *)0x9BF0AC, (HintText_Entry*)& ChaoGardenMessages_English);
}

extern "C"
{
	__declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
	{
		char pathbuf[MAX_PATH];
		HMODULE GoalRing = GetModuleHandle(L"GoalRing");			// Init GoalRing Mod dll
		HMODULE DConv = GetModuleHandle(L"DCMods_Main");			// Init Dreamcast Conversion dll	
		HMODULE Randomizer = GetModuleHandle(L"sadx-randomizer");	// Init Randomizer dll
		HMODULE HDGui = GetModuleHandle(L"HD_GUI");					// Init HD GUI

		#pragma region Ini Configuration
		const IniFile* config = new IniFile(std::string(path) + "\\config.ini");

		TGS_Selectors = config->getString("Customs", "TGS_Selectors", "Vanilla");
		DreamcastChaoIcon = config->getString("Customs", "DreamcastChaoIcon", "DX");
		StartButton = config->getString("Customs", "StartButton", "Start");
		ExtraGGHelp = config->getBool("Customs", "ExtraGGHelp", false);
		StageBorder = config->getString("Customs", "StageBorder", "US");

		if (StartButton == "Enter") {
			if (DConv != nullptr)
				ReplacePVM("PRESSSTART", "PRESSSTART_ENTER");
			else
				ReplacePVM("PRESSSTART", "PRESSSTART_DX_Enter_HD_RUS");

			ReplacePVM("AVA_GTITLE0_E", "AVA_GTITLE0_E_HD_ENTER");
			ReplacePVM("AVA_GTITLE0_DC_HD", "AVA_GTITLE0_DC_HD_ENTER");
		}
		else if (StartButton == "Start") {
			if (DConv != nullptr)
				ReplacePVM("PRESSSTART", "PRESSSTART_Start");				
			else
				ReplacePVM("PRESSSTART", "PRESSSTART_DX_START_HD_RUS");

			ReplacePVM("AVA_GTITLE0_E", "AVA_GTITLE0_E_HD_START");
			ReplacePVM("AVA_GTITLE0_DC_HD", "AVA_GTITLE0_DC_HD_START");
		}

		// TGS
		if (TGS_Selectors == "TGS") {
			ReplacePVM("B_CHNAM_E", "B_CHNAM_E_TGS");
			ReplacePVM("AVA_METAL_SONIC", "AVA_METAL_SONIC_TGS");
		}
		else if (TGS_Selectors == "Vanilla") {
			ReplacePVM("B_CHNAM_E", "B_CHNAM_E_HD");
			ReplacePVM("AVA_METAL_SONIC", "AVA_METAL_SONIC_DX");
		}

		// Chao Garden
		if (DreamcastChaoIcon == "DC")
		{
			ReplacePVM("CHAO_OBJECT", "CHAO_OBJECT_DC");
			ReplacePVM("AL_DX_OBJ_CMN", "AL_DX_OBJ_CMN_DC");
		}
		else if (DreamcastChaoIcon == "DX") {
			ReplacePVM("CHAO_OBJECT", "CHAO_OBJECT_DX");
			ReplacePVM("AL_DX_OBJ_CMN", "AL_DX_OBJ_CMN_DX"); 
		}
		
		// Alternative GG Game help
		if (!ExtraGGHelp) {
			ReplacePVM("GG_TEXLIST_US", "GG_TEXLIST_US_Rus");
		}
		else {
			ReplacePVM("GG_TEXLIST_US", "GG_TEXLIST_US_Rus_Alt");
		}
		#pragma endregion
				
		LoadSA1Staff();								// Load Russian Staff Roll
		LoadChaoGardenHintMessages();				// Load Dreamcast Chao Gadren Hints
		LoadText();

		ReplacePNG_Subtitle("subtitle_eu");

		if (GoalRing == nullptr)
		{
			ReplacePNG_MissionE("MISSION_S_BOX_E");
			ReplacePNG_MissionE("MISSION_S_BOX25MIN_E");
			ReplacePNG_MissionE("MISSION_S_BOX2MIN_E");
			ReplacePNG_MissionE("MISSION_S_BOX3MIN_E");
			ReplacePNG_MissionE("MISSION_S_BOX45MIN_E");
			ReplacePNG_MissionE("MISSION_S_BOX4MIN_E");
			ReplacePNG_MissionE("MISSION_S_BOX5MIN_E");
			ReplacePNG_MissionE("MISSION_S_RINGBOX_E");
			ReplacePNG_MissionE("MISSION_T_BOX_E");
		}
		else
		{
			ReplacePNG_GoalRing("MISSION_S_BOX_E");
			ReplacePNG_GoalRing("MISSION_S_BOX25MIN_E");
			ReplacePNG_GoalRing("MISSION_S_BOX2MIN_E");
			ReplacePNG_GoalRing("MISSION_S_BOX3MIN_E");
			ReplacePNG_GoalRing("MISSION_S_BOX45MIN_E");
			ReplacePNG_GoalRing("MISSION_S_BOX4MIN_E");
			ReplacePNG_GoalRing("MISSION_S_BOX5MIN_E");
			ReplacePNG_GoalRing("MISSION_S_RINGBOX_E");
			ReplacePNG_GoalRing("MISSION_T_BOX_E");
		}
				
		#pragma region Common PVRs 
		ReplacePNG_Common("ABC_TXT");				// File select font
		ReplacePNG_Common("HYOJI_BALLS_E");			// Casinopolis ball counter
		ReplacePNG_Common("B32ASCII");				// Boss name font
		ReplacePNG_Common("ST_064S_SCORE");			// Score in HUD
		ReplacePNG_Common("ST_128S_HPGEJI");		// Tornado's health bar story
		#pragma endregion

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

		#pragma region Stage missions PVRs
		ReplacePNG_MissionE("MISSION_A_BALRING_E");
		ReplacePNG_MissionE("MISSION_A_BALZERO_E");
		ReplacePNG_MissionE("MISSION_A_FIN_E");
		ReplacePNG_MissionE("MISSION_A_HOT_E");
		ReplacePNG_MissionE("MISSION_A_TWIN_E");
		ReplacePNG_MissionE("MISSION_BIG_1K_E");
		ReplacePNG_MissionE("MISSION_BIG_2K_E");
		ReplacePNG_MissionE("MISSION_BIG_FROG_E");
		ReplacePNG_MissionE("MISSION_G_103RING_E");
		ReplacePNG_MissionE("MISSION_G_103_E");
		ReplacePNG_MissionE("MISSION_G_104RING_E");
		ReplacePNG_MissionE("MISSION_G_104_E");
		ReplacePNG_MissionE("MISSION_G_105RING_E");
		ReplacePNG_MissionE("MISSION_G_105_E");
		ReplacePNG_MissionE("MISSION_G_EME_E");
		ReplacePNG_MissionE("MISSION_G_FIN_E");
		ReplacePNG_MissionE("MISSION_G_FROGRING_E");
		ReplacePNG_MissionE("MISSION_G_FROG_E");
		ReplacePNG_MissionE("MISSION_G_SONICDRING_E");
		ReplacePNG_MissionE("MISSION_G_HOT_E");
		ReplacePNG_MissionE("MISSION_G_RED_E");
		ReplacePNG_MissionE("MISSION_G_SONICD_E");
		ReplacePNG_MissionE("MISSION_G_WIN_E");
		ReplacePNG_MissionE("MISSION_K_1MIN_E");
		ReplacePNG_MissionE("MISSION_K_2MIN_E");
		ReplacePNG_MissionE("MISSION_K_3EME_E");
		ReplacePNG_MissionE("MISSION_K_NOHINT_E");
		ReplacePNG_MissionE("MISSION_S_EGGC_E");
		ReplacePNG_MissionE("MISSION_S_EMECASINO_E");
		ReplacePNG_MissionE("MISSION_S_EMESNOW_E");
		ReplacePNG_MissionE("MISSION_S_EMEWIND_E");
		ReplacePNG_MissionE("MISSION_S_FEGG_E");
		ReplacePNG_MissionE("MISSION_S_ISEKI_E");
		ReplacePNG_MissionE("MISSION_S_TAILS_E");
		ReplacePNG_MissionE("MISSION_T_EMECASINO_E");
		ReplacePNG_MissionE("MISSION_T_EMESNOW_E");
		ReplacePNG_MissionE("MISSION_T_EMEWIND_E");
		ReplacePNG_MissionE("MISSION_T_FASTEGG_E");
		ReplacePNG_MissionE("MISSION_T_FASTSONIC_E");
		ReplacePNG_MissionE("MISSION_T_MISS_E");
		ReplacePNG_MissionE("MISSION_T_RINGEGG_E");
		ReplacePNG_MissionE("MISSION_T_RINGSONIC_E");
		#pragma endregion

		#pragma region Menus
		ReplacePVM_HD_Rus("SEGALOGO_E");			// SEGA Logo Screen

		ReplacePVM_HD_Rus("AVA_CHSEL_E");			// Character Select Circle
		ReplacePVM_HD_Rus("AVA_DLG_E");				// Many texts in menu
		ReplacePVM_HD_Rus("AVA_EMBLEMVIEW_E");		// Emblem stats view
		ReplacePVM_HD_Rus("AVA_FILESEL_E");			// File select menu
		ReplacePVM_HD_Rus("AVA_FSDLG_E");			// Delete save file
		ReplacePVM_HD_Rus("AVA_NEW16NO");			// Results in the Trial
		
		ReplacePVM_HD_Rus("AVA_OPTION_E");			// Options menu
		if(HDGui)
			ReplacePVM_HD_Rus("AVA_TITLE_CMN");			// Tital screen
		ReplacePVM_HD_Rus("AVA_TITLE_BACK_E");		// Menu back
		ReplacePVM_HD_Rus("AVA_SNDTEST_E");			// Sound test menu
		ReplacePVM_HD_Rus("AVA_STNAM_E");			// Stage names in File Select
		ReplacePVM_HD_Rus("AVA_TITLE_E");			// Main menu
		ReplacePVM_HD_Rus("AVA_TRIALACTSEL_E");		// Trial select menu
		ReplacePVM_HD_Rus("AVA_VMSSEL_E");			// Memory card select (because MS_TX_e)
		ReplacePVM_HD_Rus("M_CHNAM");				// Character names in char select
		ReplacePVM_HD_Rus("TX_CHNAM_E");			// Character names in ??

		ReplacePVM_Rus("GGMENU_TEXLIST_US");		// GG Pause menu
		#pragma endregion 
		
		#pragma region Tutorials
		ReplacePVM_HD_Rus("TUTOMSG_SONIC_E");		//Sonic's tutorial
		ReplacePVM_HD_Rus("TUTOMSG_TAILS_E");		//Tails' tutorial
		ReplacePVM_HD_Rus("TUTOMSG_KNUCKLES_E");	//Knuckles' tutorial
		ReplacePVM_HD_Rus("TUTOMSG_AMY_E");			//Amy's tutorial
		ReplacePVM_HD_Rus("TUTOMSG_BIG_E");			//Big's tutorial
		ReplacePVM_HD_Rus("TUTOMSG_E102_E");		//Gamma's Tutorial
		ReplacePVM_HD_Rus("TUTO_CMN_E");			//Tutorial common textures
		#pragma endregion

		#pragma region Maps
		ReplacePVM_HD_Rus("MAP_EC_A");				//Egg Carrier's bridge (transformed) area
		ReplacePVM_HD_Rus("MAP_EC_B");				//Egg Carrier's bridge area
		ReplacePVM_HD_Rus("MAP_EC_H");				//Egg Carrier's inner hall area
		ReplacePVM_HD_Rus("MAP_MR_A");				//Mystic Ruins' Angel Island area
		ReplacePVM_HD_Rus("MAP_MR_J");				//Mystic Ruins' jungle area
		ReplacePVM_HD_Rus("MAP_MR_S");				//Myscit Ruins' station area
		ReplacePVM_HD_Rus("MAP_PAST_E");			//Past's altar area
		ReplacePVM_HD_Rus("MAP_PAST_S");			//Past's city area
		ReplacePVM_HD_Rus("MAP_SS");				//Station Square area
		#pragma endregion

		#pragma region Scores
		ReplacePVM_HD_Rus("SCORE_ACT_E");			//Action stage score
		ReplacePVM_HD_Rus("SCORE_BOARD_E");			//Board stage score
		ReplacePVM_HD_Rus("SCORE_BOSS_E");			//Boss attack score
		ReplacePVM_HD_Rus("SCORE_CART_E");			//Twincle Circuit score
		ReplacePVM_HD_Rus("SCORE_MOLE_E");			//Hedgehog Hammer score
		ReplacePVM_HD_Rus("SCORE_RESULT_E");		//Action stage mission score
		ReplacePVM_HD_Rus("SCORE_SHOOT_E");			//Sky Chase score
		#pragma endregion

		#pragma region Gameplay
		ReplacePVM_HD_Rus("BOARD_SCORE");
		ReplacePVM_HD_Rus("CHAOS_LIFEGAUGE");		// Boss' Lifebar
		ReplacePVM_HD_Rus("CON_REGULAR_E");			// HUD stuff
		ReplacePVM_HD_Rus("E102TIME");				// E102 Timer
		ReplacePVM_HD_Rus("FISHING");				// Big's fishing stuff
		ReplacePVM_HD_Rus("GAMEOVER_E");			// Game Over Screen
		ReplacePVM_HD_Rus("MILESRACE");				// Tails' stages stuff
		ReplacePVM_HD_Rus("MIS_C_EN");				// Mission mode screen
		ReplacePVM_HD_Rus("MIS_P");					// Mission mode interface
		ReplacePVM_HD_Rus("OBJ_MINI_CART");			// Cart mini game
		ReplacePVM_HD_Rus("SHOOTING0");				// Sky Chase mini game

		ReplacePVM_Rus("EFF_REGULAR");				// Gamma's HIT texture
		ReplacePVM_Rus("MOGURATATAKI");				// Hedgehog Hammer font
		#pragma endregion

		#pragma region TGS Menu
		ReplacePVM_Rus("C_SELECT1");				// Character Select TGS
		ReplacePVM_Rus("C_SELECT2");				// Character Select TGS
		ReplacePVM_Rus("LOADING");					// Loading Screen TGS
		ReplacePVM_Rus("TGS_SOUSA_A");				// Tutorial TGS
		ReplacePVM_Rus("TGS_SOUSA_B");				// Tutorial TGS
		ReplacePVM_Rus("TGS_SOUSA_E");				// Tutorial TGS
		ReplacePVM_Rus("TGS_SOUSA_K");				// Tutorial TGS
		ReplacePVM_Rus("TGS_SOUSA_S");				// Tutorial TGS
		ReplacePVM_Rus("TGS_SOUSA_T");				// Tutorial TGS
		ReplacePVM_Rus("TITLE");					// Title Screen TGS
		#pragma endregion

		#pragma region Chao
		ReplacePVM_Rus("AL_GARDEN00SS_2D");			// Chao SA2B Hints
		ReplacePVM_Rus("AL_STG_KINDER_AD_TEX");		// Chao SA2B Kindergarden
		ReplacePVM_Rus("AL_ENT_CHAR_E_TEX");		// Chao SA2B ??
		ReplacePVM_Rus("AL_ENT_TITLE_E_TEX");		// Chao SA2B Race Course
		ReplacePVM_Rus("AL_TEX_ENT_COMMON_EN");		// Chao SA2B ??
		ReplacePVM_Rus("AL_TEX_ODEKAKE_MENU_EN");	// Chao SA2B Machine
		ReplacePVM_Rus("AL_TEX_COMMON");			// Chao SA2B ??

		ReplacePVM_Rus("OBJ_AL_RACE_E");
		ReplacePVM_Rus("OBJ_AL_RACE");				// Chao Race Common Obj Textures 
		ReplacePVM_Rus("GARDEN00SS");				// Chao Island board
		#pragma endregion
		
	} 
	
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}