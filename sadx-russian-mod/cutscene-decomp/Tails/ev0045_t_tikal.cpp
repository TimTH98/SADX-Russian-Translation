#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0045[] = { 0 };

void ev0045_t_tikal(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		SetBankDir(78);
		EventSe_Init(1);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		BGM_Play(MusicIDs_tical);
		EV_CreatePlayer(2, Tikal, 17.690001f, 0.0099999998f, 480.85001f, 0, 0x8872, 0);
		EV_Wait(1);
		EV_InitPlayer(2);
		tikal = EV_GetPlayer(2);
		EV_SetPos(tikal, 17.690001f, -0.1f, 480.85001f);
		EV_SetAng(tikal, 0, 0x8872, 0);
		EV_Wait(1);
		EV_SetPos(player, -51.400002f, -0.02f, 528.22998f);
		EV_SetAng(player, 0, 0x263D, 0);
		EV_Wait(1);
		EV_MovePoint2(player, -27.91f, 0.0070000002f, 536.82001f, 0.2f, 0.059999999f);
		EV_CameraPos(1, 0, -19.360001f, 2.6500001f, 541.28003f);
		EV_CameraAng(1, 0, 0x285, 0x2F11, 0);
		EV_CameraPos(1, 140, -19.98f, 2.04f, 549.88f);
		EV_CameraAng(1, 140, 0x500, 0x1511, 0);
		EV_ClrAction(player);
		EV_SetAction(player, MILES_ACTIONS[47], &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SerifPlay(732);
		EV_MsgW(0, msgTbl_ev0045[TextLanguage][0]); //"\tThe servers are \nthe 7 Chaos Emerald"...
		EV_Wait(100);
		EV_ClrAction(player);
		EV_Wait(10);
		EV_CameraPos(1, 25, -30.93f, 4.2399998f, 552.56f);
		EV_CameraAng(1, 25, 0x200, 0xE911, 0);
		EV_ClrAction(player);
		EV_SetAng(player, 0, 0x6AD7, 0);
		EV_Wait(70);
		EV_CameraPos(1, 0, 19.16f, 7.4899998f, 470.76999f);
		EV_CameraAng(1, 0, 0xFE00, 0x6E11, 0);
		EV_SetAction(tikal, &action_j_j0007_tikal, &TIKAL_TEXLIST, 0.5f, 0, 8);
		EV_Wait(1);
		EV_WaitAction(tikal);
		EV_ClrFace(tikal);
		EV_CameraPos(1, 0, 12.15f, 6.3699999f, 493.60999f);
		EV_CameraAng(1, 0, 0xFC00, 0xEE11, 0);
		EV_CameraPos(1, 80, 13.0f, 6.1700001f, 491.81f);
		EV_CameraAng(1, 80, 0xFC00, 0xEE11, 0);
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(tikal, "GE");
		}
		EV_SetAng(tikal, 0, 0xEE12, 0);
		EV_Wait(1);
		EV_ClrAction(tikal);
		EV_SetAction(tikal, &action_j_j0003_tikal, &TIKAL_TEXLIST, 0.1f, 0, 8);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(tikal, "BAAGAG");
		}
		EV_SerifPlay(733);
		EV_MsgW(0, msgTbl_ev0045[TextLanguage][1]); //"\aHello there, friend. \nHow are you?"
		EV_Wait(30);
		EV_WaitAction(tikal);
		EV_CameraPos(1, 0, -28.030001f, 3.1500001f, 524.96997f);
		EV_CameraAng(1, 0, 0x300, 0x8511, 0);
		EV_CameraPos(1, 80, -28.030001f, 3.1500001f, 524.96997f);
		EV_CameraAng(1, 80, 0x300, 0x8511, 0);
		EV_SerifWait();
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_ClrFace(player);
		}
		EV_SetFace(player, "EBBD");
		EV_SerifPlay(734);
		EV_MsgW(0, msgTbl_ev0045[TextLanguage][2]); //"\aUmm... What were you saying\nbefore?"
		EV_Wait(20);
		EV_SerifPlay(735);
		EV_MsgW(0, msgTbl_ev0045[TextLanguage][3]); //"\aHuh?"
		EV_Wait(20);
		EV_CameraPos(1, 0, -25.15f, 5.1599998f, 560.33002f);
		EV_CameraAng(1, 0, 0xFB00, 0xF911, 0);
		EV_CameraPos(1, 330, -45.09f, 4.1900001f, 543.34003f);
		EV_CameraAng(1, 330, 0xFB00, 0xD311, 0);
		EV_SerifPlay(736);
		EV_MsgW(0, msgTbl_ev0045[TextLanguage][4]); //"\aIt's something \nmy grandmother taugh"...
		EV_Wait(100);
		EV_MsgClose();
		EV_Wait(20);
		EV_SerifPlay(737);
		EV_MsgW(0, msgTbl_ev0045[TextLanguage][5]); //"\aI'm never to forget it.   \nIt goes l"...
		EV_Wait(60);
		EV_ClrFace(tikal);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(tikal, "EAAADLDADAC");
		}
		EV_CameraPos(1, 0, 16.290001f, 0.83999997f, 493.39999f);
		EV_CameraAng(1, 0, 0x1000, 0x11, 0);
		EV_CameraPos(1, 250, 16.280001f, 2.75f, 488.78f);
		EV_CameraAng(1, 250, 0x1000, 0x11, 0);
		EV_ClrAction(tikal);
		EV_SetAction(tikal, &action_j_j0013_tikal, &TIKAL_TEXLIST, 0.1f, 0, 8);
		EV_Wait(50);
		EV_SerifPlay(738);
		EV_MsgW(0, msgTbl_ev0045[TextLanguage][6]); //"\t'The servers are the 7 Chaos.'"
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(tikal, "EDELDC");
		}
		EV_Wait(70);
		if (VoiceLanguage == Languages_English)
		{
			EV_ClrFace(tikal);
		}
		EV_Wait(20);
		EV_SerifPlay(739);
		EV_MsgW(0, msgTbl_ev0045[TextLanguage][7]); //"\t'Chaos is power... \n\tPower enriched"...
		EV_CameraPos(1, 0, -28.360001f, 6.0f, 529.10999f);
		EV_CameraAng(1, 0, 0x100, 0x8011, 0);
		EV_CameraPos(1, 150, -28.360001f, 5.9400001f, 527.10999f);
		EV_CameraAng(1, 150, 0x100, 0x8011, 0);
		EV_Wait(150);
		EV_CameraPos(1, 0, 6.6500001f, 5.8800001f, 486.38f);
		EV_CameraAng(1, 0, 0x200, 0xCF11, 0);
		EV_CameraPos(1, 200, 7.5799999f, 5.9299998f, 486.01999f);
		EV_CameraAng(1, 200, 0x200, 0xCF11, 0);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_ClrFace(tikal);
			EV_SetFace(tikal, "ECCCDL");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(tikal, "ECCL");
		}
		EV_ClrAction(tikal);
		EV_SetAction(tikal, &action_j_j0015_tikal, &TIKAL_TEXLIST, 0.1f, 0, 8);
		EV_SerifPlay(740);
		EV_MsgW(0, msgTbl_ev0045[TextLanguage][8]); //"\t'The controller is the one \n\tthat u"...
		EV_Wait(140);
		EV_CameraPos(1, 0, -118.87f, 72.919998f, 494.91f);
		EV_CameraAng(1, 0, 0xEA00, 0xBC11, 0);
		EV_CameraPos(1, 200, -120.51f, 72.919998f, 511.82999f);
		EV_CameraAng(1, 200, 0xEA00, 0xBC11, 0);
		EV_SerifPlay(741);
		EV_MsgW(0, msgTbl_ev0045[TextLanguage][9]); //"\aBut I'm still not sure \nwhat it all "...
		EV_ClrFace(tikal);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(tikal, "DCD");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(tikal, "DCDCD");
		}
		EV_Wait(150);
		EV_CameraPos(1, 0, 22.129999f, 4.1900001f, 470.12f);
		EV_CameraAng(1, 0, 0x200, 0x7011, 0);
		EV_CameraPos(1, 100, 20.280001f, 4.1900001f, 469.35999f);
		EV_CameraAng(1, 100, 0x200, 0x7011, 0);
		EV_SerifPlay(742);
		EV_MsgW(0, msgTbl_ev0045[TextLanguage][10]); //"\aBut the number 7..."
		EV_ClrFace(tikal);
		EV_SetFace(tikal, "DC");
		EV_Wait(100);
		EV_CameraPos(1, 0, 16.790001f, 6.77f, 488.60999f);
		EV_CameraAng(1, 0, 0xFF00, 0x14A, 0);
		EV_ClrFace(tikal);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(tikal, "C");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(tikal, "CC");
		}
		EV_SerifPlay(743);
		EV_MsgW(0, msgTbl_ev0045[TextLanguage][11]); //"\aIs the same as the number of\nEmerald"...
		EV_Wait(80);
		EV_CameraPos(1, 0, -28.290001f, 5.9000001f, 528.70001f);
		EV_CameraAng(1, 0, 0x300, 0x8411, 0);
		EV_CameraPos(1, 40, -28.190001f, 5.98f, 529.69702f);
		EV_CameraAng(1, 40, 0x300, 0x8411, 0);
		EV_ClrFace(player);
		EV_SetFace(player, "D");
		EV_SerifPlay(744);
		EV_MsgW(0, msgTbl_ev0045[TextLanguage][12]); //"\aEmeralds?"
		EV_Wait(40);
		EV_CameraPos(1, 0, -27.459999f, 5.98f, 553.15002f);
		EV_CameraAng(1, 0, 0x200, 0xF611, 0);
		EV_CameraPos(1, 150, -21.559999f, 5.98f, 554.15997f);
		EV_CameraAng(1, 150, 0x200, 0xFE11, 0);
		EV_SerifPlay(745);
		EV_MsgW(0, msgTbl_ev0045[TextLanguage][13]); //"\aForgive me, but I don't think\nwe've "...
		EV_Wait(40);
		EV_SerifPlay(746);
		EV_MsgW(0, msgTbl_ev0045[TextLanguage][14]); //"\aI'm Tikal...   And you are?"
		EV_Wait(30);
		EV_CameraPos(1, 0, 13.88f, 5.5799999f, 487.60001f);
		EV_CameraAng(1, 0, 0x400, 0xEE11, 0);
		EV_ClrFace(tikal);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(tikal, "Gbbb");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(tikal, "E");
		}
		EV_ClrAction(tikal);
		EV_SetAction(tikal, &action_j_j0003_tikal, &TIKAL_TEXLIST, 0.07f, 0, 32);
		EV_Wait(35);
		if (VoiceLanguage == Languages_English)
		{
			EV_ClrFace(tikal);
		}
		EV_Wait(25);
		EV_MsgClose();
		efWhiteOn2(60, 30, 0);
		EventSe_Play(0, 760, 1800);
		EventSe_Volume(0, -120, 120);
		EV_Wait(90);
		break;
	case 2:
		EventSe_Close();
		EV_InitPlayer(0);
		EventSe_Close();
		EV_RemovePlayer(2);
		efWhiteOff();
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}