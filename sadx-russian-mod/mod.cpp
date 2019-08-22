#include "stdafx.h"
#include "HintMessages.h"
#include <SADXModLoader.h>
#include <IniFile.hpp>
#include <cmath>

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

#define ReplacePNG_MissionJ(a) do { \
	_snprintf_s(pathbuf, LengthOfArray(pathbuf), "%s\\textures\\pvr_mission_jp\\index.txt", path); \
	helperFunctions.ReplaceFile("system\\" a ".PVR", pathbuf); \
} while (0)

#define ReplacePNG_StageE(a) do { \
	_snprintf_s(pathbuf, LengthOfArray(pathbuf), "%s\\textures\\pvr_stage_en\\index.txt", path); \
	helperFunctions.ReplaceFile("system\\" a ".PVR", pathbuf); \
} while (0)

#define ReplacePNG_StageJ(a) do { \
	_snprintf_s(pathbuf, LengthOfArray(pathbuf), "%s\\textures\\pvr_stage_jp\\index.txt", path); \
	helperFunctions.ReplaceFile("system\\" a ".PVR", pathbuf); \
} while (0)

#define ReplacePNG_Subtitle(a) do { \
	_snprintf_s(pathbuf, LengthOfArray(pathbuf), "%s\\textures\\subtitle\\index.txt", path); \
	helperFunctions.ReplaceFile("system\\" a ".PVR", pathbuf); \
} while (0)

#define ReplacePVM_HD_Rus(a) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" a "_HD_RUS.PVM") \

#define ReplacePVM_Rus(a) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" a "_RUS.PVM") \

#define ReplacePVM(a, b) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" b ".PVM") \

