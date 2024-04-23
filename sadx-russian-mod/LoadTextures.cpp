#include "stdafx.h"
#include "ModConfig.h"


char pathbuf[MAX_PATH];
HMODULE GoalRing = GetModuleHandle(L"GoalRing"); // Init GoalRing Mod dll
HMODULE EmblemChallenge = GetModuleHandle(L"SADX_EmblemChallenge");	// Init Emblem Challenge dll


/* Depends on config */

void LoadUSStageBorders(const char* path, const HelperFunctions& helperFunctions)
{
	ReplacePVR("pvr_stage_en", "A_STAGE01_E");			// Amy		| Twinkle Park
	ReplacePVR("pvr_stage_en", "A_STAGE02_E");			// Amy		| Hot Shelter
	ReplacePVR("pvr_stage_en", "A_STAGE03_E");			// Amy		| Final Egg
	ReplacePVR("pvr_stage_en", "B_STAGE01_E");			// Big		| Twinkle Park
	ReplacePVR("pvr_stage_en", "B_STAGE02_E");			// Big		| Icecap
	ReplacePVR("pvr_stage_en", "B_STAGE03_E");			// Big		| Emerald Coast
	ReplacePVR("pvr_stage_en", "B_STAGE04_E");			// Big		| Hot Shelter
	ReplacePVR("pvr_stage_en", "E_STAGE01_E");			// E102		| Final Egg
	ReplacePVR("pvr_stage_en", "E_STAGE02_E");			// E102		| Emerald Coast
	ReplacePVR("pvr_stage_en", "E_STAGE03_E");			// E102		| Windy Valley
	ReplacePVR("pvr_stage_en", "E_STAGE04_E");			// E102		| Red Mountain
	ReplacePVR("pvr_stage_en", "E_STAGE05_E");			// E102		| Hot Shelter
	ReplacePVR("pvr_stage_en", "K_STAGE01_E");			// Knuckles	| Speed Highway
	ReplacePVR("pvr_stage_en", "K_STAGE02_E");			// Knuckles	| Casinopolis
	ReplacePVR("pvr_stage_en", "K_STAGE03_E");			// Knuckles	| Red Mountain
	ReplacePVR("pvr_stage_en", "K_STAGE04_E");			// Knuckles	| Lost World
	ReplacePVR("pvr_stage_en", "K_STAGE05_E");			// Knuckles	| Sky Deck
	ReplacePVR("pvr_stage_en", "M_STAGE01_E");			// Tails	| Windy Valley
	ReplacePVR("pvr_stage_en", "M_STAGE02_E");			// Tails	| Casinopolis
	ReplacePVR("pvr_stage_en", "M_STAGE03_E");			// Tails	| Icecap
	ReplacePVR("pvr_stage_en", "M_STAGE04_E");			// Tails	| Sky Deck
	ReplacePVR("pvr_stage_en", "M_STAGE05_E");			// Tails	| Speed Highway
	ReplacePVR("pvr_stage_en", "ST_STAGE01_E");			// Minigame	| Sky Chase 1
	ReplacePVR("pvr_stage_en", "ST_STAGE02_E");			// Minigame	| Sky Chase 2
	ReplacePVR("pvr_stage_en", "ST_STAGE03_E");			// Minigame	| Twinkle Circuit
	ReplacePVR("pvr_stage_en", "ST_STAGE04_E");			// Minigame	| Sans Hill
	ReplacePVR("pvr_stage_en", "ST_STAGE05_E");			// Minigame	| Hedgehog Hammer
	ReplacePVR("pvr_stage_en", "S_STAGE01_E");			// Sonic	| Emerald Coast
	ReplacePVR("pvr_stage_en", "S_STAGE02_E");			// Sonic	| Windy Valley
	ReplacePVR("pvr_stage_en", "S_STAGE03_E");			// Sonic	| Casinopolis
	ReplacePVR("pvr_stage_en", "S_STAGE04_E");			// Sonic	| Icecap
	ReplacePVR("pvr_stage_en", "S_STAGE05_E");			// Sonic	| Twinkle Park
	ReplacePVR("pvr_stage_en", "S_STAGE06_E");			// Sonic	| Speed Highway
	ReplacePVR("pvr_stage_en", "S_STAGE07_E");			// Sonic	| Red Mountain
	ReplacePVR("pvr_stage_en", "S_STAGE08_E");			// Sonic	| Sky Deck
	ReplacePVR("pvr_stage_en", "S_STAGE09_E");			// Sonic	| Lost World
	ReplacePVR("pvr_stage_en", "S_STAGE10_E");			// Sonic	| Final Egg
	ReplacePVR("pvr_stage_en", "T_EGGCARRIER_E");		// Field	| Egg Carrier
	ReplacePVR("pvr_stage_en", "T_MISTICRUIN_E");		// Field	| Mystic Ruins
	ReplacePVR("pvr_stage_en", "T_STATIONSQUARE_E");		// Field	| Station Square
}

