#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0055[] = {
	(char*)("FROG"), &texlist_frog,
	0
};

void ev0055_t_sandhill(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		SetBankDir(87);
		EventSe_Init(1);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		tikal = CTikalLight_Create(1365.49f, -7370.0f, -15515.66f);
		EV_SetMode(tikal, 0);
		EV_CameraPos(0, 0, 1445.2f, -7368.6802f, -15479.54f);
		EV_CameraAng(0, 0, 0xB00, 0x2D7B, 0);
		BGM_Play(MusicIDs_tical);
		EV_SetPos(player, 1365.49f, -7370.0f, -15515.66f);
		EV_SetAng(player, 0, 0xBAC9, 0);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m9004_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_CreateObject(&Frog,
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_Wait(1);
		EV_SetMode(Frog, 0);
		EV_Wait(1);
		EV_SetPos(Frog,
			player->twp->pos.x,
			player->twp->pos.y - 0.5f,
			player->twp->pos.z);
		EV_SetAng(Frog,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_SetAction(Frog, &action_f_f0019_frog, &texlist_frog, 1.0f, 1, 1);
		EV_SetPath(tikal, &epathtag_ev0055_tk, 2.8f, 0);
		EV_Wait(70);
		EV_CameraPos(0, 0, 1370.49f, -7367.7002f, -15507.83f);
		EV_CameraAng(0, 0, 0x1700, 0x1A7B, 0);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m0127_miles, &MILES_TEXLIST, 0.2f, 1, 0);
		EV_Wait(40);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m9004_miles, &MILES_TEXLIST, 1.0f, 1, 8);
		EV_CameraPos(0, 0, 1377.85f, -7368.0801f, -15517.22f);
		EV_CameraAng(0, 0, 0x7F3, 0x3F24, 0);
		EV_CameraPos(0, 100, 1377.46f, -7368.0801f, -15522.21f);
		EV_CameraAng(0, 100, 0x7F3, 0x4342, 0);
		EV_Wait(50);
		EV_CameraPos(0, 0, 1357.84f, -7366.3101f, -15511.18f);
		EV_CameraAng(0, 0, 0xAF3, 0xDF42, 0);
		EV_ClrFace(player);
		EV_SetFace(player, "ZZZZZZZZZZZZ");
		EV_SerifPlay(731);
		efWhiteOn2(60, 30, 0);
		EventSe_Play(0, 760, 1800);
		EventSe_Volume(0, -120, 120);
		EV_Wait(90);
		EV_InitPlayer(0);
		EV_FreeObject(&Frog);
		if(tikal){
			FreeTask(tikal);
			tikal = 0;
		}
		break;
	case 2:
		EV_InitPlayer(0);
		EV_ClrPath(tikal);
		if (tikal)
		if(tikal){
			FreeTask(tikal);
			tikal = 0;
		}
		EV_FreeObject(&Frog);
		efWhiteOff();
		EventSe_Close();
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}