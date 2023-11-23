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
	if (EmblemChallenge == nullptr)
		ReplacePVM_HD_Rus("AVA_EMBLEMVIEW_E");		// Emblem stats view
	else ReplacePVM("AVA_EMBLEMVIEW_E", "AVA_EMBLEMVIEW_E_EMB");	
#pragma endregion 

#pragma region Tutorials
	ReplacePVM_HD_Rus("TUTOMSG_SONIC_F");		//Sonic's tutorial
	ReplacePVM_HD_Rus("TUTOMSG_TAILS_F");		//Tails' tutorial
	ReplacePVM_HD_Rus("TUTOMSG_KNUCKLES_F");	//Knuckles' tutorial
	ReplacePVM_HD_Rus("TUTOMSG_AMY_F");			//Amy's tutorial
	ReplacePVM_HD_Rus("TUTOMSG_BIG_F");			//Big's tutorial
	ReplacePVM_HD_Rus("TUTOMSG_E102_F");		//Gamma's Tutorial
#pragma endregion
}