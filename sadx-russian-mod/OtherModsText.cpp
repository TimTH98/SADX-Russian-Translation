#include "stdafx.h"

#include "IniFile.hpp"
#include "OtherModsText.h"


/* Fixes, Adds and Beta Restores (based on supercoolsonic's source code) */

HMODULE BetaRestores = GetModuleHandle(L"Fixes_Adds_BetaRestores");
FunctionPointer(void, sub_4B79A0, (int a1), 0x4B79A0);


//Big's beta hotel puzzle

const char* KeyBlockEN[] = {
		"\aWhat's this?",
		nullptr,
};


const char* KeyBlockFR[] = {
		"\aА что это за штука?", //French text to Russian
		nullptr,
};

const char* KeyBlockSP[] = {
		"\a¿Qué es esto?",
		nullptr,
};

const char* KeyBlockGE[] = {
		"\aWas ist das?",
		nullptr,
};


const char** KeyBlockMessages[]
{
	nullptr, //Japanese
	KeyBlockEN,
	KeyBlockFR,
	KeyBlockSP,
	KeyBlockGE,
};


void __cdecl KeyBlockLanguageAdds()
{
	if (TextLanguage == Languages_Japanese)
	{
		sub_4B79A0((int)0x2BBF1D8);
	}
	else
	{
		DisplayHintText(KeyBlockMessages[TextLanguage], 240);
	}
	//StopVoices();
	PlayVoice(1765);
}


//Chao card

const char* ChaoCardEN[] = {
		"\aChao Card -\n Proof of Chao Stadium membership",
		NULL,
};

const char* ChaoCardFR[] = {
		"\aЧао-карта...\n Открывает доступ на стадион Чао",
		NULL,
};

const char* ChaoCardSP[] = {
		"\a Tarjeta Chao -\n Prueba de membresía del estadio Chao",
		NULL,
};

const char* ChaoCardGE[] = {
		"\a Chao Card -\n Nachweis der Mitgliedschaft im Chao-Stad", //missing 'ion' at the end because it doesn't fit!
		NULL,
};


const char** ChaoCardMessages[]
{
	nullptr, //Japanese
	ChaoCardEN,
	ChaoCardFR,
	ChaoCardSP,
	ChaoCardGE,
};


void __cdecl ChaoCardLanguageAdds()
{
	if (TextLanguage == Languages_Japanese)
	{
		sub_4B79A0((int)0x2BBF080);
	}
	else
	{
		DisplayHintText(ChaoCardMessages[TextLanguage], 240);
	}
}


void OverwriteBetaRestoresText(const HelperFunctions& helperFunctions)
{
	if (!BetaRestores) return;
	
	auto betaRestoresMod = helperFunctions.Mods->find_by_dll(BetaRestores);
	IniFile betaRestoresConfig(std::string(betaRestoresMod->Folder) + "\\config.ini");
	bool bigBetaHotel = betaRestoresConfig.getBool("Options1", "BigBetaHotel", false);

	if (bigBetaHotel)
	{
		WriteCall((void*)0x6368DE, KeyBlockLanguageAdds);
	}

	WriteJump((void*)0x636067, ChaoCardLanguageAdds);
}



/* Multiplayer mod */

void (*multi_replace_text)(const char* name, uint32_t language, const char* text) = nullptr;

void ReplaceMultiplayerText(const HelperFunctions& helperFunctions)
{
	auto multi_mod = helperFunctions.Mods->find("sadx-multiplayer");
	if (!multi_mod) return;

	multi_replace_text = multi_mod->GetDllExport<decltype(multi_replace_text)>("multi_replace_text");
	multi_replace_text("stage_confirm", Languages_French, "Желаете запустить этот уровень?");
	multi_replace_text("press_start", Languages_French, "Кнопка Start: присоединиться");
}


/* Super Sonic mod by Kell */

HMODULE SuperSonic = GetModuleHandle(L"better-super-sonic");
const char*** SuperSonicTikalHints;

const char* SuperSonicTikalHintRus[]
{
	"\aСоберите 50 колец и нажмите\nкнопку действия во время прыжка.",
	"\aВы сможете превратиться в Супер Соника!\nСледите за расходом колец!",
	nullptr
};

void ReplaceSuperSonicHint()
{
	if (!SuperSonic) return;

	SuperSonicTikalHints = (const char***)GetProcAddress(SuperSonic, "?tikal_messages@@3PAPAPBDA");
	SuperSonicTikalHints[Languages_French] = SuperSonicTikalHintRus;
}



void WriteTextForOtherMods(const HelperFunctions& helperFunctions)
{
	OverwriteBetaRestoresText(helperFunctions);
	ReplaceMultiplayerText(helperFunctions);
	ReplaceSuperSonicHint();
}