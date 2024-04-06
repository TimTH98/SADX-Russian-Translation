#include "stdafx.h"
#include "SADXModLoader.h"
#include "OtherMods.h"

#include <IniFile.hpp>


/* Fixes, Adds and Beta Restores (used supercoolsonic's source code) */

HMODULE BetaRestores = GetModuleHandle(L"Fixes_Adds_BetaRestores");
FunctionPointer(void, sub_4B79A0, (int a1), 0x4B79A0);


//Big's beta hotel puzzle

const char* const KeyBlockENG[] = {
		"\aWhat's this?",
		nullptr,
};


const char* const KeyBlockFRE[] = {
		"\aА что это за штука?", //French text to Russian
		nullptr,
};

const char* const KeyBlockSPN[] = {
		"\a¿Qué es esto?",
		nullptr,
};

const char* const KeyBlockGER[] = {
		"\aWas ist das?",
		nullptr,
};


void __cdecl KeyBlockLanguageAdds()
{
	switch (TextLanguage)
	{
	case 0:
		sub_4B79A0((int)0x2BBF1D8);
		break;
	case 1:
		DisplayHintText(KeyBlockENG, 240);
		break;
	case 2:
		DisplayHintText(KeyBlockFRE, 240);
		break;
	case 3:
		DisplayHintText(KeyBlockSPN, 240);
		break;
	case 4:
		DisplayHintText(KeyBlockGER, 240);
		break;
	default:
		sub_4B79A0((int)0x2BBF1D8);
		break;
	}
	//StopVoices();
	PlayVoice(1765);
}


//Chao card

const char* const ChaoCardENG[] = {
		"\aChao Card -\n Proof of Chao Stadium membership",
		NULL,
};

const char* const ChaoCardFRE[] = {
		"\aЧао-карта...\n Открывает доступ на стадион Чао",
		NULL,
};

const char* const ChaoCardSPN[] = {
		"\a Tarjeta Chao -\n Prueba de membresía del estadio Chao",
		NULL,
};

const char* const ChaoCardGER[] = {
		"\a Chao Card -\n Nachweis der Mitgliedschaft im Chao-Stad", //missing 'ion' at the end because it doesn't fit!
		NULL,
};


void __cdecl ChaoCardLanguageAdds()
{
	switch (TextLanguage)
	{
	case 0:
		sub_4B79A0((int)0x2BBF080);
		break;
	case 1:
		DisplayHintText(ChaoCardENG, 240);
		break;
	case 2:
		DisplayHintText(ChaoCardFRE, 240);
		break;
	case 3:
		DisplayHintText(ChaoCardSPN, 240);
		break;
	case 4:
		DisplayHintText(ChaoCardGER, 240);
		break;
	default:
		sub_4B79A0((int)0x2BBF080);
		break;
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
	multi_replace_text("stage_confirm", 2, "Желаете запустить этот уровень?");
	multi_replace_text("press_start", 2, "Кнопка Start: присоединиться");
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
	SuperSonicTikalHints[2] = SuperSonicTikalHintRus;
}



void WriteTextForOtherMods(const HelperFunctions& helperFunctions)
{
	OverwriteBetaRestoresText(helperFunctions);
	ReplaceMultiplayerText(helperFunctions);
	ReplaceSuperSonicHint();
}