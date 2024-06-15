#include "stdafx.h"
#include "LoadedMods.h"
#include "ModConfig.h"


char pathbuf[MAX_PATH];


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

void LoadStageBorders(const char* path, const HelperFunctions& helperFunctions)
{
	if (Config::StageTitlesStyle == "JP")
	{
		LoadJPStageBorders(path, helperFunctions);
	}
	else
	{
		LoadUSStageBorders(path, helperFunctions);
	}
}


void InitGoalRingModTextures(const char* path, const HelperFunctions& helperFunctions)
{
	if (LoadedMods::GoalRing)	// Goal Ring ON
	{
		ReplacePVR("pvr_mission_goalring_sa2", "MISSION_S_BOX_F");
		ReplacePVR("pvr_mission_goalring_sa2", "MISSION_S_BOX25MIN_F");
		ReplacePVR("pvr_mission_goalring_sa2", "MISSION_S_BOX2MIN_F");
		ReplacePVR("pvr_mission_goalring_sa2", "MISSION_S_BOX3MIN_F");
		ReplacePVR("pvr_mission_goalring_sa2", "MISSION_S_BOX45MIN_F");
		ReplacePVR("pvr_mission_goalring_sa2", "MISSION_S_BOX4MIN_F");
		ReplacePVR("pvr_mission_goalring_sa2", "MISSION_S_BOX5MIN_F");
		ReplacePVR("pvr_mission_goalring_sa2", "MISSION_S_RINGBOX_F");
		ReplacePVR("pvr_mission_goalring_sa2", "MISSION_T_BOX_F");
	}
	else if (LoadedMods::GoalRingSA1)	//Goal Ring SA1 ON
	{
		ReplacePVR("pvr_mission_goalring_sa1", "MISSION_S_BOX_F");
		ReplacePVR("pvr_mission_goalring_sa1", "MISSION_S_BOX25MIN_F");
		ReplacePVR("pvr_mission_goalring_sa1", "MISSION_S_BOX2MIN_F");
		ReplacePVR("pvr_mission_goalring_sa1", "MISSION_S_BOX3MIN_F");
		ReplacePVR("pvr_mission_goalring_sa1", "MISSION_S_BOX45MIN_F");
		ReplacePVR("pvr_mission_goalring_sa1", "MISSION_S_BOX4MIN_F");
		ReplacePVR("pvr_mission_goalring_sa1", "MISSION_S_BOX5MIN_F");
		ReplacePVR("pvr_mission_goalring_sa1", "MISSION_S_RINGBOX_F");
		ReplacePVR("pvr_mission_goalring_sa1", "MISSION_T_BOX_F");
	}
	else	// Goal Ring OFF
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

	if (Config::BossTitlesStyle == "HD GUI")
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

void LoadTGSSelectors(const HelperFunctions& helperFunctions)
{
	if (Config::TGS_Selectors == "TGS")
	{
		ReplaceTexPVM("B_CHNAM_E", "B_CHNAM_E_TGS");
		ReplaceTexPVM("AVA_METAL_SONIC", "AVA_METAL_SONIC_TGS");
	}
	else if (Config::TGS_Selectors == "Vanilla")
	{
		ReplaceTexPVM("B_CHNAM_E", "B_CHNAM_E_HD");
		ReplaceTexPVM("AVA_METAL_SONIC", "AVA_METAL_SONIC_DX");
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

void LoadDreamcastChaoIcon(const char* path, const HelperFunctions& helperFunctions)
{
	ReplaceTex("CHAO_OBJECT", "al_ws10", "config\\chaoPortalsIcons", "eggCarrier_dc", 504562, 128, 128);
	ReplaceTex("CHAO_OBJECT", "al_ws11", "config\\chaoPortalsIcons", "mysticRuins_dc", 504564, 128, 128);
	ReplaceTex("CHAO_OBJECT", "al_ws12", "config\\chaoPortalsIcons", "stationSquare_dc", 504566, 128, 128);

	ReplaceTex("AL_DX_OBJ_CMN", "al_ws10", "config\\chaoPortalsIcons", "eggCarrier_dc", 1100078, 128, 128);
	ReplaceTex("AL_DX_OBJ_CMN", "al_ws11", "config\\chaoPortalsIcons", "mysticRuins_dc", 1100079, 128, 128);
	ReplaceTex("AL_DX_OBJ_CMN", "al_ws12", "config\\chaoPortalsIcons", "stationSquare_dc", 1100080, 128, 128);
}


void LoadTextures(const char* path, const HelperFunctions& helperFunctions)
{
	ReplacePVR("subtitle", "subtitle_eu");
	LoadStageBorders(path, helperFunctions);
	LoadStageMissionPVRs(path, helperFunctions);
	LoadCommonPVRs(path, helperFunctions);
	LoadTutorials(helperFunctions);
	LoadTGSSelectors(helperFunctions);

	ReplaceTexPVM_HD_Rus("GG_TEXLIST_FR");
	if (Config::AltGGHelp)
	{
		LoadAlternateGGHints(path, helperFunctions);
	}

	if (Config::DreamcastChaoIcon == "DC")
	{
		LoadDreamcastChaoIcon(path, helperFunctions);
	}

	if (LoadedMods::EmblemChallenge)
	{
		LoadEmblemChallengeTextures(path, helperFunctions);
	};	

	if (LoadedMods::DreamcastConversion)
	{
		ReplaceTex("PRESSSTART", "hyoji_pressstart", "config\\startButton\\demo", "start_dc", 5000900, 256, 32);
	};
}