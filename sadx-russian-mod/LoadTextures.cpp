#include "stdafx.h"

#include "Macros.h"


char pathbuf[MAX_PATH];
HMODULE GoalRing = GetModuleHandle(L"GoalRing"); // Init GoalRing Mod dll
HMODULE EmblemChallenge = GetModuleHandle(L"SADX_EmblemChallenge");	// Init Emblem Challenge dll


/* Depends on config */

void LoadUSStageBorders(const char* path, const HelperFunctions& helperFunctions)
{
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

void LoadJPStageBorders(const char* path, const HelperFunctions& helperFunctions)
{
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


/* Texture loading stuff */

void InitGoalRingModTextures(const char* path, const HelperFunctions& helperFunctions)
{
	if (!GoalRing) // Goal Ring OFF
	{
		ReplaceTexPVR_Mission("MISSION_S_BOX_F");
		ReplaceTexPVR_Mission("MISSION_S_BOX25MIN_F");
		ReplaceTexPVR_Mission("MISSION_S_BOX2MIN_F");
		ReplaceTexPVR_Mission("MISSION_S_BOX3MIN_F");
		ReplaceTexPVR_Mission("MISSION_S_BOX45MIN_F");
		ReplaceTexPVR_Mission("MISSION_S_BOX4MIN_F");
		ReplaceTexPVR_Mission("MISSION_S_BOX5MIN_F");
		ReplaceTexPVR_Mission("MISSION_S_RINGBOX_F");
		ReplaceTexPVR_Mission("MISSION_T_BOX_F");
	}
	else // Goal Ring ON
	{
		ReplacePNG_GoalRing("MISSION_S_BOX_F");
		ReplacePNG_GoalRing("MISSION_S_BOX25MIN_F");
		ReplacePNG_GoalRing("MISSION_S_BOX2MIN_F");
		ReplacePNG_GoalRing("MISSION_S_BOX3MIN_F");
		ReplacePNG_GoalRing("MISSION_S_BOX45MIN_F");
		ReplacePNG_GoalRing("MISSION_S_BOX4MIN_F");
		ReplacePNG_GoalRing("MISSION_S_BOX5MIN_F");
		ReplacePNG_GoalRing("MISSION_S_RINGBOX_F");
		ReplacePNG_GoalRing("MISSION_T_BOX_F");
	}
}

void LoadStageMissionPVRs(const char* path, const HelperFunctions& helperFunctions)
{
	ReplaceTexPVR_Mission("MISSION_A_BALRING_F");
	ReplaceTexPVR_Mission("MISSION_A_BALZERO_F");
	ReplaceTexPVR_Mission("MISSION_A_FIN_F");
	ReplaceTexPVR_Mission("MISSION_A_HOT_F");
	ReplaceTexPVR_Mission("MISSION_A_TWIN_F");
	ReplaceTexPVR_Mission("MISSION_BIG_1K_F");
	ReplaceTexPVR_Mission("MISSION_BIG_2K_F");
	ReplaceTexPVR_Mission("MISSION_BIG_FROG_F");
	ReplaceTexPVR_Mission("MISSION_G_103RING_F");
	ReplaceTexPVR_Mission("MISSION_G_103_F");
	ReplaceTexPVR_Mission("MISSION_G_104RING_F");
	ReplaceTexPVR_Mission("MISSION_G_104_F");
	ReplaceTexPVR_Mission("MISSION_G_105RING_F");
	ReplaceTexPVR_Mission("MISSION_G_105_F");
	ReplaceTexPVR_Mission("MISSION_G_EME_F");
	ReplaceTexPVR_Mission("MISSION_G_FIN_F");
	ReplaceTexPVR_Mission("MISSION_G_FROGRING_F");
	ReplaceTexPVR_Mission("MISSION_G_FROG_F");
	ReplaceTexPVR_Mission("MISSION_G_SONICDRING_F");
	ReplaceTexPVR_Mission("MISSION_G_HOT_F");
	ReplaceTexPVR_Mission("MISSION_G_RED_F");
	ReplaceTexPVR_Mission("MISSION_G_SONICD_F");
	ReplaceTexPVR_Mission("MISSION_G_WIN_F");
	ReplaceTexPVR_Mission("MISSION_K_1MIN_F");
	ReplaceTexPVR_Mission("MISSION_K_2MIN_F");
	ReplaceTexPVR_Mission("MISSION_K_3EME_F");
	ReplaceTexPVR_Mission("MISSION_K_NOHINT_F");
	ReplaceTexPVR_Mission("MISSION_S_EGGC_F");
	ReplaceTexPVR_Mission("MISSION_S_EMECASINO_F");
	ReplaceTexPVR_Mission("MISSION_S_EMESNOW_F");
	ReplaceTexPVR_Mission("MISSION_S_EMEWIND_F");
	ReplaceTexPVR_Mission("MISSION_S_FEGG_F");
	ReplaceTexPVR_Mission("MISSION_S_ISEKI_F");
	ReplaceTexPVR_Mission("MISSION_S_TAILS_F");
	ReplaceTexPVR_Mission("MISSION_T_EMECASINO_F");
	ReplaceTexPVR_Mission("MISSION_T_EMESNOW_F");
	ReplaceTexPVR_Mission("MISSION_T_EMEWIND_F");
	ReplaceTexPVR_Mission("MISSION_T_FASTEGG_F");
	ReplaceTexPVR_Mission("MISSION_T_FASTSONIC_F");
	ReplaceTexPVR_Mission("MISSION_T_MISS_F");
	ReplaceTexPVR_Mission("MISSION_T_RINGEGG_F");
	ReplaceTexPVR_Mission("MISSION_T_RINGSONIC_F");

	InitGoalRingModTextures(path, helperFunctions);
}

void LoadCommonPVRs(const char* path, const HelperFunctions& helperFunctions)
{
	ReplaceTexPVR_Common("ABC_TXT");			// File select font
	ReplaceTexPVR_Common("HYOJI_BALLS_E");		// Casinopolis ball counter
	ReplaceTexPVR_Common("B32ASCII");			// Boss name font
	ReplaceTexPVR_Common("ST_064S_SCORE");		// Score in HUD
	ReplaceTexPVR_Common("ST_128S_HPGEJI");		// Tornado's health bar story
	ReplaceTexPVR_Common("STAFFROLL_TXT");
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
	ReplacePNG_Subtitle("subtitle_eu");
	LoadStageMissionPVRs(path, helperFunctions);
	LoadCommonPVRs(path, helperFunctions);
	LoadTutorials(helperFunctions);

	//ReplaceTexPVM_HD_Rus("AVA_EMBLEMVIEW_E");		// Emblem stats view
	if (EmblemChallenge)
	{
		LoadEmblemChallengeTextures(path, helperFunctions);
	};
}