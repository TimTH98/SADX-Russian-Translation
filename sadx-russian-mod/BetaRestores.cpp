#include "stdafx.h"
#include "SADXModLoader.h"

#include <IniFile.hpp>


//Used supercoolsonic's source code for "Fixes, Adds and Beta Restores" mod


FunctionPointer(void, sub_4B79A0, (int a1), 0x4B79A0);


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


void InitBigBetaHotelText(const HelperFunctions& helperFunctions)
{
	auto betaRestores = helperFunctions.Mods->find_by_dll(GetModuleHandle(L"Fixes_Adds_BetaRestores"));
	IniFile betaRestoresConfig(std::string(betaRestores->Folder) + "\\config.ini");
	bool bigBetaHotel = betaRestoresConfig.getBool("Options1", "BigBetaHotel", false);

	if (bigBetaHotel)
	{
		WriteCall((void*)0x6368DE, KeyBlockLanguageAdds);
	}	
}