void LoadJPStageBorders(const char* path, const HelperFunctions& helperFunctions)
{
	ReplacePVR("pvr_stage_jp", "A_STAGE01_E");			// Amy		| Twinkle Park
	ReplacePVR("pvr_stage_jp", "A_STAGE02_E");			// Amy		| Hot Shelter
	ReplacePVR("pvr_stage_jp", "A_STAGE03_E");			// Amy		| Final Egg
	ReplacePVR("pvr_stage_jp", "B_STAGE01_E");			// Big		| Twinkle Park
	ReplacePVR("pvr_stage_jp", "B_STAGE02_E");			// Big		| Icecap
	ReplacePVR("pvr_stage_jp", "B_STAGE03_E");			// Big		| Emerald Coast
	ReplacePVR("pvr_stage_jp", "B_STAGE04_E");			// Big		| Hot Shelter
	ReplacePVR("pvr_stage_jp", "E_STAGE01_E");			// E102		| Final Egg
	ReplacePVR("pvr_stage_jp", "E_STAGE02_E");			// E102		| Emerald Coast
	ReplacePVR("pvr_stage_jp", "E_STAGE03_E");			// E102		| Windy Valley
	ReplacePVR("pvr_stage_jp", "E_STAGE04_E");			// E102		| Red Mountain
	ReplacePVR("pvr_stage_jp", "E_STAGE05_E");			// E102		| Hot Shelter
	ReplacePVR("pvr_stage_jp", "K_STAGE01_E");			// Knuckles	| Speed Highway
	ReplacePVR("pvr_stage_jp", "K_STAGE02_E");			// Knuckles	| Casinopolis
	ReplacePVR("pvr_stage_jp", "K_STAGE03_E");			// Knuckles	| Red Mountain
	ReplacePVR("pvr_stage_jp", "K_STAGE04_E");			// Knuckles	| Lost World
	ReplacePVR("pvr_stage_jp", "K_STAGE05_E");			// Knuckles	| Sky Deck
	ReplacePVR("pvr_stage_jp", "M_STAGE01_E");			// Tails	| Windy Valley
	ReplacePVR("pvr_stage_jp", "M_STAGE02_E");			// Tails	| Casinopolis
	ReplacePVR("pvr_stage_jp", "M_STAGE03_E");			// Tails	| Icecap
	ReplacePVR("pvr_stage_jp", "M_STAGE04_E");			// Tails	| Sky Deck
	ReplacePVR("pvr_stage_jp", "M_STAGE05_E");			// Tails	| Speed Highway
	ReplacePVR("pvr_stage_jp", "ST_STAGE01_E");			// Minigame	| Sky Chase 1
	ReplacePVR("pvr_stage_jp", "ST_STAGE02_E");			// Minigame	| Sky Chase 2
	ReplacePVR("pvr_stage_jp", "ST_STAGE03_E");			// Minigame	| Twinkle Circuit
	ReplacePVR("pvr_stage_jp", "ST_STAGE04_E");			// Minigame	| Sans Hill
	ReplacePVR("pvr_stage_jp", "ST_STAGE05_E");			// Minigame	| Hedgehog Hammer
	ReplacePVR("pvr_stage_jp", "S_STAGE01_E");			// Sonic	| Emerald Coast
	ReplacePVR("pvr_stage_jp", "S_STAGE02_E");			// Sonic	| Windy Valley
	ReplacePVR("pvr_stage_jp", "S_STAGE03_E");			// Sonic	| Casinopolis
	ReplacePVR("pvr_stage_jp", "S_STAGE04_E");			// Sonic	| Icecap
	ReplacePVR("pvr_stage_jp", "S_STAGE05_E");			// Sonic	| Twinkle Park
	ReplacePVR("pvr_stage_jp", "S_STAGE06_E");			// Sonic	| Speed Highway
	ReplacePVR("pvr_stage_jp", "S_STAGE07_E");			// Sonic	| Red Mountain
	ReplacePVR("pvr_stage_jp", "S_STAGE08_E");			// Sonic	| Sky Deck
	ReplacePVR("pvr_stage_jp", "S_STAGE09_E");			// Sonic	| Lost World
	ReplacePVR("pvr_stage_jp", "S_STAGE10_E");			// Sonic	| Final Egg
	ReplacePVR("pvr_stage_jp", "T_EGGCARRIER_E");		// Field	| Egg Carrier
	ReplacePVR("pvr_stage_jp", "T_MISTICRUIN_E");		// Field	| Mystic Ruins
	ReplacePVR("pvr_stage_jp", "T_STATIONSQUARE_E");		// Field	| Station Square
}


