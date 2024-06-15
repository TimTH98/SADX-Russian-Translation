#include "stdafx.h"
#include "LoadedMods.h"


HMODULE LoadedMods::DreamcastConversion;
HMODULE LoadedMods::GoalRing;
HMODULE LoadedMods::GoalRingSA1;
HMODULE LoadedMods::EmblemChallenge;
HMODULE LoadedMods::TweakedCutscenes;
HMODULE LoadedMods::Cream;
HMODULE LoadedMods::Rouge;
HMODULE LoadedMods::BetaRestores;
HMODULE LoadedMods::SuperSonic;
HMODULE LoadedMods::Multiplayer;

void LoadedMods::Check()
{
	DreamcastConversion = GetModuleHandle(L"DCMods_Main");
	GoalRing = GetModuleHandle(L"GoalRing");
	GoalRingSA1 = GetModuleHandle(L"SA1-Goal-Ring");
	EmblemChallenge = GetModuleHandle(L"SADX_EmblemChallenge");
	TweakedCutscenes = GetModuleHandle(L"SADX-cutscene-decompilation");
	Cream = GetModuleHandle(L"CreamtheRabbit(SA1-Style)");
	Rouge = GetModuleHandle(L"Rouge-the-Bat-(SA1-Style)");
	BetaRestores = GetModuleHandle(L"Fixes_Adds_BetaRestores");
	SuperSonic = GetModuleHandle(L"better-super-sonic");
	Multiplayer = GetModuleHandle(L"sadx-multiplayer");
}