#include "SADXModLoader.h"

void LoadText()
{
	WriteData((const char**)0x504B5B, "    Ho*+= %a=>");
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
			texts[Languages_French] = (const char*)tikal_message;
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
	
	// Unlock Chars
	WriteData((const char**)0x916998, "\tТЕЙЛЗ теперь доступен для игры!");
	WriteData((const char**)0x9169AC, "\tНАКЛЗ теперь доступен для игры!");
	WriteData((const char**)0x9169D4, "\tЭМИ теперь доступна для игры!");
	WriteData((const char**)0x9169E8, "\tE-102 теперь доступен для игры!");
	WriteData((const char**)0x9169FC, "\tБИГ теперь доступен для игры!");
	WriteData((const char**)0x4B5433, "\tМетал Соник доступен для \nрежима «Испытания».");
	
	// Game menu messages
	WriteData((const char**)0x917DCC, "Вернуть настройки по умолчанию?");
	WriteData((const char**)0x917DE4, "Нажмите кнопку действия,\nчтобы вернуться.");
	WriteData((const char**)0x917DF8, "Изменить эту кнопку?");
	WriteData((const char**)0x917E0C, "Нажмите кнопку, которую хотите изменить.");
	WriteData((const char**)0x90C4A8, "Желаете закончить игру и вернуться к\nвыбору персонажа?");
	WriteData((const char**)0x90C4BC, "Желаете покинуть уровень и вернуться на\nПоле приключений?");
	WriteData((const char**)0x90C4D0, "Желаете закончить игру и вернуться в\nглавное меню?");
	
	// Unlock minigame message
	WriteData((const char**)0x4B54DB, "Разблокирована игра\n'%s'.");
	
	// New lure messages
	WriteData((const char**)0x9818A0, "\aНовая наживка!");
	WriteData((const char**)0x9818A4, "\aС ней удастся поймать\nболее крупную рыбу!");
	
	// Keys messages
	WriteData((const char**)0x111C6A8, "\aКлюч воспарил...");
	WriteData((const char**)0x111C680, "\aПохоже, ключ не отсюда...");
	
	WriteData((const char**)0x7D3AB1, "\aСеребряная статуя...\nПохожа на ключ.");
	WriteData((const char**)0x7D3A72, "\aЗолотая статуя...\nПохожа на ключ.");
	
	WriteData((const char**)0x7D3A2B, "\aКамень ветра... Похож на ключ.\nЕго внешний вид что-то значит.");
	WriteData((const char**)0x7D39E0, "\aКамень льда... Похож на ключ.\nДумаю, он откуда-то отсюда.");
	WriteData((const char**)0x2BBF538, "\aКамень льда... Похож на ключ.\nКажется, он из Мистических руин.");
	
	// Deleting file messages	
	WriteData((const char**)0x10D7A44, "\aOK");
	WriteData((const char**)0x10D7B0C, "\aОтменить действие");
	WriteData((const char**)0x10D7A6C, "\aУдалить файл");	
	WriteData((const char**)0x10D7954, "\t\tУдалено.");
	WriteData((const char**)0x10D7968, "\t\tОшибка удаления.");
	
	// Monkey Detonator messages
	WriteData((const char**)0x111CB68, "\aНаписано: «Кнопка\nдистанционного уничтожения»."); 
	WriteData((const char**)0x111CB6C, "\a«Нажмите для активации»."); 
	
	WriteData((const char**)0x111CB38, "\aИ... нажал!"); 
	WriteData((const char**)0x111CB10, "\aКнопка нажата,\nно ничего не произошло."); 
	WriteData((const char**)0x111CAE8, "\aКнопка нажата,\nно ничего не произошло."); 
	
	// Station Square cards messages
	WriteData((const char**)0x2BC07B8, "\aПропуск сотрудника!\nС ним я смогу пройти в здание."); 
	
	WriteData((const char**)0x2BC07E0, "\aПроверка ID..."); 
		
	WriteData((const char**)0x2BBF470, "\aПропуск на картинг! С ним можно\nпопасть на Мерцающий заезд."); 
	WriteData((const char**)0x2BBF468, "\aДобро пожаловать\nна Мерцающий заезд!"); 
	
	// Tikal's messages
	WriteData((const char**)0x88C730, "\aДавай за мной!"); //  fr
	WriteData((const char**)0x803484, "\aБерегись! Он что-то задумал!"); 
}