/* Texture loading stuff */

void InitGoalRingModTextures(const char* path, const HelperFunctions& helperFunctions)
{
	if (!GoalRing) // Goal Ring OFF
	{
		ReplacePVR("pvr_mission_fr", "MISSION_S_BOX_F");
		ReplacePVR("pvr_mission_fr", "MISSION_S_BOX25MIN_F");
		ReplacePVR("pvr_mission_fr", "MISSION_S_BOX2MIN_F");
		ReplacePVR("pvr_mission_fr", "MISSION_S_BOX3MIN_F");
		ReplacePVR("pvr_mission_fr", "MISSION_S_BOX45MIN_F");
		ReplacePVR("pvr_mission_fr", "MISSION_S_BOX4MIN_F");
		ReplacePVR("pvr_mission_fr", "MISSION_S_BOX5MIN_F");
		ReplacePVR("pvr_mission_fr", "MISSION_S_RINGBOX_F");
		ReplacePVR("pvr_mission_fr", "MISSION_T_BOX_F");
	}
	else // Goal Ring ON
	{
		ReplacePVR("pvr_mission_goalring", "MISSION_S_BOX_F");
		ReplacePVR("pvr_mission_goalring", "MISSION_S_BOX25MIN_F");
		ReplacePVR("pvr_mission_goalring", "MISSION_S_BOX2MIN_F");
		ReplacePVR("pvr_mission_goalring", "MISSION_S_BOX3MIN_F");
		ReplacePVR("pvr_mission_goalring", "MISSION_S_BOX45MIN_F");
		ReplacePVR("pvr_mission_goalring", "MISSION_S_BOX4MIN_F");
		ReplacePVR("pvr_mission_goalring", "MISSION_S_BOX5MIN_F");
		ReplacePVR("pvr_mission_goalring", "MISSION_S_RINGBOX_F");
		ReplacePVR("pvr_mission_goalring", "MISSION_T_BOX_F");
	}
}

void LoadStageMissionPVRs(const char* path, const HelperFunctions& helperFunctions)
{
	ReplacePVR("pvr_mission_fr", "MISSION_A_BALRING_F");
	ReplacePVR("pvr_mission_fr", "MISSION_A_BALZERO_F");
	ReplacePVR("pvr_mission_fr", "MISSION_A_FIN_F");
	ReplacePVR("pvr_mission_fr", "MISSION_A_HOT_F");
	ReplacePVR("pvr_mission_fr", "MISSION_A_TWIN_F");
	ReplacePVR("pvr_mission_fr", "MISSION_BIG_1K_F");
	ReplacePVR("pvr_mission_fr", "MISSION_BIG_2K_F");
	ReplacePVR("pvr_mission_fr", "MISSION_BIG_FROG_F");
	ReplacePVR("pvr_mission_fr", "MISSION_G_103RING_F");
	ReplacePVR("pvr_mission_fr", "MISSION_G_103_F");
	ReplacePVR("pvr_mission_fr", "MISSION_G_104RING_F");
	ReplacePVR("pvr_mission_fr", "MISSION_G_104_F");
	ReplacePVR("pvr_mission_fr", "MISSION_G_105RING_F");
	ReplacePVR("pvr_mission_fr", "MISSION_G_105_F");
	ReplacePVR("pvr_mission_fr", "MISSION_G_EME_F");
	ReplacePVR("pvr_mission_fr", "MISSION_G_FIN_F");
	ReplacePVR("pvr_mission_fr", "MISSION_G_FROGRING_F");
	ReplacePVR("pvr_mission_fr", "MISSION_G_FROG_F");
	ReplacePVR("pvr_mission_fr", "MISSION_G_SONICDRING_F");
	ReplacePVR("pvr_mission_fr", "MISSION_G_HOT_F");
	ReplacePVR("pvr_mission_fr", "MISSION_G_RED_F");
	ReplacePVR("pvr_mission_fr", "MISSION_G_SONICD_F");
	ReplacePVR("pvr_mission_fr", "MISSION_G_WIN_F");
	ReplacePVR("pvr_mission_fr", "MISSION_K_1MIN_F");
	ReplacePVR("pvr_mission_fr", "MISSION_K_2MIN_F");
	ReplacePVR("pvr_mission_fr", "MISSION_K_3EME_F");
	ReplacePVR("pvr_mission_fr", "MISSION_K_NOHINT_F");
	ReplacePVR("pvr_mission_fr", "MISSION_S_EGGC_F");
	ReplacePVR("pvr_mission_fr", "MISSION_S_EMECASINO_F");
	ReplacePVR("pvr_mission_fr", "MISSION_S_EMESNOW_F");
	ReplacePVR("pvr_mission_fr", "MISSION_S_EMEWIND_F");
	ReplacePVR("pvr_mission_fr", "MISSION_S_FEGG_F");
	ReplacePVR("pvr_mission_fr", "MISSION_S_ISEKI_F");
	ReplacePVR("pvr_mission_fr", "MISSION_S_TAILS_F");
	ReplacePVR("pvr_mission_fr", "MISSION_T_EMECASINO_F");
	ReplacePVR("pvr_mission_fr", "MISSION_T_EMESNOW_F");
	ReplacePVR("pvr_mission_fr", "MISSION_T_EMEWIND_F");
	ReplacePVR("pvr_mission_fr", "MISSION_T_FASTEGG_F");
	ReplacePVR("pvr_mission_fr", "MISSION_T_FASTSONIC_F");
	ReplacePVR("pvr_mission_fr", "MISSION_T_MISS_F");
	ReplacePVR("pvr_mission_fr", "MISSION_T_RINGEGG_F");
	ReplacePVR("pvr_mission_fr", "MISSION_T_RINGSONIC_F");

	InitGoalRingModTextures(path, helperFunctions);
}

