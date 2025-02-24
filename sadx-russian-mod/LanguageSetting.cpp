#include "stdafx.h"
#include "ModConfig.h"


FunctionPointer(char, AvaSetTextSettei, (char language), 0x5068C0);
FunctionPointer(char, AvaSetVoiceSettei, (char language), 0x506870);
FunctionPointer(int, AvaSaveFiles, (), 0x5065E0);


// Вся эта дичь буквально ради того, чтобы скипнуть за ненадобностью диалог с выбором языка текста и форсировать французский язык текста, на месте которого мы выводим русский

void SetFrenchTextLanguage()
{
	AvaSetTextSettei(Languages_French);
}

void SetLanguagesAndSaveFile()
{
	if (Config::ForceJPVoice)
	{
		AvaSetVoiceSettei(Languages_Japanese);
	}
	
	AvaSetTextSettei(Languages_French);
	AvaSaveFiles();
}


void SkipTextLanguageSelectionAndSetFrench()
{
	int8_t nop = 0x90;
	WriteData<5>((void*)0x508D22, nop);					// скип диалога с выбором языка текста (NOP - No OPeration, то есть буквально инструкция "ничего не делать и пойти дальше")
	
	WriteCall((void*)0x508D6A, SetFrenchTextLanguage);	// вместо английского (игра форсит язык озвучки на текст, если просто скипнуть выбор языка текста)
	WriteCall((void*)0x508D96, SetFrenchTextLanguage);	// вместо японского
}

void SetLanguagesOnNewSave()
{
	WriteCall((void*)0x503787, SetLanguagesAndSaveFile);
}


// Это делается ради того, чтобы сразу при запуске игры стоял французский, независимо от настроек мод-менеджера

bool FrenchInit = false;
void SetFrenchTextAtLaunch() 
{
	if (!FrenchInit)
	{
		TextLanguage = Languages_French;
		FrenchInit = true;
	}
}

void InitLanguageSetting()
{
	SkipTextLanguageSelectionAndSetFrench();
	SetLanguagesOnNewSave();
}