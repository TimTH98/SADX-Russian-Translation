#include "stdafx.h"

#include "SADXEventFunctions.h"
#include "SADXEventList.h"
#include "SADXEventVariables.h"
#include "ModConfig.h"


void SetCustomCutsceneTimings(const char* path, const HelperFunctions& helperFunctions)
{
	CutsceneDataList[0x0006]->Function = ev0006_s_poolsidewithtails;
	CutsceneDataList[0x0008]->Function = ev0008_s_chaos1;
	CutsceneDataList[0x000C]->Function = ev000C_s_afterchaos4;
	CutsceneDataList[0x0012]->Function = ev0012_s_meetingamy;
	CutsceneDataList[0x0013]->Function = ev0013_s_beforetwinklepark;
	CutsceneDataList[0x001C]->Function = ev001C_s_beforechaos6;
	CutsceneDataList[0x001D]->Function = ev001D_s_afterchaos6;
	CutsceneDataList[0x001E]->Function = ev001E_s_lostworld;
	
	CutsceneDataList[0x0032]->Function = ev0032_t_meetingsonic;
	CutsceneDataList[0x0033]->Function = ev0033_t_egghornet;
	CutsceneDataList[0x0034]->Function = ev0034_t_chaos1;
	CutsceneDataList[0x003A]->Function = ev003A_t_afterchaos4;
	CutsceneDataList[0x004B]->Function = ev004B_t_eggmantakesbirdie;
	CutsceneDataList[0x0050]->Function = ev0050_t_eggwalker;
	CutsceneDataList[0x0051]->Function = ev0051_t_walkerdefeated;

	CutsceneDataList[0x0060]->Function = ev0060_a_intro1;
	CutsceneDataList[0x0061]->Function = ev0061_a_intro2;
	CutsceneDataList[0x0062]->Function = ev0062_a_meetsonic;

	CutsceneDataList[0x0099]->Function = ev0099_k_beforechaos6;

	CutsceneDataList[0x00B4]->Function = ev00B4_e_e101;
	CutsceneDataList[0x00B7]->Function = ev00B7_e_fanfare;
	CutsceneDataList[0x00BB]->Function = ev00BB_e_deliverfrog;

	CutsceneDataList[0x00D8]->Function = ev00D8_b_eggcarrier;
	CutsceneDataList[0x00DE]->Function = ev00DE_b_chaos6;

	CutsceneDataList[0x00FF]->Function = ev00FF_l_supersonic;

	CutsceneDataList[0x0140]->Function = ev0140_e_findjetbooster;

	if (!DreamcastConversionEnabled)
		CutsceneDataList[0x0166]->Function = ev0166_s_lightshoes;

	CutsceneDataList[0x016D]->Function = ev016D_a_warriorfeather;	
}