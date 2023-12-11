#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev003A[] = {
	(char*)("EV_EGGMOBLE0"), &EV_EGGMOBLE0_TEXLIST,
	(char*)("CAPTUREBEAM"), &CAPTUREBEAM_TEXLIST,
	(char*)("EC_LIGHT"), &texlist_ec_light,
	0
};

void ev003A_t_afterchaos4(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		SetTableBg_mr(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait(1);
		EV_InitPlayer(0);
		SetBankDir(77);
		EV_SetPos(player, 37.299999f, 72.019997f, 213.32001f);
		EV_SetAng(player, 0, 0x6D73, 0);
		EV_CreatePlayer(2, KnucklesTheEchidna, 102.5f, 72.169998f, 212.0f, 0xFF96, 0x9000, 0x12);
		EV_CreatePlayer(3, SonicTheHedgehog, 73.0f, 72.019997f, 232.50999f, 0, 0, 0);
		create_eggmoble(80.0f, 80.0f, 160.0f, 0, 0x3B00, 0);
		createModelEC(300.0f, 1200.0f, 1000.0f, 0, 0x8000, 0, 0.25f, 0.25f, 0.25f,
			&object_ecff_bf_s_fbody_bf_s_fbody,
			&texlist_ec_light,
			0);
		addmotModel(0, &action_ecff_bf_s_fbody, 0);
		CAP_01 = CreateCaptureBeam(80.0f, 80.0f, 160.0f, 0x1700, 0, 0xF790);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		knuckles = EV_GetPlayer(2);
		EV_ClrAction(knuckles);
		EV_SetAction(knuckles, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		sonic = EV_GetPlayer(3);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 0);
		eggmoble = GetEggMobleTask();
		EV_ClrAction(eggmoble);
		EV_SetAction(eggmoble, &action_gm_gm0002_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 0);
		EV_Wait(1);
		seteggmobleparam(0.5f, 0x100);
		playModel(0, 0, 1.0f, -1);
		SetCaptureParam(CAP_01, 0.30000001f, 0.0f, 0.30000001f, 0.0f, 0.0f, 0);
		SetCaptureParam(CAP_01, 0.0f, 10.0f, 0.0f, 0.0f, 0.0f, 0);
		SetCaptureParam(CAP_01, 0.0f, 0.0f, 0.0f, 0.001f, 0.0f, 0);
		SetCaptureParam(CAP_01, 0.0f, 0.0f, 0.0f, 0.0f, 0.001f, 0);
		SetCaptureParam(CAP_01, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
		EV_Wait(1);
		BGM_Play(MusicIDs_egcarer1);
		EV_CameraPerspective(0, 1, 0x3111);
		EV_CameraPos(0, 0, -24.48f, 170.83f, 153.45f);
		EV_CameraAng(0, 0, 0x1F00, 0x9500, 0);
		EV_CameraPerspective(0, 100, 0x3555);
		EV_CameraPos(0, 80, 60.09f, 81.339996f, 217.39f);
		EV_CameraAng(0, 125, 0x1AB4, 0x93E6, 0);
		EV_Wait(10);
		EV_SerifPlay(702);
		EV_Msg(msgTbl_ev003A[TextLanguage][0]); //"\aBehold my floating masterpiece,\nthe "...
		EV_Wait(70);
		EV_CameraPos(0, 60, 63.380001f, 72.220001f, 223.58f);
		EV_Wait(60);
		EV_CameraPerspective(0, 200, 0x38E4);
		EV_Wait(50);
		EV_CameraPerspective(0, 1, 0x3111);
		EV_CameraPos(0, 0, 76.300003f, 92.599998f, 164.71001f);
		EV_CameraAng(0, 0, 0xFE84, 0xE2E6, 0);
		EV_Wait(1);
		EV_CameraPerspective(0, 90, 0x3555);
		EV_SerifPlay(703);
		EV_SetAng(sonic, 0, 0x8000, 0);
		EV_Msg(msgTbl_ev003A[TextLanguage][1]); //"\aBut it pales in comparison to\nthe po"...
		EV_Wait(90);
		EV_CameraPerspective(0, 120, 0x238E);
		EV_CameraPos(0, 0, 53.610001f, 74.32f, 172.56f);
		EV_CameraAng(0, 0, 644, 0x92E6, 0);
		EV_CameraPos(0, 200, 48.990002f, 77.360001f, 102.96f);
		EV_Wait(30);
		EV_SerifPlay(704);
		EV_Msg(msgTbl_ev003A[TextLanguage][2]); //"\aAdieu... Until we meet again,\nmy fri"...
		EV_Wait(40);
		EV_Msg(msgTbl_ev003A[TextLanguage][3]); //"\aHa ha ha ha ha ha ha!"
		EV_Wait(10);
		EV_CameraTargetObj(0, 150, eggmoble, 0.0f, 6.0f, 0.0f, 0);
		EV_Wait(60);
		EV_MsgClose();
		ChgCaptureMod(CAP_01, 1);
		dsPlay_timer_v(1336, 0xCB80001, 1, 120, 185, 80.0f, 80.0f, 160.0f);
		EV_Wait(30);
		moveObjectAngle2(eggmoble, 80.0f, 80.0f, 160.0f, 235.71001f, 807.02002f, 643.87f, 0, 0x3B00, 0, 0x1500, 0x3B00, 0, 180);
		EV_Wait(150);
		stopObject(eggmoble);
		EV_CameraTargetFree();
		EV_Wait(5);
		delete_eggmoble();
		ChgCaptureMod(CAP_01, 2);
		dsStop_num(1336);
		EV_SetAng(sonic, 0, 0, 0);
		EV_LookPoint(sonic, 95.0f, 140.0f, 300.0f);
		EV_SetPos(knuckles, 103.96f, 72.470001f, 254.33f);
		EV_SetAng(knuckles, 0xFF96, 0xEA20, 0x12);
		EV_SetPos(player, 37.299999f, 72.019997f, 213.32001f);
		EV_SetAng(player, 0, 0x1500, 0);
		EV_Wait(30);
		moveObjectAngle2(getobjModel(0), 300.0f, 1200.0f, 1500.0f, 1000.0f, 2000.0f, 5000.0f, 0, 0x8000, 0, 0, 0x8000, 0, 400);
		dsPlay_oneshot_v(1341, 0, 0, 120, 73.0f, 72.019997f, 232.50999f);
		EV_CameraPerspective(0, 1, 0x3111);
		EV_CameraPos(0, 0, 22.959999f, 76.32f, 152.91f);
		EV_CameraAng(0, 0, 0xB84, 0x8DA5, 0);
		EV_CameraPos(0, 120, 20.120001f, 73.809998f, 144.75f);
		EV_Wait(120);
		EV_CameraPerspective(0, 1, 0x3111);
		EV_CameraPos(0, 0, 74.779999f, 75.57f, 249.39f);
		EV_CameraAng(0, 0, 0x400, 0xF00, 0);
		EV_CameraPos(0, 200, 79.489998f, 75.870003f, 243.41f);
		EV_CameraAng(0, 200, 0x400, 0x1C00, 0);
		EV_LookObject(knuckles, sonic, 0.0f, 6.0f, 0.0f);
		EV_LookObject(player, sonic, 0.0f, 6.0f, 0.0f);
		EV_ClrFace(player);
		EV_SetFace(player, "CDCD");
		EV_Wait(5);
		EV_SerifPlay(705);
		EV_Msg(msgTbl_ev003A[TextLanguage][4]); //"\aHey, we can't let him\nget away!"
		EV_Wait(45);
		EV_ClrFace(player);
		stopObject(getobjModel(0));
		EV_Wait(10);
		deleteModel(0);
		EV_ClrFace(player);
		EV_SetFace(player, "CDCD");
		EV_Wait(5);
		EV_SerifPlay(706);
		EV_Msg(msgTbl_ev003A[TextLanguage][5]); //"\aLet's get to my workshop \nand we'll "...
		EV_Wait(55);
		EV_SerifWait();
		EV_LookFree(sonic);
		EV_SetAction(sonic, &action_s_s0002_sonic, &SONIC_TEXLIST, 0.40000001f, 0, 4);
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "CDCD");
		EV_Wait(5);
		EV_Msg(msgTbl_ev003A[TextLanguage][6]); //"\aYeah!"
		EV_Wait(5);
		EV_ClrFace(player);
		EV_SerifPlay(707);
		EV_Wait(10);
		EV_ClrFace(sonic);
		EV_MsgClose();
		EV_Wait(20);
		EV_SerifPlay(708);
		EV_Wait(10);
		EV_SetAng(knuckles, 0xFF96, 0xDD20, 0x12);
		EV_CameraPos(1, 65, 105.57f, 77.510002f, 268.32001f);
		EV_CameraAng(1, 65, 0x400, 0x1500, 0);
		EV_Msg(msgTbl_ev003A[TextLanguage][7]); //"\aYou guys go!"
		EV_Wait(10);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_LookFree(sonic);
		EV_LookObject(sonic, knuckles, 0.0f, 6.0f, 0.0f);
		EV_Wait(55);
		EV_MsgClose();
		EV_CameraPos(0, 0, 94.080002f, 76.07f, 256.29001f);
		EV_CameraAng(0, 0, 0xD00, 0xBB00, 0);
		EV_CameraPos(0, 160, 94.559998f, 76.080002f, 252.32001f);
		EV_CameraAng(0, 160, 0xD00, 0xBB00, 0);
		EV_ClrFace(knuckles);
		EV_SetFace(knuckles, "CDCD");
		EV_Wait(10);
		EV_SerifPlay(709);
		EV_Msg(msgTbl_ev003A[TextLanguage][8]); //"\aI have some unfinished business\nto t"...
		EV_Wait(20);
		EV_ClrFace(knuckles);
		EV_Wait(10);
		EV_SetFace(knuckles, "CDCD");
		EV_SerifWait();
		EV_ClrFace(knuckles);
		EV_Wait(20);
		EV_CameraPos(0, 0, 76.480003f, 75.239998f, 239.92999f);
		EV_CameraAng(0, 0, 0x1100, 0x1600, 0);
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "CDCD");
		EV_SerifPlay(710);
		EV_Wait(5);
		EV_Msg(msgTbl_ev003A[TextLanguage][9]); //"\aNo problem, Knuckles."
		EV_ClrFace(sonic);
		EV_Wait(10);
		EV_ClrFace(sonic);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(sonic, "CDFEFE");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(sonic, "CDF");
		}
		EV_SerifPlay(711);
		EV_Wait(5);
		EV_Msg(msgTbl_ev003A[TextLanguage][10]); //"\aWe'll take care of \neverything here!"
		EV_Wait(30);
		if (VoiceLanguage == Languages_English)
		{
			EV_ClrFace(sonic);
		}
		EV_Wait(60);
		EV_ClrAction(knuckles);
		EV_SetAction(knuckles, KNUCKLES_ACTIONS[56], &KNUCKLES_TEXLIST, 2.0f, 1, 0);
		EV_MovePoint2(knuckles, 170.19f, 90.889999f, 311.34f, 1.5f, 0.059999999f);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_ClrFace(sonic);
		}
		EV_Wait(10);
		EV_CameraPos(0, 0, -42.73f, 119.12f, 256.13f);
		EV_CameraAng(0, 0, 0xF300, 0xC700, 0);
		EV_CameraPos(0, 60, -79.220001f, 131.35001f, 262.45999f);
		EV_SerifPlay(712);
		EV_Msg(msgTbl_ev003A[TextLanguage][11]); //"\aCome on, let's get going!"
		EV_LookFree(sonic);
		EV_SetAng(sonic, 0, 0xB000, 0);
		EV_Wait(60);
		break;
	case 2:
		dsStop_all();
		EV_InitPlayer(0);
		EV_SetPos(player, 37.299999f, 72.019997f, 213.32001f);
		EV_SetAng(player, 0, 0x1500, 0);
		stopObjectAll();
		EV_RemovePlayer(2);
		EV_RemovePlayer(3);
		deleteModel(0);
		delete_eggmoble();
		light_delete(CAP_01);
		CAP_01 = 0;
		EV_CameraOff();
		EV_PadOn();
		SetTableBg_mr(ClipLevel);
		break;
	}
}