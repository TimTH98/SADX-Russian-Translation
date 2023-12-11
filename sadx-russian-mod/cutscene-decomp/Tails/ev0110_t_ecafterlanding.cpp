#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0110[] = { 0 };

void ev0110_t_ecafterlanding(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_InitPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_CreatePlayer(2, SonicTheHedgehog, 12.8f, 699.25f, -1093.5f, 0, 63658, 0);
		EV_Wait(1);
		BGM_Play(MusicIDs_egcarer1);
		EV_SetPos(player, 23.389999f, 699.25f, -1083.27f);
		EV_SetAng(player, 0, 0, 0);
		EV_CameraPos(1, 0, 29.860001f, 700.06f, -1065.27f);
		EV_CameraAng(1, 0, 0xB0B, 0xF8E, 0);
		EV_CameraPos(1, 150, -10.33f, 705.81f, -1066.96f);
		EV_CameraAng(1, 120, 0xFF, 0xE376, 0);
		sonic = EV_GetPlayer(2);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(sonic, "ICCCDDEEEEEEDDDDCCCDDD");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(sonic, "IC");
		}
		EV_SetFace(player, "JBBLLL");
		EV_SerifPlay(1533);
		EV_Msg(msgTbl_ev0110[TextLanguage][0]); //"\aWow!  This thing is really huge!"
		EV_Wait(120);
		EV_ClrFace(sonic);
		EV_SetAction(player, &action_m_m0127_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(60);
		EV_ClrAction(player);
		EV_CameraPos(1, 0, 111.0f, 1129.0f, -1873.0f);
		EV_CameraAng(1, 0, 0xEBB4, 0x7EF7, 0);
		EV_CameraPos(1, 90, -170.0f, 1129.0f, -1880.0f);
		EV_CameraAng(1, 90, 0xEBB4, 0x7FF7, 0);
		EV_SerifPlay(1534);
		EV_Msg(msgTbl_ev0110[TextLanguage][1]); //"\aNo time to gawk, Sonic.  \nWe gotta f"...
		EV_Wait(80);
		EV_MsgClose();
		EV_MsgCls();
		EV_CameraPos(1, 0, -10.33f, 705.81f, -1066.96f);
		EV_CameraAng(1, 0, 0xFF, 0xE376, 0);
		EV_CameraPos(1, 180, 29.860001f, 700.06f, -1065.27f);
		EV_CameraAng(1, 210, 0xB0B, 0xF8E, 0);
		EV_LookObject(player, sonic, 0.0f, 3.0f, 0.0f);
		EV_SetFace(player, "T");
		EV_LookObject(sonic, player, 0.0f, 3.0f, 0.0f);
		EV_Wait(30);
		EV_SetFace(sonic, "R");
		EV_LookFree(sonic);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(sonic, "CCFFFGGG");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(sonic, "CF");
		}
		EV_SerifPlay(1535);
		EV_Msg(msgTbl_ev0110[TextLanguage][2]); //"\aYou're right, pal.  \n Let's get busy"...
		EV_Wait(30);
		EV_LookFree(player);
		EV_SetFace(player, "BB");
		EV_Wait(40);
		EV_SetAction(sonic, &action_s_s0005_sonic, &SONIC_TEXLIST, 0.69999999f, 0, 20);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 5);
		EV_Wait(40);
		EV_ClrFace(sonic);
		EV_MsgCls();
		EV_SerifWait();
		break;
	case 2:
		EV_InitObject(player);
		EV_RemovePlayer(2);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}