void LoadCommonPVRs(const char* path, const HelperFunctions& helperFunctions)
{
	ReplacePVR("pvr_common", "ABC_TXT");			// File select font
	ReplacePVR("pvr_common", "HYOJI_BALLS_E");		// Casinopolis ball counter
	ReplacePVR("pvr_common", "ST_064S_SCORE");		// Score in HUD
	ReplacePVR("pvr_common", "ST_128S_HPGEJI");		// Tornado's health bar story
	ReplacePVR("pvr_common", "STAFFROLL_TXT");

	if (GetBossTitlesStyle() == "HD GUI")
	{
		ReplacePVR("pvr_common", "B32ASCII");
	}
	else
	{
		ReplacePVR("pvr_common\\vanillaboss", "B32ASCII");
	}
}

void LoadTutorials(const HelperFunctions& helperFunctions)
{
	ReplaceTexPVM_HD_Rus("TUTOMSG_SONIC_F");	//Sonic's tutorial
	ReplaceTexPVM_HD_Rus("TUTOMSG_TAILS_F");	//Tails' tutorial
	ReplaceTexPVM_HD_Rus("TUTOMSG_KNUCKLES_F");	//Knuckles' tutorial
	ReplaceTexPVM_HD_Rus("TUTOMSG_AMY_F");		//Amy's tutorial
	ReplaceTexPVM_HD_Rus("TUTOMSG_BIG_F");		//Big's tutorial
	ReplaceTexPVM_HD_Rus("TUTOMSG_E102_F");		//Gamma's Tutorial
}

void LoadEmblemChallengeTextures(const char* path, const HelperFunctions& helperFunctions)
{
	ReplaceTex("AVA_EMBLEMVIEW_E", "HEAD_AMY", "modsCompatibility\\EmblemChallenge", "others", 10000617, 128, 32);
	ReplaceTex("AVA_EMBLEMVIEW_E", "select_amy", "modsCompatibility\\EmblemChallenge", "select_others", 10000615, 128, 16);
	ReplaceTex("AVA_EMBLEMVIEW_E", "select_sonic", "modsCompatibility\\EmblemChallenge", "sonic_a", 10000619, 128, 16);
	ReplaceTex("AVA_EMBLEMVIEW_E", "select_e-102", "modsCompatibility\\EmblemChallenge", "sonic_b", 10000620, 128, 16);
	ReplaceTex("AVA_EMBLEMVIEW_E", "select_big", "modsCompatibility\\EmblemChallenge", "sonic_c", 10000622, 128, 16);
}


void LoadTextures(const char* path, const HelperFunctions& helperFunctions)
{
	ReplacePVR("subtitle", "subtitle_eu");
	LoadStageMissionPVRs(path, helperFunctions);
	LoadCommonPVRs(path, helperFunctions);
	LoadTutorials(helperFunctions);

	//ReplaceTexPVM_HD_Rus("AVA_EMBLEMVIEW_E");		// Emblem stats view
	if (EmblemChallenge)
	{
		LoadEmblemChallengeTextures(path, helperFunctions);
	};	
}