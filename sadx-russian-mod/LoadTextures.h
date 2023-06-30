#pragma once
#include "stdafx.h"
#include <SADXModLoader.h>

#include <cmath>
#include "Funcs.h"

void LoadTextures(const char* path, const HelperFunctions& helperFunctions)
{
	char pathbuf[MAX_PATH];
	HMODULE GoalRing = GetModuleHandle(L"GoalRing");			// Init GoalRing Mod dll
	HMODULE DConv = GetModuleHandle(L"DCMods_Main");			// Init Dreamcast Conversion dll	
	HMODULE EmblemChallenge = GetModuleHandle(L"SADX_EmblemChallenge");	// Init Emblem Challenge dll
	HMODULE HDGui = GetModuleHandle(L"HD_GUI");					// Init HD GUI

	ReplacePNG_Subtitle("subtitle_eu");

	if (GoalRing == nullptr) // Goal Ring OFF
	{
		/*ReplacePNG_MissionE("MISSION_S_BOX_E");
		ReplacePNG_MissionE("MISSION_S_BOX25MIN_E");
		ReplacePNG_MissionE("MISSION_S_BOX2MIN_E");
		ReplacePNG_MissionE("MISSION_S_BOX3MIN_E");
		ReplacePNG_MissionE("MISSION_S_BOX45MIN_E");
		ReplacePNG_MissionE("MISSION_S_BOX4MIN_E");
		ReplacePNG_MissionE("MISSION_S_BOX5MIN_E");
		ReplacePNG_MissionE("MISSION_S_RINGBOX_E");
		ReplacePNG_MissionE("MISSION_T_BOX_E");*/

		ReplacePNG_MissionF("MISSION_S_BOX_F");
		ReplacePNG_MissionF("MISSION_S_BOX25MIN_F");
		ReplacePNG_MissionF("MISSION_S_BOX2MIN_F");
		ReplacePNG_MissionF("MISSION_S_BOX3MIN_F");
		ReplacePNG_MissionF("MISSION_S_BOX45MIN_F");
		ReplacePNG_MissionF("MISSION_S_BOX4MIN_F");
		ReplacePNG_MissionF("MISSION_S_BOX5MIN_F");
		ReplacePNG_MissionF("MISSION_S_RINGBOX_F");
		ReplacePNG_MissionF("MISSION_T_BOX_F");
	}
	else // Goal Ring ON
	{
		/*ReplacePNG_GoalRing("MISSION_S_BOX_E");
		ReplacePNG_GoalRing("MISSION_S_BOX25MIN_E");
		ReplacePNG_GoalRing("MISSION_S_BOX2MIN_E");
		ReplacePNG_GoalRing("MISSION_S_BOX3MIN_E");
		ReplacePNG_GoalRing("MISSION_S_BOX45MIN_E");
		ReplacePNG_GoalRing("MISSION_S_BOX4MIN_E");
		ReplacePNG_GoalRing("MISSION_S_BOX5MIN_E");
		ReplacePNG_GoalRing("MISSION_S_RINGBOX_E");
		ReplacePNG_GoalRing("MISSION_T_BOX_E");*/

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

	#pragma region Common PVRs 
	ReplacePNG_Common("ABC_TXT");				// File select font
	ReplacePNG_Common("HYOJI_BALLS_E");			// Casinopolis ball counter
	ReplacePNG_Common("B32ASCII");				// Boss name font
	ReplacePNG_Common("ST_064S_SCORE");			// Score in HUD
	ReplacePNG_Common("ST_128S_HPGEJI");		// Tornado's health bar story
	ReplacePNG_Common("STAFFROLL_TXT");
	#pragma endregion

	#pragma region Stage missions PVRs
	/*ReplacePNG_MissionE("MISSION_A_BALRING_E");
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
	ReplacePNG_MissionE("MISSION_T_RINGSONIC_E");*/

	ReplacePNG_MissionF("MISSION_A_BALRING_F");
	ReplacePNG_MissionF("MISSION_A_BALZERO_F");
	ReplacePNG_MissionF("MISSION_A_FIN_F");
	ReplacePNG_MissionF("MISSION_A_HOT_F");
	ReplacePNG_MissionF("MISSION_A_TWIN_F");
	ReplacePNG_MissionF("MISSION_BIG_1K_F");
	ReplacePNG_MissionF("MISSION_BIG_2K_F");
	ReplacePNG_MissionF("MISSION_BIG_FROG_F");
	ReplacePNG_MissionF("MISSION_G_103RING_F");
	ReplacePNG_MissionF("MISSION_G_103_F");
	ReplacePNG_MissionF("MISSION_G_104RING_F");
	ReplacePNG_MissionF("MISSION_G_104_F");
	ReplacePNG_MissionF("MISSION_G_105RING_F");
	ReplacePNG_MissionF("MISSION_G_105_F");
	ReplacePNG_MissionF("MISSION_G_EME_F");
	ReplacePNG_MissionF("MISSION_G_FIN_F");
	ReplacePNG_MissionF("MISSION_G_FROGRING_F");
	ReplacePNG_MissionF("MISSION_G_FROG_F");
	ReplacePNG_MissionF("MISSION_G_SONICDRING_F");
	ReplacePNG_MissionF("MISSION_G_HOT_F");
	ReplacePNG_MissionF("MISSION_G_RED_F");
	ReplacePNG_MissionF("MISSION_G_SONICD_F");
	ReplacePNG_MissionF("MISSION_G_WIN_F");
	ReplacePNG_MissionF("MISSION_K_1MIN_F");
	ReplacePNG_MissionF("MISSION_K_2MIN_F");
	ReplacePNG_MissionF("MISSION_K_3EME_F");
	ReplacePNG_MissionF("MISSION_K_NOHINT_F");
	ReplacePNG_MissionF("MISSION_S_EGGC_F");
	ReplacePNG_MissionF("MISSION_S_EMECASINO_F");
	ReplacePNG_MissionF("MISSION_S_EMESNOW_F");
	ReplacePNG_MissionF("MISSION_S_EMEWIND_F");
	ReplacePNG_MissionF("MISSION_S_FEGG_F");
	ReplacePNG_MissionF("MISSION_S_ISEKI_F");
	ReplacePNG_MissionF("MISSION_S_TAILS_F");
	ReplacePNG_MissionF("MISSION_T_EMECASINO_F");
	ReplacePNG_MissionF("MISSION_T_EMESNOW_F");
	ReplacePNG_MissionF("MISSION_T_EMEWIND_F");
	ReplacePNG_MissionF("MISSION_T_FASTEGG_F");
	ReplacePNG_MissionF("MISSION_T_FASTSONIC_F");
	ReplacePNG_MissionF("MISSION_T_MISS_F");
	ReplacePNG_MissionF("MISSION_T_RINGEGG_F");
	ReplacePNG_MissionF("MISSION_T_RINGSONIC_F");
	#pragma endregion

	#pragma region Menus
	//ReplacePVM_HD_Rus("SEGALOGO_E");			// SEGA Logo Screen

	//ReplacePVM_HD_Rus("AVA_CHSEL_E");			// Character Select Circle
	//ReplacePVM_HD_Rus("AVA_DLG_E");				// Many texts in menu
	if (EmblemChallenge == nullptr)
		ReplacePVM_HD_Rus("AVA_EMBLEMVIEW_E");		// Emblem stats view
	else ReplacePVM("AVA_EMBLEMVIEW_E", "AVA_EMBLEMVIEW_E_EMB");
	//ReplacePVM_HD_Rus("AVA_FILESEL_E");			// File select menu
	//ReplacePVM_HD_Rus("AVA_FSDLG_E");			// Delete save file
	//ReplacePVM_HD_Rus("AVA_NEW16NO");			// Results in the Trial
	//ReplacePVM_HD_Rus("AVA_OPTION_E");			// Options menu

	/*if(HDGui) ReplacePVM_HD_Rus("AVA_TITLE_CMN");			*/// Title screen
	//ReplacePVM_HD_Rus("AVA_TITLE_BACK_E");		// Menu back
	//ReplacePVM_HD_Rus("AVA_SNDTEST_E");			// Sound test menu
	//ReplacePVM_HD_Rus("AVA_STNAM_E");			// Stage names in File Select
	//ReplacePVM_HD_Rus("AVA_TITLE_E");			// Main menu
	//ReplacePVM_HD_Rus("AVA_TRIALACTSEL_E");		// Trial select menu
	//ReplacePVM_HD_Rus("AVA_VMSSEL_E");			// Memory card select (because MS_TX_e)
	//ReplacePVM_HD_Rus("M_CHNAM");				// Character names in char select
	//ReplacePVM_HD_Rus("TX_CHNAM_E");			// Character names in ??

	//ReplacePVM_Rus("GGMENU_TEXLIST_US");		// GG Pause menu
	#pragma endregion 

	#pragma region Tutorials
	ReplacePVM_HD_Rus("TUTOMSG_SONIC_F");		//Sonic's tutorial
	ReplacePVM_HD_Rus("TUTOMSG_TAILS_F");		//Tails' tutorial
	ReplacePVM_HD_Rus("TUTOMSG_KNUCKLES_F");	//Knuckles' tutorial
	ReplacePVM_HD_Rus("TUTOMSG_AMY_F");			//Amy's tutorial
	ReplacePVM_HD_Rus("TUTOMSG_BIG_F");			//Big's tutorial
	ReplacePVM_HD_Rus("TUTOMSG_E102_F");		//Gamma's Tutorial
	//ReplacePVM_HD_Rus("TUTO_CMN_F");			//Tutorial common textures
	#pragma endregion

	#pragma region Maps
	//ReplacePVM_HD_Rus("MAP_EC_A");				//Egg Carrier's bridge (transformed) area
	//ReplacePVM_HD_Rus("MAP_EC_B");				//Egg Carrier's bridge area
	//ReplacePVM_HD_Rus("MAP_EC_H");				//Egg Carrier's inner hall area
	//ReplacePVM_HD_Rus("MAP_MR_A");				//Mystic Ruins' Angel Island area
	//ReplacePVM_HD_Rus("MAP_MR_J");				//Mystic Ruins' jungle area
	//ReplacePVM_HD_Rus("MAP_MR_S");				//Myscit Ruins' station area
	//ReplacePVM_HD_Rus("MAP_PAST_E");			//Past's altar area
	//ReplacePVM_HD_Rus("MAP_PAST_S");			//Past's city area
	//ReplacePVM_HD_Rus("MAP_SS");				//Station Square area
	#pragma endregion

	#pragma region Scores
	//ReplacePVM_HD_Rus("SCORE_ACT_E");			//Action stage score
	//ReplacePVM_HD_Rus("SCORE_BOARD_E");			//Board stage score
	//ReplacePVM_HD_Rus("SCORE_BOSS_E");			//Boss attack score
	//ReplacePVM_HD_Rus("SCORE_CART_E");			//Twincle Circuit score
	//ReplacePVM_HD_Rus("SCORE_MOLE_E");			//Hedgehog Hammer score
	//ReplacePVM_HD_Rus("SCORE_RESULT_E");		//Action stage mission score
	//ReplacePVM_HD_Rus("SCORE_SHOOT_E");			//Sky Chase score
	#pragma endregion

	#pragma region Gameplay
	//ReplacePVM_HD_Rus("BOARD_SCORE");
	//ReplacePVM_HD_Rus("CHAOS_LIFEGAUGE");		// Boss' Lifebar
	//ReplacePVM_HD_Rus("CON_REGULAR_E");			// HUD stuff
	//ReplacePVM_HD_Rus("E102TIME");				// E102 Timer
	//ReplacePVM_HD_Rus("FISHING");				// Big's fishing stuff
	//ReplacePVM_HD_Rus("GAMEOVER_E");			// Game Over Screen
	//ReplacePVM_HD_Rus("MILESRACE");				// Tails' stages stuff
	//ReplacePVM_HD_Rus("MIS_C_EN");				// Mission mode screen
	//ReplacePVM_HD_Rus("MIS_P");					// Mission mode interface
	//ReplacePVM_HD_Rus("OBJ_MINI_CART");			// Cart mini game
	//ReplacePVM_HD_Rus("SHOOTING0");				// Sky Chase mini game

	//ReplacePVM_Rus("EFF_REGULAR");				// Gamma's HIT texture
	//ReplacePVM_Rus("MOGURATATAKI");				// Hedgehog Hammer font
	#pragma endregion

	#pragma region TGS Menu
	//ReplacePVM_Rus("C_SELECT1");				// Character Select TGS
	//ReplacePVM_Rus("C_SELECT2");				// Character Select TGS
	//ReplacePVM_Rus("LOADING");					// Loading Screen TGS
	//ReplacePVM_Rus("TGS_SOUSA_A");				// Tutorial TGS
	//ReplacePVM_Rus("TGS_SOUSA_B");				// Tutorial TGS
	//ReplacePVM_Rus("TGS_SOUSA_E");				// Tutorial TGS
	//ReplacePVM_Rus("TGS_SOUSA_K");				// Tutorial TGS
	//ReplacePVM_Rus("TGS_SOUSA_S");				// Tutorial TGS
	//ReplacePVM_Rus("TGS_SOUSA_T");				// Tutorial TGS
	//ReplacePVM_Rus("TITLE");					// Title Screen TGS
	#pragma endregion

	#pragma region Chao
	//ReplacePVM_Rus("AL_GARDEN00SS_2D");			// Chao SA2B Hints
	//ReplacePVM_Rus("AL_STG_KINDER_AD_TEX");		// Chao SA2B Kindergarden
	//ReplacePVM_Rus("AL_ENT_CHAR_E_TEX");		// Chao SA2B ??
	//ReplacePVM_Rus("AL_ENT_TITLE_E_TEX");		// Chao SA2B Race Course
	//ReplacePVM_Rus("AL_TEX_ENT_COMMON_EN");		// Chao SA2B ??
	//ReplacePVM_Rus("AL_TEX_ODEKAKE_MENU_EN");	// Chao SA2B Machine
	//ReplacePVM_Rus("AL_TEX_COMMON");			// Chao SA2B ??

	//ReplacePVM_Rus("OBJ_AL_RACE_E");
	//ReplacePVM_Rus("OBJ_AL_RACE");				// Chao Race Common Obj Textures 
	//ReplacePVM_Rus("GARDEN00SS");				// Chao Island board
	#pragma endregion
}