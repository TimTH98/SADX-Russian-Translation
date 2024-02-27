#include "stdafx.h"
#include "SADXModLoader.h"

#include <IniFile.hpp>


//Used supercoolsonic's source code for "Fixes, Adds and Beta Restores" mod


FunctionPointer(void, sub_4B79A0, (int a1), 0x4B79A0);


/* Big's beta hotel puzzle */

const char* const KeyBlockENG[] = {
		"\aWhat's this?",
		NULL,
};

//French text to Russian
const char* const KeyBlockFRE[] = {
		"\aА чё это?",
		NULL,
};

const char* const KeyBlockSPN[] = {
		"\a¿Qué es esto?",
		NULL,
};

const char* const KeyBlockGER[] = {
		"\aWas ist das?",
		NULL,
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


/* Chao card */

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
	HMODULE betaRestores = GetModuleHandle(L"Fixes_Adds_BetaRestores");
	if (betaRestores == nullptr) return;
	
	auto betaRestoresMod = helperFunctions.Mods->find_by_dll(betaRestores);
	IniFile betaRestoresConfig(std::string(betaRestoresMod->Folder) + "\\config.ini");
	bool bigBetaHotel = betaRestoresConfig.getBool("Options1", "BigBetaHotel", false);

	if (bigBetaHotel)
	{
		WriteCall((void*)0x6368DE, KeyBlockLanguageAdds);
	}

	WriteJump((void*)0x636067, ChaoCardLanguageAdds);
}