static bool TGS_Selectors = false;
static bool DreamcastChaoIcon = false;
static bool StartButton = false;

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
		HMODULE GoalRing = GetModuleHandle(L"GoalRing");

		LoadChaoGardenHintMessages();

		#pragma region Ini Configuration
		const IniFile* config = new IniFile(std::string(path) + "\\config.ini");

		TGS_Selectors = config->getBool("Customs", "TGS_Selectors", true);
		DreamcastChaoIcon = config->getBool("Customs", "DreamcastChaoIcon", true);
		StartButton = config->getBool("Customs", "StartButton", true);

		//TGS
		if (TGS_Selectors) {
			ReplacePVM("B_CHNAM_E", "B_CHNAM_E_TGS");
			ReplacePVM("AVA_METAL_SONIC", "AVA_METAL_SONIC_TGS");
		}
		else {
			ReplacePVM("B_CHNAM_E", "B_CHNAM_E_HD");
			ReplacePVM("AVA_METAL_SONIC", "AVA_METAL_SONIC_DX");
		}

		//Chao Garden
		if (DreamcastChaoIcon)
				ReplacePVM("CHAO_OBJECT", "CHAO_OBJECT_DC");
		else	ReplacePVM("CHAO_OBJECT", "CHAO_OBJECT_DX");

		//Start Button
		if (StartButton) {
			ReplacePVM("PRESSSTART", "PRESSSTART_Enter");
			ReplacePVM("AVA_GTITLE0_ES", "AVA_GTITLE0_ES_Enter");
		}
		else {			
			ReplacePVM("PRESSSTART", "PRESSSTART_Start");
			ReplacePVM("AVA_GTITLE0_ES", "AVA_GTITLE0_ES_Start");
		}
		#pragma endregion

		#pragma region Common PVRs 
		ReplacePNG_Common("ABC_TXT");
		ReplacePNG_Common("HYOJI_BALLS_E");
		ReplacePNG_Common("HYOJI_EMBLEM0");
		ReplacePNG_Common("HYOJI_EMBLEM1");
		ReplacePNG_Common("B32ASCII");
		ReplacePNG_Common("B32ASCII_J");
		ReplacePNG_Common("STAFFROLL_TXT");
		ReplacePNG_Common("ST_064S_LOCKA");
		ReplacePNG_Common("ST_064S_LOCKB");
		ReplacePNG_Common("ST_064S_LOCKC");
		ReplacePNG_Common("ST_064S_SCORE");
		ReplacePNG_Common("ST_128S_HPGEJI");
		#pragma endregion

		#pragma region English stage PVRs
		ReplacePNG_StageE("A_STAGE01_E");
		ReplacePNG_StageE("A_STAGE02_E");
		ReplacePNG_StageE("A_STAGE03_E");
		ReplacePNG_StageE("B_STAGE01_E");
		ReplacePNG_StageE("B_STAGE02_E");
		ReplacePNG_StageE("B_STAGE03_E");
		ReplacePNG_StageE("B_STAGE04_E");
		ReplacePNG_StageE("E_STAGE01_E");
		ReplacePNG_StageE("E_STAGE02_E");
		ReplacePNG_StageE("E_STAGE03_E");
		ReplacePNG_StageE("E_STAGE04_E");
		ReplacePNG_StageE("E_STAGE05_E");
		ReplacePNG_StageE("K_STAGE01_E");
		ReplacePNG_StageE("K_STAGE02_E");
		ReplacePNG_StageE("K_STAGE03_E");
		ReplacePNG_StageE("K_STAGE04_E");
		ReplacePNG_StageE("K_STAGE05_E");
		ReplacePNG_StageE("M_STAGE01_E");
		ReplacePNG_StageE("M_STAGE02_E");
		ReplacePNG_StageE("M_STAGE03_E");
		ReplacePNG_StageE("M_STAGE04_E");
		ReplacePNG_StageE("M_STAGE05_E");
		ReplacePNG_StageE("ST_STAGE01_E");
		ReplacePNG_StageE("ST_STAGE02_E");
		ReplacePNG_StageE("ST_STAGE03_E");
		ReplacePNG_StageE("ST_STAGE04_E");
		ReplacePNG_StageE("ST_STAGE05_E");
		ReplacePNG_StageE("S_STAGE01_E");
		ReplacePNG_StageE("S_STAGE02_E");
		ReplacePNG_StageE("S_STAGE03_E");
		ReplacePNG_StageE("S_STAGE04_E");
		ReplacePNG_StageE("S_STAGE05_E");
		ReplacePNG_StageE("S_STAGE06_E");
		ReplacePNG_StageE("S_STAGE07_E");
		ReplacePNG_StageE("S_STAGE08_E");
		ReplacePNG_StageE("S_STAGE09_E");
		ReplacePNG_StageE("S_STAGE10_E");
		ReplacePNG_StageE("T_EGGCARRIER_E");
		ReplacePNG_StageE("T_MISTICRUIN_E");
		ReplacePNG_StageE("T_STATIONSQUARE_E");
		#pragma endregion

		#pragma region Japanese stage PVRs
		ReplacePNG_StageJ("A_STAGE01");
		ReplacePNG_StageJ("A_STAGE02");
		ReplacePNG_StageJ("A_STAGE03");
		ReplacePNG_StageJ("B_STAGE01");
		ReplacePNG_StageJ("B_STAGE02");
		ReplacePNG_StageJ("B_STAGE03");
		ReplacePNG_StageJ("B_STAGE04");
		ReplacePNG_StageJ("E_STAGE01");
		ReplacePNG_StageJ("E_STAGE02");
		ReplacePNG_StageJ("E_STAGE03");
		ReplacePNG_StageJ("E_STAGE04");
		ReplacePNG_StageJ("E_STAGE05");
		ReplacePNG_StageJ("K_STAGE01");
		ReplacePNG_StageJ("K_STAGE02");
		ReplacePNG_StageJ("K_STAGE03");
		ReplacePNG_StageJ("K_STAGE04");
		ReplacePNG_StageJ("K_STAGE05");
		ReplacePNG_StageJ("M_STAGE01");
		ReplacePNG_StageJ("M_STAGE02");
		ReplacePNG_StageJ("M_STAGE03");
		ReplacePNG_StageJ("M_STAGE04");
		ReplacePNG_StageJ("M_STAGE05");
		ReplacePNG_StageJ("ST_STAGE01");
		ReplacePNG_StageJ("ST_STAGE02");
		ReplacePNG_StageJ("ST_STAGE03");
		ReplacePNG_StageJ("ST_STAGE04");
		ReplacePNG_StageJ("ST_STAGE05");
		ReplacePNG_StageJ("S_STAGE01");
		ReplacePNG_StageJ("S_STAGE02");
		ReplacePNG_StageJ("S_STAGE03");
		ReplacePNG_StageJ("S_STAGE04");
		ReplacePNG_StageJ("S_STAGE05");
		ReplacePNG_StageJ("S_STAGE06");
		ReplacePNG_StageJ("S_STAGE07");
		ReplacePNG_StageJ("S_STAGE08");
		ReplacePNG_StageJ("S_STAGE09");
		ReplacePNG_StageJ("S_STAGE10");
		ReplacePNG_StageJ("T_EGGCARRIER");
		ReplacePNG_StageJ("T_MISTICRUIN");
		ReplacePNG_StageJ("T_STATIONSQUARE");
		#pragma endregion

		#pragma region English mission PVRs
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

		#pragma region Russian menu textures
		ReplacePVM_HD_Rus("SEGALOGO_E");

		ReplacePVM_HD_Rus("AVA_CHSEL_E");
		ReplacePVM_HD_Rus("AVA_DLG_E");
		ReplacePVM_HD_Rus("AVA_EMBLEMVIEW_E");
		ReplacePVM_HD_Rus("AVA_FILESEL_E");
		ReplacePVM_HD_Rus("AVA_FSDLG_E_E");
		
		ReplacePVM_HD_Rus("AVA_OPTION_E");
		ReplacePVM_HD_Rus("AVA_SNDTEST_E");
		ReplacePVM_HD_Rus("AVA_STNAM_E");
		ReplacePVM_HD_Rus("AVA_TITLE_E");
		ReplacePVM_HD_Rus("AVA_TRIALACTSEL_E");
		ReplacePVM_HD_Rus("AVA_VMSSEL_E");
		ReplacePVM_HD_Rus("M_CHNAM");
		ReplacePVM_HD_Rus("TX_CHNAM_E");
		#pragma endregion 
		
		#pragma region Russian tutorials
		ReplacePVM_HD_Rus("TUTOMSG_SONIC_E");
		ReplacePVM_HD_Rus("TUTOMSG_TAILS_E");
		ReplacePVM_HD_Rus("TUTOMSG_KNUCKLES_E");
		ReplacePVM_HD_Rus("TUTOMSG_AMY_E");
		ReplacePVM_HD_Rus("TUTOMSG_BIG_E");
		ReplacePVM_HD_Rus("TUTOMSG_E102_E");
		ReplacePVM_HD_Rus("TUTO_CMN_E"); //25
		#pragma endregion

		#pragma region Russian maps
		ReplacePVM_HD_Rus("MAP_EC_A");
		ReplacePVM_HD_Rus("MAP_EC_B");
		ReplacePVM_HD_Rus("MAP_EC_H");
		ReplacePVM_HD_Rus("MAP_MR_A");
		ReplacePVM_HD_Rus("MAP_MR_J");
		ReplacePVM_HD_Rus("MAP_MR_S");
		ReplacePVM_HD_Rus("MAP_PAST_E");
		ReplacePVM_HD_Rus("MAP_PAST_S");
		ReplacePVM_HD_Rus("MAP_SS"); //34
		#pragma endregion

		#pragma region Russian Scores
		ReplacePVM_HD_Rus("SCORE_ACT_E");
		ReplacePVM_HD_Rus("SCORE_BOARD_E");
		ReplacePVM_HD_Rus("SCORE_BOSS_E");
		ReplacePVM_HD_Rus("SCORE_CART_E");
		ReplacePVM_HD_Rus("SCORE_MOLE_E");
		ReplacePVM_HD_Rus("SCORE_RESULT_E");
		ReplacePVM_HD_Rus("SCORE_SHOOT_E"); //41
		#pragma endregion

		#pragma region Russian Gameplay
		ReplacePVM_HD_Rus("BOARD_SCORE");
		ReplacePVM_HD_Rus("CHAOS_LIFEGAUGE");
		ReplacePVM_HD_Rus("CON_REGULAR_E");
		ReplacePVM_HD_Rus("E102TIME");
		ReplacePVM_HD_Rus("FISHING");
		ReplacePVM_HD_Rus("GAMEOVER_E");
		ReplacePVM_HD_Rus("MILESRACE");
		ReplacePVM_HD_Rus("MIS_C_EN");
		ReplacePVM_HD_Rus("MIS_P");
		ReplacePVM_HD_Rus("OBJ_MINI_CART");
		ReplacePVM_HD_Rus("SHOOTING0");

		ReplacePVM_Rus("MOGURATATAKI");
		#pragma endregion

		#pragma region Russian TGS Menu
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

		#pragma region Russian Chao
		ReplacePVM_Rus("AL_GARDEN00SS_2D");
		ReplacePVM_Rus("AL_STG_KINDER_AD_TEX");
		ReplacePVM_Rus("AL_ENT_CHAR_E_TEX");
		ReplacePVM_Rus("AL_ENT_TITLE_E_TEX");
		ReplacePVM_Rus("AL_TEX_ENT_COMMON_EN");
		ReplacePVM_Rus("AL_TEX_ODEKAKE_MENU_EN");
		ReplacePVM_Rus("AL_TEX_COMMON");

		LoadChaoGardenHintMessages();
		
	#pragma endregion
	
		
	} 
	
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}