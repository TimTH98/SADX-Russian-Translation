#include "stdafx.h"
#include "DreamcastChaoGardenHits.h"
#include "SA1Staff.h"
#include <SADXModLoader.h>
#include <IniFile.hpp>
#include <cmath>

#pragma region Funcs
#define ReplacePNG_GoalRing(a) do { \
	_snprintf_s(pathbuf, LengthOfArray(pathbuf), "%s\\textures\\pvr_mission_goalring\\index.txt", path); \
	helperFunctions.ReplaceFile("system\\" a ".PVR", pathbuf); \
} while (0)

#define ReplacePNG_Common(a) do { \
	_snprintf_s(pathbuf, LengthOfArray(pathbuf), "%s\\textures\\pvr_common\\index.txt", path); \
	helperFunctions.ReplaceFile("system\\" a ".PVR", pathbuf); \
} while (0)

#define ReplacePNG_MissionE(a) do { \
	_snprintf_s(pathbuf, LengthOfArray(pathbuf), "%s\\textures\\pvr_mission_en\\index.txt", path); \
	helperFunctions.ReplaceFile("system\\" a ".PVR", pathbuf); \
} while (0)

#define ReplacePNG_StageE(a) do { \
	_snprintf_s(pathbuf, LengthOfArray(pathbuf), "%s\\textures\\pvr_stage_en\\index.txt", path); \
	helperFunctions.ReplaceFile("system\\" a ".PVR", pathbuf); \
} while (0)

#define ReplacePNG_Subtitle(a) do { \
	_snprintf_s(pathbuf, LengthOfArray(pathbuf), "%s\\textures\\subtitle\\index.txt", path); \
	helperFunctions.ReplaceFile("system\\" a ".PVR", pathbuf); \
} while (0)

#define ReplacePVM_HD_Rus(a) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" a "_HD_RUS.PVM") \

#define ReplacePVM_Rus(a) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" a "_RUS.PVM") \

#define ReplacePVM(a, b) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" b ".PVM") \
// “ут есть потенциальный шиткод, надо разобратьс€
// Potential shitcode is here, should be come up with this
#pragma endregion

static bool TGS_Selectors = false;
static bool DreamcastChaoIcon = false;
static bool StartButton = false;
static bool ExtraGGHelp = false;

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
		HMODULE GoalRing = GetModuleHandle(L"GoalRing");		// Init GoalRing Mod dll
		HMODULE DConv = GetModuleHandle(L"DCMods_Main");		// Init Dreamcast Conversion dll

		#pragma region Ini Configuration
		const IniFile* config = new IniFile(std::string(path) + "\\config.ini");

		TGS_Selectors = config->getBool("Customs", "TGS_Selectors", true);
		DreamcastChaoIcon = config->getBool("Customs", "DreamcastChaoIcon", true);
		StartButton = config->getBool("Customs", "StartButton", true);
		ExtraGGHelp = config->getBool("Customs", "ExtraGGHelp", false);

		// Start Button
		if (StartButton) {			
			if (DConv = nullptr)
				ReplacePVM("PRESSSTART", "PRESSSTART_DX_Enter_HD_RUS");
			else
				ReplacePVM("PRESSSTART", "PRESSSTART_ENTER");

			ReplacePVM("AVA_GTITLE0_ES", "AVA_GTITLE0_ES_Enter");
			ReplacePVM("AVA_GTITLE0_E", "AVA_GTITLE0_E_HD_ENTER");
		}
		else {
			if (DConv = nullptr)
				ReplacePVM("PRESSSTART", "PRESSSTART_DX_START_HD_RUS");
			else
				ReplacePVM("PRESSSTART", "PRESSSTART_Start");

			ReplacePVM("AVA_GTITLE0_ES", "AVA_GTITLE0_ES_Start");
			ReplacePVM("AVA_GTITLE0_E", "AVA_GTITLE0_E_HD_START");
		}

		// TGS
		if (TGS_Selectors) {
			ReplacePVM("B_CHNAM_E", "B_CHNAM_E_TGS");
			ReplacePVM("AVA_METAL_SONIC", "AVA_METAL_SONIC_TGS");
		}
		else {
			ReplacePVM("B_CHNAM_E", "B_CHNAM_E_HD");
			ReplacePVM("AVA_METAL_SONIC", "AVA_METAL_SONIC_DX");
		}

		// Chao Garden
		if (DreamcastChaoIcon)
			ReplacePVM("CHAO_OBJECT", "CHAO_OBJECT_DC");
		else	ReplacePVM("CHAO_OBJECT", "CHAO_OBJECT_DX");		

		// Alternative GG Game help
		if (!ExtraGGHelp) {
			ReplacePVM("GG_TEXLIST_US", "GG_TEXLIST_US_Rus");
		}
		else {
			ReplacePVM("GG_TEXLIST_US", "GG_TEXLIST_US_Rus_Alt");
		}
		#pragma endregion
				
		if (DConv != nullptr)
			LoadSA1Staff();							// Load Russian Staff Roll
		LoadChaoGardenHintMessages();				// Load Dreamcast Chao Gadren Hints

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
		ReplacePNG_Common("STAFFROLL_TXT");			// Credits font		
		ReplacePNG_Common("ST_064S_SCORE");			// Score in HUD
		ReplacePNG_Common("ST_128S_HPGEJI");		// Tornado's health bar
		#pragma endregion

		#pragma region Stages name PVRs
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
		ReplacePVM_HD_Rus("AVA_FSDLG_E_E");			// Delete save file
		
		ReplacePVM_HD_Rus("AVA_OPTION_E");			// Options menu
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
		ReplacePVM_HD_Rus("GAMEOVER_E");
		ReplacePVM_HD_Rus("MILESRACE");
		ReplacePVM_HD_Rus("MIS_C_EN");
		ReplacePVM_HD_Rus("MIS_P");
		ReplacePVM_HD_Rus("OBJ_MINI_CART");
		ReplacePVM_HD_Rus("SHOOTING0");

		ReplacePVM_Rus("EFF_REGULAR");
		ReplacePVM_Rus("MOGURATATAKI");
		#pragma endregion

		#pragma region TGS Menu
		ReplacePVM_Rus("C_SELECT1");
		ReplacePVM_Rus("C_SELECT2");
		ReplacePVM_Rus("LOADING");
		ReplacePVM_Rus("TGS_SOUSA_A");
		ReplacePVM_Rus("TGS_SOUSA_B");
		ReplacePVM_Rus("TGS_SOUSA_E");
		ReplacePVM_Rus("TGS_SOUSA_K");
		ReplacePVM_Rus("TGS_SOUSA_S");
		ReplacePVM_Rus("TGS_SOUSA_T");
		ReplacePVM_Rus("TITLE");
		#pragma endregion

		#pragma region Chao
		ReplacePVM_Rus("AL_GARDEN00SS_2D");
		ReplacePVM_Rus("AL_STG_KINDER_AD_TEX");
		ReplacePVM_Rus("AL_ENT_CHAR_E_TEX");
		ReplacePVM_Rus("AL_ENT_TITLE_E_TEX");
		ReplacePVM_Rus("AL_TEX_ENT_COMMON_EN");
		ReplacePVM_Rus("AL_TEX_ODEKAKE_MENU_EN");
		ReplacePVM_Rus("AL_TEX_COMMON");
		ReplacePVM_Rus("OBJ_AL_RACE_E");
		#pragma endregion
			
	} 
	
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}