void BossNames()
{	
	WriteData((const char**)0x5482A8, "Kaoc 0");
	WriteData((const char**)0x54CCFE, "Kaoc 2");
	WriteData((const char**)0x5509DC, "Kaoc 4");
	WriteData((const char**)0x559872, "Kaoc 6");
	WriteData((const char**)0x56037F, "ACcoLNtnrs Kaoc");
	WriteData((const char**)0x587DA4, "Zego");
	WriteData((const char**)0x571813, "FIIWTegDenh");
	WriteData((const char**)0x57F2A1, "FIIWZmes");
	WriteData((const char**)0x5757B3, "FIIWTaIofok");
	WriteData((const char**)0x566F64, "EW101β");
	WriteData((const char**)0x4E6C81, "EW103Q"); //E103δ
	WriteData((const char**)0x604791, "EW104X"); //E104ε
	WriteData((const char**)0x5A39F8, "EW105q"); //E105ζ
	WriteData((const char**)0x56C2B8, "EW101 BegR{"); //E101mkⅡ
}

void BossHelps()
{
	// Chaos 0  (when timer is 01:00:00)
	WriteData((const char**)0x7FD51C, "\aДля самонаводящейся атаки\nдважды нажми кнопку прыжка!");	
	WriteData((const char**)0x7FD56C, "\aЦелься в уязвимую точку\nна голове.");
	
	// Chaos 2
	WriteData((const char**)0x7FD960, "\aЦелься в голову Хаоса,\nкогда он откроется!");
	WriteData((const char**)0x7FD9B0, "\aСпланируй в него или ударь,\nв прыжке вместо ударов кулаками.");
	WriteData((const char**)0x7FDA00, "\aТы можешь отбить кулаком\nмаленькие водяные шарики!");
	
	// Chaos 4
	WriteData((const char**)0x7FE450, "\aУ тебя будет шанс ударить,\nкогда Хаос высунет свою голову.");
	
	// Chaos 6
	WriteData((const char**)0x7FEBA8, "\aЗаморозить бы Хаоса...\nПридумай, как это сделать.");
	WriteData((const char**)0x7FEBF8, "\aЗакинь бомбы Эггмана Хаосу\nпрямо в пасть.");
	
	WriteData((const char**)0x7FEC48, "\aПрицелься в лягушку и\nзакинь в неё наживку!");
		
	WriteData((const char**)0x7FECA8, "\aУ тебя появится возможность\nиспользовать удочку,");
	WriteData((const char**)0x7FECB0, "\aкогда Хаос подойдёт ближе!");
		
	// Egg Walker
	WriteData((const char**)0x801D54, "\aЭгг-Мобиль – его слабое место.\nАтакуй, когда подберёшься ближе.");
	
	WriteData((const char**)0x802D00, "\aЧтобы он потерял равновесие,\nметь ему в ноги.");
	WriteData((const char**)0x802D10, "\aНе бей просто по ногам.\nБей ещё в кабину!");
		
	// Egg Viper
	WriteData((const char**)0x803444, "\aEggman est de l'autre côté\nde la concentration d'énergie.");
	WriteData((const char**)0x803454, "\aFaites plusieurs attaques auto-guidées...");
	WriteData((const char**)0x803464, "\aEt visez le cockpit.");
		
	WriteData((const char**)0x803474, "\aЗапрыгни на эти детали\nи доберись до кабины.");
		
	// ZERO (when timer is 01:00:00)
	WriteData((const char**)0x8046E4, "\aУ него должно быть\nслабое место.");
	WriteData((const char**)0x8046EC, "\aПродолжай атаковать,\nпока не найдёшь его!");
	
	// Perfect Chaos
	WriteData((const char**)0x800544, "\aНа максимальной скорости ты\nстанешь подобен молнии.");
	WriteData((const char**)0x80054C, "\aТолько так у тебя будет шанс\nатаковать Хаоса!");
}

void MissionText()
{
	#pragma region fr
	WriteData((const char**)0x2BC57B8, "Основная задача – найти");
	WriteData((const char**)0x2BC57BC, "карточки с заданиями");
	WriteData((const char**)0x2BC57C0, "на Полях приключений.");
	WriteData((const char**)0x2BC57C4, "Чтобы выполнить задание,");
	WriteData((const char**)0x2BC57C8, "прочти подсказку");
	
	WriteData((const char**)0x2BC57CC, "Коснись карточки с заданием,");
	WriteData((const char**)0x2BC57D0, "чтобы отобразить подсказку.");
	WriteData((const char**)0x2BC57D4, "");
	WriteData((const char**)0x2BC57D8, "Подсказка поможет понять,");
	WriteData((const char**)0x2BC57DC, "как выполнить задание.");

	WriteData((const char**)0x2BC57E0, "Всего есть 60 заданий");
	WriteData((const char**)0x2BC57E4, "за каждого из шести героев");
	WriteData((const char**)0x2BC57E8, "(Соник, Тейлз, Наклз, Эми,");
	WriteData((const char**)0x2BC57EC, "E-102 и Биг).");
	#pragma endregion	
}