#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev001D[] = {
	(char*)("EV_EGGMOBLE0"), &EV_EGGMOBLE0_TEXLIST,
	(char*)("KNUCKLES"), &KNUCKLES_TEXLIST,
	0
};

void ev001D_s_afterchaos6(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait(1);
		EV_InitPlayer(0);
		SetBankDir(77);
		BGM_Play(MusicIDs_egcarer1);
		EV_SetPos(player, -44.900002f, 745.65002f, -231.87f);
		EV_SetAng(player, 0x2CE, 0x725E, 0x119);
		EV_CreatePlayer(2, KnucklesTheEchidna, -113.79f, 743.71997f, -510.44f, 64723, 62954, 0xFFFF);
		create_eggmoble(0.0f, 780.0f, -386.04001f, 0, 0x4000, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 0.5f, 1, 0);
		knuckles = EV_GetPlayer(2);
		EV_ClrAction(knuckles);
		EV_SetAction(knuckles, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		eggmoble = GetEggMobleTask();
		EV_ClrAction(eggmoble);
		EV_SetAction(eggmoble, &action_gm_gm0002_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 0);
		dsPlay_timer_v(1337, 0xCB80001, 1, 100, 600, 0.0f, 780.0f, -386.04001f);
		EV_Wait(1);
		seteggmobleparam(0.5, 0x100);
		EV_CameraPos(0, 0, -24.51f, 754.06f, -310.82001f);
		EV_CameraAng(1, 0, 0xFCCA, 0x78E5, 0);
		EV_CameraPerspective(0, 1, 0x1C72);
		EV_Wait(10);
		EV_CameraPerspective(0, 100, 0x1555);
		EV_CameraPos(0, 100, -77.290001f, 749.42999f, -184.83f);
		EV_CameraTargetObj(1, 60, player, 0.0f, 6.0f, 0.0f, 0);
		EV_Wait(100);
		EV_CameraTargetFree();
		EV_CameraAng(1, 40, 0x3CA, 0xEBE5, 0);
		EV_CameraPos(1, 40, -82.480003f, 748.77002f, -176.33f);
		EV_Wait(45);
		EV_CameraPos(1, 0, -21.030001f, 780.5f, -342.64999f);
		EV_CameraAng(1, 0, 0x7CA, 0xE8AD, 0);
		EV_CameraPos(1, 140, -27.75f, 780.5f, -346.98999f);
		EV_CameraAng(1, 140, 0x7CA, 0xE5A5, 0);
		EV_SetPos(knuckles, 139.57001f, 743.65002f, -265.67999f);
		EV_SetAng(knuckles, 0x1CB, 0xBFF7, 0xFD71);
		EV_ClrAction(knuckles);
		EV_SetAction(knuckles, KNUCKLES_ACTIONS[56], &KNUCKLES_TEXLIST, 2.5f, 1, 0);
		EV_SerifPlay(577);
		EV_Msg((msgTbl_ev001D[TextLanguage])[0]); //"\aNo way!   \nI can't believe this!"
		EV_SetAction(eggmoble, &action_gm_gm0002_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 0);
		EV_Wait(60);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 0.80000001f, 1, 8);
		EV_Wait(40);
		EV_MsgClose();
		EV_MovePoint2(knuckles, 21.969999f, 747.63f, -253.89999f, 1.75f, 0.059999999f);
		EV_Wait(30);
		dsStop_id(213385217);
		EV_CameraTargetFree();
		EV_CameraTargetObj(1, 0, knuckles, 0.0f, 6.0f, 0.0f, 0);
		EV_CameraPos(0, 0, 116.31f, 752.71997f, -322.29999f);
		EV_SerifPlay(578);
		EV_MsgW(30, (msgTbl_ev001D[TextLanguage])[1]); //"\aSonic!"
		EV_MsgClose();
		EV_WaitMove(knuckles);
		EV_ClrAction(knuckles);
		EV_SetAction(knuckles, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_SetAng(knuckles, 0x317, 0x8772, 0);
		EV_LookPoint(knuckles, 0.0f, 803.0f, -387.04001f);
		EV_Wait(15);
		EV_LookObject(player, knuckles, 0.0f, 10.0f, 0.0f);
		EV_CameraTargetFree();
		EV_CameraPos(1, 15, 51.720001f, 751.31f, -278.45001f);
		EV_CameraAng(1, 15, 0xFF50, 0x57DB, 0);
		EV_Wait(30);
		EV_ClrFace(player);
		switch (VoiceLanguage) {
		case 0:
			EV_SetFace(player, "CED");
			break;
		case 1:
			EV_SetFace(player, "CBBBDF");
			break;
		}
		EV_Wait(10);
		EV_SerifPlay(579);
		EV_Msg((msgTbl_ev001D[TextLanguage])[2]); //"\aHey there, Knuckles."
		EV_Wait(35);
		if (VoiceLanguage == Languages_Japanese)  EV_ClrFace(player);
		EV_Wait(5);
		EV_CameraPos(1, 45, -27.59f, 750.82001f, -240.23f);
		EV_CameraAng(1, 45, 0xFE50, 0x50DB, 0);
		EV_Msg((msgTbl_ev001D[TextLanguage])[3]); //"\aGlad you finally made it! \nI thought"..
		if (VoiceLanguage == Languages_Japanese) EV_SetFace(player, "CEFD");
		EV_Wait(60);
		EV_ClrFace(player);
		EV_Wait(5);
		EV_SetFace(player, "CEFD");
		EV_Wait(10);
		EV_ClrFace(player);
		EV_SetFace(player, "D");
		EV_Wait(15);
		EV_ClrFace(player);
		EV_Wait(30);
		EV_MsgClose();
		EV_Wait(5);
		ChgEggMobleMod(5);
		EV_Wait(5);
		EV_CameraPerspective(0, 1, 0x238E);
		EV_CameraPos(0, 0, 18.65f, 778.13f, -373.26001f);
		EV_CameraAng(0, 0, 0xF94, 0x2E0C, 0xFD00);
		EV_CameraPos(0, 70, 69.360001f, 771.59003f, -342.66f);
		EV_CameraAng(0, 70, 0xD94, 0x2C0C, 0xFD00);
		EV_LookFree(player);
		EV_SerifPlay(581);
		eggmoble_moveandturn(0.0f, 785.0f, -386.04001f, 0, -0x4000, 0, 50, 0);
		EV_MsgW(45, (msgTbl_ev001D[TextLanguage])[4]); //"\aUntil we meet again, Sonic!  "
		EV_MsgClose();
		EV_CameraPos(0, 35, 73.580002f, 769.95001f, -340.54001f);
		EV_CameraAng(0, 35, 0xD94, 0x2D0C, 0xFD00);
		ChgEggMobleSMod(1);
		eggmoble_moveandturn(-300.0f, 755.0f, -400.0f, 0, 0, 0, 90, 1);
		dsPlay_oneshot_v(1341, 0, 0, 120, 0.0f, 780.0f, -386.04001f);
		EV_Wait(25);
		EV_CameraPerspective(0, 1, 0x3111);
		EV_CameraPos(0, 0, -35.049999f, 749.29999f, -230.52f);
		EV_CameraAng(0, 0, 0x194, 0x2B0C, 0xFD00);
		EV_CameraPos(0, 70, -22.0f, 748.71997f, -223.14f);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[4], &SONIC_TEXLIST, 2.75f, 1, 0);
		EV_MovePoint2(player, -217.33f, 748.34003f, -350.01001f, 1.75f, 0.059999999f);
		EV_SerifPlay(580);
		EV_MsgW(45, (msgTbl_ev001D[TextLanguage])[5]); //"\aStop!  Come back here!"
		EV_MsgClose();
		EV_CameraPos(0, 0, -233.17999f, 750.09998f, -345.82999f);
		EV_CameraTargetObj(1, 0, player, 0.0f, 6.0f, 0.0f, 0);
		EV_SetPos(player, -175.42999f, 743.17999f, -321.23001f);
		EV_MovePoint2(player, -217.33f, 748.34003f, -350.01001f, 1.75f, 0.059999999f);
		EV_Wait(10);
		EV_Wait(30);
		EV_ClrAction(player);
		EV_PlayPad(0, &EV001D_S_JUMP);
		EV_Wait(40);
		eggmoble_moveandturn(-600.0f, 300.0f, -500.0f, 0, -0x500, 0, 120, 1);
		EV_Wait(20);
		EV_CameraTargetFree();
		EV_CameraPos(0, 0, -233.08f, 753.90997f, -382.20001f);
		EV_CameraTargetObj(1, 0, player, 0.0f, 6.0f, 0.0f, 0);
		EV_SetPos(player, -217.33f, 748.34003f, -350.01001f);
		EV_ClrAction(player);
		EV_PlayPad(0, &EV001D_S_JUMP);
		EV_Wait(60);
		EV_CameraTargetFree();
		EV_CameraPos(0, 0, -447.75f, 635.0f, -436.70001f);
		EV_CameraAng(0, 0, 0xDCF8, 0x3180, 0);
		SONIC_JUMP = CSkyWalk_create2(player, 600.0f);
		EV_SetPos(player, -400.0f, 600.0f, -420.0f);
		EV_SetAng(player, 0, 0xC000, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_PlayPad(0, &EV001D_S_JUMP);
		EV_Wait(20);
		if(SONIC_JUMP){
			FreeTask(SONIC_JUMP);
			SONIC_JUMP = 0;
		}
		B_OUT = COverlayCreate(0.016666668f, 0.2f, 0.0f, 0.0f, 0.0f);
		EV_Wait(90);
		break;
	case 2:
		dsStop_all();
		if(SONIC_JUMP){
			FreeTask(SONIC_JUMP);
			SONIC_JUMP = 0;
		}
		if(B_OUT){
			FreeTask(B_OUT);
			B_OUT = 0;
		}
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		delete_eggmoble();
		EV_SetPos(player, -44.900002f, 745.65002f, -231.87f);
		EV_SetAng(player, 0x2CE, 0x725E, 0x119);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}
