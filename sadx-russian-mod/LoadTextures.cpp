#include "stdafx.h"
#include <SADXModLoader.h>

#include "Macros.h"

void LoadTextures(const char* path, const HelperFunctions& helperFunctions)
{
	char pathbuf[MAX_PATH];
	HMODULE GoalRing = GetModuleHandle(L"GoalRing");			// Init GoalRing Mod dll
	HMODULE DConv = GetModuleHandle(L"DCMods_Main");			// Init Dreamcast Conversion dll	
	HMODULE EmblemChallenge = GetModuleHandle(L"SADX_EmblemChallenge");	// Init Emblem Challenge dll

	ReplacePNG_Subtitle("subtitle_eu");

	if (GoalRing == nullptr) // Goal Ring OFF
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

#pragma region Common PVRs 
	ReplaceTexPVR_Common("ABC_TXT");				// File select font
	ReplaceTexPVR_Common("HYOJI_BALLS_E");			// Casinopolis ball counter
	ReplaceTexPVR_Common("B32ASCII");				// Boss name font
	ReplaceTexPVR_Common("ST_064S_SCORE");			// Score in HUD
	ReplaceTexPVR_Common("ST_128S_HPGEJI");		// Tornado's health bar story
	ReplaceTexPVR_Common("STAFFROLL_TXT");
#pragma endregion

#pragma region Stage missions PVRs
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
#pragma endregion

#pragma region Menus
	//ReplaceTexPVM_HD_Rus("AVA_EMBLEMVIEW_E");		// Emblem stats view
	if (EmblemChallenge) {
		ReplaceTex("AVA_EMBLEMVIEW_E", "HEAD_AMY", "modsCompatibility\\EmblemChallenge", "others", 10000617, 128, 32);
		ReplaceTex("AVA_EMBLEMVIEW_E", "select_amy", "modsCompatibility\\EmblemChallenge", "select_others", 10000615, 128, 16);
		ReplaceTex("AVA_EMBLEMVIEW_E", "select_sonic", "modsCompatibility\\EmblemChallenge", "sonic_a", 10000619, 128, 16);
		ReplaceTex("AVA_EMBLEMVIEW_E", "select_e-102", "modsCompatibility\\EmblemChallenge", "sonic_b", 10000620, 128, 16);
		ReplaceTex("AVA_EMBLEMVIEW_E", "select_big", "modsCompatibility\\EmblemChallenge", "sonic_c", 10000622, 128, 16);
	};
#pragma endregion 

#pragma region Tutorials
	ReplaceTexPVM_HD_Rus("TUTOMSG_SONIC_F");		//Sonic's tutorial
	ReplaceTexPVM_HD_Rus("TUTOMSG_TAILS_F");		//Tails' tutorial
	ReplaceTexPVM_HD_Rus("TUTOMSG_KNUCKLES_F");	//Knuckles' tutorial
	ReplaceTexPVM_HD_Rus("TUTOMSG_AMY_F");			//Amy's tutorial
	ReplaceTexPVM_HD_Rus("TUTOMSG_BIG_F");			//Big's tutorial
	ReplaceTexPVM_HD_Rus("TUTOMSG_E102_F");		//Gamma's Tutorial
#pragma endregion
}