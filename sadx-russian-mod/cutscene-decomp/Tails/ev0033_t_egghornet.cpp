#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0033[] = {
	(char*)("EV_EGGMOBLE0"), &EV_EGGMOBLE0_TEXLIST,
	(char*)("EV_EGGMOBLE1"),& EV_EGGMOBLE1_TEXLIST,
	(char*)("EGM1JET"), &EGM1JET_TEXLIST,
	(char*)("EGM1JETB"), &EGM1JETB_TEXLIST,
	(char*)("EV_EGGMAN_BODY"), &EV_EGGMAN_BODY_TEXLIST,
	0
};

void ev0033_t_egghornet(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		SetBankDir(75);
		EventSe_Init(3);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		EV_CreateObject(&obj_decoy, 995.59998f, 118.0f, 724.70001f, 0, 0, 0);
		EV_Wait(1);
		EV_SetMode(obj_decoy, 0);
		EV_SetPos(obj_decoy, 995.59998f, 118.0f, 724.70001f);
		EV_SetAng(obj_decoy, 0, 0, 0);
		EV_SetPos(player, 952.70001f, 123.5f, 726.70001f);
		EV_SetAng(player, 0, 0x3E00, 0);
		EV_LookObject(player, obj_decoy, 7.0f, 8.0f, 8.0f);
		EV_CreatePlayer(2, SonicTheHedgehog, 947.29999f, 123.5f, 705.77002f, 0, 11520, 0);
		EV_Wait(1);
		sonic = EV_GetPlayer(2);
		EV_LookObject(sonic, obj_decoy, 0.0f, 8.0f, 0.0f);
		EV_SetPos(sonic, 946.29999f, 123.5f, 698.77002f);
		EV_SetAng(sonic, 0, 0x1500, 0);
		create_eggmoble(1000.3f, 186.5f, 810.0f, 0, 0xD600, 0);
		EV_Wait(1);
		eggmoble = GetEggMobleTask();
		EV_ClrAction(eggmoble);
		EV_SetAction(eggmoble, &action_gm_gm0001_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 0);
		CreateEggmoble1(1272.5699f, 55.0f, 1191.11f, 0, 0x8800, 0);
		EV_Wait(1);
		ChangeSpeedEggmoble1(0.80000001f);
		EV_CameraPos(1, 0, 973.5f, 133.77f, 740.59998f);
		EV_CameraAng(1, 0, 0xF800, 0x1E00, 0);
		EV_CameraPos(1, 60, 968.40002f, 126.7f, 735.79999f);
		EV_CameraAng(1, 60, 0x400, 0x2500, 0);
		EV_SerifPlay(638);
		EV_Msg(msgTbl_ev0033[TextLanguage][0]); //"\aWell, well, well...\nIf it isn't Soni"...
		EV_SetAction(sonic, &action_s_s0006_sonic, &SONIC_TEXLIST, 0.5f, 1, 8);
		EV_SetAction(player, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 8);
		EV_Wait(20);
		moveObject(obj_decoy, 995.59998f, 118.0f, 724.70001f, 970.20001f, 125.0f, 777.70001f, 5);
		EV_Wait(33);
		EV_SetPos(obj_decoy, 1227.6f, 7.0f, 651.70001f);
		EV_SetAng(obj_decoy, 0, 0, 0);
		EV_LookFree(player);
		EV_LookFree(sonic);
		EV_LookPoint(player, 1000.3f, 136.5f, 810.0f);
		BGM_Play(MusicIDs_eggman);
		EventSe_Play(1, 1333, 1800);
		EventSe_Volume(1, -60, 1);
		EV_Wait(1);
		EventSe_Volume(1, -50, 80);
		EV_Wait(30);
		EV_SetPos(player, 943.0f, 123.5f, 724.70001f);
		EV_SetAng(player, 0, 0x2000, 0);
		EV_SetPos(sonic, 953.59998f, 123.5f, 709.20001f);
		EV_SetAng(sonic, 0, 0x1000, 0);
		moveObject(obj_decoy, 995.59998f, 118.0f, 724.70001f, 970.20001f, 125.0f, 777.70001f, 5);
		eggmoble_move_normal(1000.3f, 146.5f, 810.0f, 100);
		EV_CameraPos(1, 0, 936.29999f, 126.2f, 716.70001f);
		EV_CameraAng(1, 0, 0x700, 0xA400, 0xFE00);
		EV_CameraPos(1, 100, 930.59998f, 127.5f, 721.0f);
		EV_CameraAng(1, 100, 0x400, 0xA900, 0xFE00);
		EV_Wait(30);
		EV_ClrFace(player);
		EV_SetFace(player, "EECECCDCC0");
		EV_SerifPlay(639);
		EV_MsgW(60, msgTbl_ev0033[TextLanguage][1]); //"\aIt's Eggman!"
		EV_ClrFace(player);
		EV_CameraPos(1, 0, 1039.4f, 128.3f, 837.16998f);
		EV_CameraAng(1, 0, 0xFA0, 0x298E, 0x710);
		EV_CameraPos(0, 50, 1048.11f, 129.10001f, 823.70001f);
		EventSe_Volume(1, -40, 40);
		EV_SerifPlay(640);
		EV_MsgW(50, msgTbl_ev0033[TextLanguage][2]); //"\aSilence!"
		ChgEggMobleMod(5);
		EV_CameraPos(1, 0, 992.40002f, 158.0f, 810.29999f);
		EV_CameraAng(1, 0, 0xEBA0, 0xB88E, 0x110);
		EV_CameraAng(0, 15, 0x1A0, 0xB88E, 0x110);
		EV_SerifPlay(641);
		EV_Msg(msgTbl_ev0033[TextLanguage][3]); //"\aI am Dr. Robotnik,"
		EV_Wait(20);
		EV_Msg(msgTbl_ev0033[TextLanguage][4]); //"\athe most cunning scientific\ngenius i"...
		EV_Wait(25);
		EV_CameraPos(0, 75, 996.90002f, 158.0f, 804.96002f);
		EV_CameraAng(0, 75, 0x1A0, 0x988E, 0x110);
		EV_Wait(75);
		EV_CameraPos(0, 40, 997.46997f, 158.0f, 805.79999f);
		EV_CameraAng(0, 40, 0x4A0, 0x988E, 0x110);
		EV_Wait(45);
		EV_SerifWait();
		EV_CameraPos(1, 0, 941.5f, 128.3f, 704.79999f);
		EV_CameraAng(1, 0, 0x32C, 0xAB5B, 0);
		EV_CameraPos(0, 190, 927.29999f, 126.3f, 720.20001f);
		EV_CameraAng(0, 190, 0x267, 0xA600, 0x100);
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "CDDDDDC0");
		EV_SerifPlay(642);
		EV_MsgW(30, msgTbl_ev0033[TextLanguage][5]); //"\aYeah right, Dr. Eggman!"
		EV_Wait(30);
		EV_ClrFace(sonic);
		EV_SerifPlay(643);
		EV_MsgW(110, msgTbl_ev0033[TextLanguage][6]); //"\aEnough!  I've been \nworking on a mas"...
		EV_MsgW(100, msgTbl_ev0033[TextLanguage][7]); //"\abut now it's time to \nput it to work"...
		EV_MsgClose();
		EV_CameraPos(0, 0, 938.59998f, 128.7f, 735.0f);
		EV_CameraAng(0, 0, 0xFF67, 0xFCB0, 0x100);
		EV_CameraPos(0, 100, 942.79999f, 128.2f, 735.29999f);
		EV_CameraAng(0, 100, 0xFF67, 0xFCB0, 0x100);
		EV_Wait(10);
		EV_ClrFace(player);
		EV_SetFace(player, "CDDAECDCC0");
		EV_SerifPlay(644);
		EV_Msg(msgTbl_ev0033[TextLanguage][8]); //"\aThat usually means trouble,\ncoming f"...
		EV_Wait(75);
		if (VoiceLanguage == Languages_English)
		{
			EV_ClrFace(player);
		}
		EV_Wait(15);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_ClrFace(player);
		}
		EV_CameraPos(1, 0, 927.59998f, 131.7f, 688.40002f);
		EV_CameraAng(1, 0, 0x88C, 0xA000, 0xFA00);
		EV_CameraPos(1, 160, 912.29999f, 127.3f, 715.20001f);
		EV_CameraAng(1, 160, 0x88C, 0xAA2C, 0xFA00);
		EventSe_Volume(1, -20, 60);
		eggmoble_move_normal(1034.9f, 198.5f, 869.70001f, 150);
		EV_SerifPlay(645);
		EV_MsgW(60, msgTbl_ev0033[TextLanguage][9]); //"\aDon't even try to \ninterfere this ti"...
		EventSe_Volume(1, -30, 120);
		EV_SerifPlay(646);
		EV_MsgW(120, msgTbl_ev0033[TextLanguage][10]); //"\aGive me that Chaos Emerald,\nor else!"
		EV_SerifWait();
		EV_CameraPos(1, 0, 944.29999f, 131.89999f, 737.70001f);
		EV_CameraAng(1, 0, 0xF900, 0, 0);
		EV_CameraPerspective(1, 60, 0x2AAB);
		EV_Wait(1);
		EV_ClrFace(player);
		EV_SetFace(player, "CDECDCC0");
		EV_SerifPlay(647);
		EV_Msg(msgTbl_ev0033[TextLanguage][11]); //"\aOr else, what?   Huh?"
		EV_SerifWait();
		EV_ClrFace(player);
		EV_CameraPerspective(1, 1, 0x3111);
		EV_Wait(1);
		EV_CameraPos(1, 0, 912.29999f, 127.3f, 715.20001f);
		EV_CameraAng(1, 0, 0x88C, 0xAA2C, 0xFA00);
		EV_CameraAng(1, 160, 0x68C, 0xAA2C, 0xFA00);
		EV_Wait(5);
		EV_SerifPlay(648);
		EV_Msg(msgTbl_ev0033[TextLanguage][12]); //"\aOr else I'll take it \nfrom you... th"...
		EventSe_Volume(1, 0, 20);
		eggmoble_turn(0, 0x8000, 0, 20, 0);
		EV_Wait(20);
		EventSe_Volume(1, -20, 30);
		ChgEggMobleSMod(1);
		eggmoble_moveandturn(1213.6f, 160.0f, 1146.3f, 0, 0, 0, 60, 0);
		EV_Wait(63);
		EventSe_Volume(1, -90, 100);
		ChgEggMobleSMod(0);
		eggmoble_moveandturn(1216.0f, 105.3f, 1172.9f, 0, 0x5E00, 0, 60, 0);
		EV_Wait(30);
		EV_CameraPos(1, 140, 939.40002f, 126.0f, 699.79999f);
		EV_CameraAng(1, 140, 0x58D, 0x9226, 0xF800);
		EV_Wait(25);
		delete_eggmoble();
		EV_Wait(4);
		EventSe_Stop(1);
		EV_MsgClose();
		MoveEggmoble1(1188.95f, 198.0f, 1099.02f);
		EventSe_Play(2, 1334, 1800);
		EventSe_Volume(2, 45, 1);
		EV_Wait(1);
		EventSe_Volume(2, 60, 94);
		EV_Wait(94);
		SetEggmoble1(1188.9567f, 198.0f, 1099.0181f, 0, 0x9E00, 0);
		EV_Wait(0);
		EventSe_Volume(2, 80, 1);
		EV_CameraPos(1, 0, 1193.3f, 202.0f, 1075.6f);
		EV_CameraAng(1, 0, 0x90D, 0x7278, 0);
		EV_CameraPos(0, 80, 1200.0f, 204.0f, 1079.0f);
		EV_CameraAng(0, 80, 0xB0D, 0x7A78, 0);
		EV_Wait(80);
		EV_CameraPos(0, 80, 1204.0f, 200.60001f, 1076.4f);
		EV_CameraAng(0, 80, 0x50D, 0x8378, 0x200);
		EV_Wait(81);
		EV_SetPos(obj_decoy, 1190.3f, 197.5f, 1100.0f);
		EV_CameraPos(1, 0, 1088.4f, 127.7f, 1033.3f);
		EV_CameraPos(1, 75, 1076.4f, 135.7f, 1032.3f);
		EV_CameraTargetObj(1, 0, obj_decoy, 0.0f, 0.0f, 0.0f, 0);
		EV_Wait(80);
		EV_CameraTargetFree();
		EventSe_Play(3, 1335, 1800);
		EventSe_Volume(2, 90, 1);
		EV_CameraPos(1, 0, 1220.5f, 178.0f, 1155.47f);
		EV_CameraAng(1, 0, 0x210, 0xC70, 0);
		EV_CameraPos(0, 40, 1225.4f, 195.0f, 1154.5f);
		EV_CameraAng(0, 40, 0x210, 0xC70, 0);
		EventSe_Stop(1);
		EV_Wait(1);
		EventSe_Volume(2, 100, 10);
		JetNoneEggmoble1();
		EV_Wait(10);
		EventSe_Volume(2, 80, 1);
		JetLargeEggmoble1();
		EventSe_Volume(2, 90, 10);
		EV_Wait(10);
		EventSe_Volume(2, 70, 110);
		JetNoneEggmoble1();
		EV_Wait(10);
		EventSe_Volume(2, 110, 160);
		ChangeSpeedEggmoble1(6.0f);
		JetMaxEggmoble1();
		EV_Wait(20);
		EV_CameraPos(1, 0, 1088.4f, 127.7f, 1033.3f);
		EV_CameraPos(1, 60, 1076.4f, 135.7f, 1032.3f);
		EV_CameraTargetObj(1, 0, obj_decoy, 0.0f, 0.0f, 0.0f, 0);
		moveObject(obj_decoy, 1190.3f, 197.5f, 1100.0f, 980.59998f, 146.0f, 768.70001f, 60);
		MoveEggmoble1(980.59998f, 146.0f, 768.70001f);
		EV_Wait(20);
		JetLargeEggmoble1();
		EV_Wait(45);
		EV_SetAng(player, 0, 0, 0);
		EV_SetPos(sonic, 951.40002f, 123.5f, 708.07001f);
		EV_SetAng(sonic, 0, 0xFB00, 0);
		JetNormalEggmoble1();
		EventSe_Volume(2, 10, 30);
		EventSe_Oneshot(1336, 120, 0, 0);
		EV_CameraPos(1, 0, 943.90002f, 125.2f, 708.29999f);
		EV_CameraAng(1, 0, 0xEA8, 0x9364, 0xFE00);
		EV_CameraPos(1, 140, 925.70001f, 124.8f, 719.5f);
		EV_CameraAng(1, 140, 0xBAB, 0xA36C, 0);
		EV_Wait(180);
		stopObjectAll();
		EventSe_Stop(2);
		break;
	case 2:
		EventSe_Stop(2);
		EventSe_Close();
		stopObjectAll();
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_FreeObject(&obj_decoy);
		delete_eggmoble();
		DeleteEggmoble1();
		BGM_Stop();
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}
