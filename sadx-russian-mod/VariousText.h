#include "SADXModLoader.h"

void LoadText()
{
	WriteData((const char**)0x40BE98, "Сохранение...");
	WriteData((const char**)0x40BE09, "Загрузка...");
	WriteData((const char**)0x50342D, "Загрузка...");
	WriteData((const char**)0x503469, "Загрузка...");

	static const char* const tikal_message[] = {
	"Собрав 50 колец, нажми кнопку\nдействия в прыжке.",
	"Ты превратишься в Супер Соника!\nНо следи за числом колец!",
	NULL,
	};

	HMODULE module = GetModuleHandle(L"better-super-sonic");
	if (module)
	{
		const char** texts = (const char**)GetProcAddress(module, "tikal_messages");
		if (texts)
		{
			texts[Languages_English] = (const char*)tikal_message;
		}
	}
	//Hedgehog Hammer (story)
	WriteData((const char**)0x52843D, "PEKOPD");
	WriteData((const char**)0x528467, "OIKOB");
	WriteData((const char**)0x52849A, "OIKOB");
	WriteData((const char**)0x5284E5, "DOKTOP WFFMAH");
	WriteData((const char**)0x528549, "HAIATZ");
	WriteData((const char**)0x528599, "BPEMR");
	WriteData((const char**)0x5285A8, "CIYT");
	WriteData((const char**)0x5285E9, "OIKOB");
	WriteData((const char**)0x528632, "OIKOB");
	WriteData((const char**)0x5286D1, "NFPA OKOHIEHA");
	WriteData((const char**)0x528728, "VOSDPABLREM");
	WriteData((const char**)0x528790, "VOLUINTE VEPO BONHA");
	WriteData((const char**)0x5287A3, "VOLUINTE DLNHHJQ MOLOT");
	WriteData((const char**)0x5287FA, "BJ VOXNLN PEKOPD");

	//Bosses
	WriteData((const char**)0x5482A8, "Kaoc 0");
	WriteData((const char**)0x54CCFE, "Kaoc 2");
	WriteData((const char**)0x5509DC, "Kaoc 4");
	WriteData((const char**)0x559872, "Kaoc 6");
	WriteData((const char**)0x56037F, "ACcoLNtnrs Kaoc");
	WriteData((const char**)0x587DA4, "Zego");
	WriteData((const char**)0x571813, "FIIWTegDenh");
	WriteData((const char**)0x57F2A1, "FIIWZmes");
	WriteData((const char**)0x5757B3, "FIIWTaIofok");
	/*WriteData((const char**)0x566F64, "EW101β");
	WriteData((const char**)0x4E6C81, "EW103δ"); //E103δ
	WriteData((const char**)0x604791, "EW104ε"); //E104ε
	WriteData((const char**)0x5A39F8, "EW105ζ"); //E105ζ
	WriteData((const char**)0x56C2B8, "EW101 BegRⅡ");*/ //E101mkⅡ

	//Hedgehog Hammer (minigame)
	WriteData((const char**)0x62616D, "PEKOPD");
	WriteData((const char**)0x626197, "OIKOB");
	WriteData((const char**)0x6261CA, "OIKOB");
	WriteData((const char**)0x626215, "DOKTOP WFFMAH");
	WriteData((const char**)0x626279, "HAIATZ");
	WriteData((const char**)0x6262C9, "BPEMR");
	WriteData((const char**)0x6262D8, "CIYT");
	WriteData((const char**)0x626319, "OIKOB");
	WriteData((const char**)0x626362, "OIKOB");
	WriteData((const char**)0x626401, "NFPA OKOHIEHA");
	WriteData((const char**)0x626458, "VOSDPABLREM");
	WriteData((const char**)0x6264C0, "VOLUINTE VEPO BONHA");
	WriteData((const char**)0x6264D3, "VOLUINTE DLNHHJQ MOLOT");
	WriteData((const char**)0x62652A, "BJ VOXNLN PEKOPD");
	WriteData((const char**)0x6283F5, "NFPA OKOHIEHA");
		
}