#include "stdafx.h"
#include "SADXModLoader.h"

void (*multi_replace_text)(const char* name, uint32_t language, const char* text) = nullptr;

void LoadExtraText(const HelperFunctions& helperFunctions)
{
	auto multi_mod = helperFunctions.Mods->find("sadx-multiplayer");
	if (multi_mod)
	{
		multi_replace_text = multi_mod->GetDllExport<decltype(multi_replace_text)>("multi_replace_text");

		multi_replace_text("stage_confirm", 2, "Желаете запустить этот уровень?");
		multi_replace_text("press_start", 2, "Кнопка Start: присоединиться");
	}
}

void LoadText()
{
	WriteData((const char**)0x504B5B, "    Ho*+= %a=>");
	WriteData((const char**)0x40BE98, "Сохранение...");
	WriteData((const char**)0x40BE09, "Загрузка...");
	WriteData((const char**)0x50342D, "Загрузка...");
	WriteData((const char**)0x503469, "Загрузка...");

	// Chao Garden Hint Monitor
	WriteData((const char**)0x887738, "ВЫХОД");
	WriteData((const char**)0x887734, "ДАЛЕЕ");
	WriteData((const char**)0x887730, "НАЗАД");

	//Hedgehog Hammer (story)
	WriteData((const char**)0x52843D, "PEKOPD");
	WriteData((const char**)0x528467, "OIKOB");
	WriteData((const char**)0x52849A, "OIKOB");
	WriteData((const char**)0x5284E5, "DOKTOP WFFMAH");
	WriteData((const char**)0x528500, "WMN");
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
	WriteData((const char**)0x626230, "WMN");
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
	WriteData((const char**)0x4B5433, "\tМетал Соник доступен\nдля режима «Испытания».");

	// Game menu messages
	WriteData((const char**)0x917DD0, "Вернуть настройки по умолчанию?");
	WriteData((const char**)0x917DE4, "Нажмите кнопку действия,\nчтобы вернуться.");
	WriteData((const char**)0x917DF8, "Изменить эту кнопку?");
	WriteData((const char**)0x917E0C, "Нажмите кнопку, которую хотите изменить.");

	WriteData((const char**)0x90C4A8, "Желаете закончить игру и вернуться\nк выбору персонажа?");
	WriteData((const char**)0x90C4BC, "Желаете покинуть уровень и вернуться\nна Поле приключений?");
	WriteData((const char**)0x90C4D0, "Желаете закончить игру и вернуться\nв главное меню?");

	// Unlock minigame message
	WriteData((const char**)0x4B54DB, "Разблокирована игра для Game Gear:\n'%s'.");

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
	WriteData((const char**)0x10D7A44, "\aПодтвердить выбор");
	WriteData((const char**)0x10D7B0C, "\aОтменить выбор");
	WriteData((const char**)0x10D7A6C, "\aУдалить файл");
	WriteData((const char**)0x10D7954, "\t\tУдалено.");
	WriteData((const char**)0x10D7968, "\t\tОшибка удаления.");

	// Monkey Detonator messages
	WriteData((const char**)0x111CB68, "\aНаписано:\n«Кнопка дистанционного уничтожения».");
	WriteData((const char**)0x111CB6C, "\a«Нажмите для активации».");

	WriteData((const char**)0x111CB38, "\aИ... нажал!");
	WriteData((const char**)0x111CB10, "\aКнопка нажата,\nно ничего не произошло.");
	WriteData((const char**)0x111CAE8, "\aКнопка нажата,\nно ничего не произошло.");

	// Station Square cards messages
	WriteData((const char**)0x2BC07B8, "\aЭто пропуск сотрудника!\nС ним я смогу пройти в здание.");

	WriteData((const char**)0x2BC07E0, "\aПроверка ID...");

	WriteData((const char**)0x2BBF470, "\aПропуск на картинг! С ним можно\nпопасть на Мерцающий заезд.");
	WriteData((const char**)0x2BBF478, "\aДобро пожаловать\nна Мерцающий заезд!");

	// Tikal's messages
	WriteData((const char**)0x88C730, "\aДавай за мной!");
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
	WriteData((const char**)0x7FD9B0, "\aСпланируй в него или ударь\nв прыжке вместо ударов кулаками.");
	WriteData((const char**)0x7FDA00, "\aТы можешь отбить кулаком\nмаленькие водяные шарики!");

	// Chaos 4
	WriteData((const char**)0x7FE450, "\aУ тебя будет шанс ударить,\nкогда Хаос высунет свою голову.");

	// Chaos 6
	WriteData((const char**)0x7FEBA0, "\aЗаморозить бы Хаоса...\nПридумай, как это сделать.");
	WriteData((const char**)0x7FEBF8, "\aЗакинь бомбы Эггмана Хаосу\nпрямо в пасть.");

	WriteData((const char**)0x7FEC48, "\aПрицелься в лягушку и\nзакинь в неё наживку!");

	WriteData((const char**)0x7FEBF8, "Кидай бомбы Эггмана\nпрямо в пасть Хаоса.");

	WriteData((const char**)0x7FECA8, "\aУ тебя появится возможность\nиспользовать удочку,");
	WriteData((const char**)0x7FECB0, "\aкогда Хаос подойдёт ближе!");

	// Egg Hornet
	WriteData((const char**)0x801D54, "\aЭгг-Мобиль – его слабое место.\nАтакуй, когда подберёшься ближе.");

	// Egg Walker	
	WriteData((const char**)0x802D00, "\aЧтобы он потерял равновесие,\nметь ему в ноги.");
	WriteData((const char**)0x802D10, "\aБей не только по ногам.\nАтакуй ещё и кабину!");

	// Egg Viper
	WriteData((const char**)0x803444, "\aЭггман на той стороне\nконцентрирует энергию...");

	WriteData((const char**)0x803454, "\aДоберись до него, используя\nСамонаводящуюся атаку...");

	WriteData((const char**)0x803464, "\a...и бей в кабину!");

	WriteData((const char**)0x803474, "\aЗапрыгни на эти детали\nи доберись до кабины.");

	WriteData((const char**)0x803484, "\aБерегись! Он что-то задумал!");

	// ZERO (when timer is 01:00:00)
	WriteData((const char**)0x8046E4, "\aУ него должно быть\nслабое место.");
	WriteData((const char**)0x8046EC, "\aПродолжай атаковать,\nпока не найдёшь его!");

	// Perfect Chaos
	WriteData((const char**)0x800544, "\aНа максимальной скорости ты\nстанешь подобен молнии.");
	WriteData((const char**)0x80054C, "\aТолько так у тебя будет шанс\nатаковать Хаоса!");
}

void DCChaoGarden()
{
	HintText_Text ChaoGardenMessages_French_0_Text[] = {
		{ "\aЭто сад Чао.", 120 },
		{ "\aЕсли принести сюда яйца, найденные\nна уровнях, из них вылупятся Чао.", 360 },
		{ 0 }
	};

	HintText_Text ChaoGardenMessages_French_1_Text[] = {
		{ "\aЯйцо может созреть само\nпо себе спустя время, но...", 180 },
		{ "\aВы можете ускорить созревание,\nпокачав яйцо на руках.", 180 },
		{ "\aХарактер Чао будет меняться\nв зависимости от того,", 180 },
		{ "\aкак вы обращались с яйцом.\nПопробуйте разные методы.", 180 } ,
	{ 0 }
	};

	HintText_Text ChaoGardenMessages_French_2_Text[] = {
		{ "\aЧао изменится, если дать ему\nмаленькое животное.", 180 } ,
		{ "\aПопробуй давать Чао\nразных животных.", 180 } ,
		{ 0 }
	};

	HintText_Text ChaoGardenMessages_French_3_Text[] = {
		{ "\a'Как кормить Чао'", 0 } ,
		{ "\aЧао очень любят плоды с деревьев.", 0 } ,
		{ "\aВстаньте перед деревом\nи потрясите его,", 0 } ,
		{ "\aзажав кнопку действия\nи левый стик.", 0 } ,
		{ "\aФрукты по-разному влияют на Чао.", 0 } ,
		{ "\aПопробуйте давать Чао\nразные фрукты.", 0 } ,
		{ "\a'Размножение Чао'", 0 } ,
		{ "\aКогда вокруг Чао зацветут цветы,\nнаступит сезон размножения.", 0 } ,
		{ "\aЕсли посадить двух Чао вместе,", 0 } ,
		{ "\aбыть может, они снесут яйцо?", 0 } ,
		{ "\a'И напоследок...'", 0 } ,
		{ "\aВ одном саду может находиться\nне более восьми Чао.", 0 } ,
		{ "\aЕсли их численность выше,\nим становится тесно,", 0 } ,
		{ "\aи они уходят в другой сад.", 0 } ,
		{ 0 }
	};

	HintText_Text ChaoGardenMessages_French_4_Text[] = {
		{ "\a'Портал'", 0 } ,
		{ "\aЭто портал.", 0 } ,
		{ "\aЧерез него можно попасть в те\nсады, где вы уже побывали.", 0 } ,
		{ "\aС собой можно взять\nяйцо или Чао.", 0 } ,
		{ 0 }
	};

	HintText_Text ChaoGardenMessages_French_5_Text[] = {
		{ "\a'Машина имён'", 0 } ,
		{ "\aЭта машина позволяет дать\nЧао имя.", 0 } ,
		{ "\aВозьмите Чао и положите его\nна красную кнопку.", 0 } ,
		{ "\aНазывайте Чао милыми именами, хорошо?", 0 } ,
		{ 0 }
	};

	HintText_Text ChaoGardenMessages_French_6_Text[] = {
		{ "\aДобро пожаловать на стадион Чао!\nЗдесь проводятся гонки Чао!", 0 } ,
		{ 0 }
	};

	HintText_Text ChaoGardenMessages_French_7_Text[] = {
		{ "\a'Гонки Чао'", 0 },
		{ "\aЗдесь Чао состязаются между собой,\nприменяя развитые умения!", 0 },
		{ "\aЕсли занять первое место\nв Гонке сокровищ,", 0 },
		{ "\aЧао получит драгоценный кулон.", 0 },
		{ "\aМузыка и голос поддержат Чао.\nОн немного ускорится, если", 0 },
		{ "\aподбодрить его, когда тот светится.\nПоддержать: кнопки ABXY", 0 },
		{ "\aВыберите Чао, за которым хотите\nпосмотреть, перемещая треугольный", 0 },
		{ "\aуказатель кнопками камеры.", 0 },
		{ "\aИзменение углов камеры:\nлевый стик", 0 },
		{ 0 }
	};

	WriteData((HintText_Text*)0x880DE0, ChaoGardenMessages_French_0_Text);
	WriteData((HintText_Text*)0x880DF8, ChaoGardenMessages_French_1_Text);
	WriteData((HintText_Text*)0x880E20, ChaoGardenMessages_French_2_Text);
	WriteData((HintText_Text*)0x880E38, ChaoGardenMessages_French_3_Text);
	WriteData((HintText_Text*)0x880EB0, ChaoGardenMessages_French_4_Text);
	WriteData((HintText_Text*)0x880ED8, ChaoGardenMessages_French_5_Text);
	WriteData((HintText_Text*)0x880F00, ChaoGardenMessages_French_6_Text);
	WriteData((HintText_Text*)0x887B88, ChaoGardenMessages_French_7_Text);

}

void MissionText()
{
	WriteData((const char**)0x2BC57B8, "Ваша главная задача – найти");
	WriteData((const char**)0x2BC57BC, "карточки с заданиями");
	WriteData((const char**)0x2BC57C0, "на Полях приключений.");
	WriteData((const char**)0x2BC57C4, "Чтобы выполнить задание,");
	WriteData((const char**)0x2BC57C8, "прочтите подсказку к нему.");

	WriteData((const char**)0x2BC57CC, "Коснитесь карточки с заданием,");
	WriteData((const char**)0x2BC57D0, "чтобы появилась подсказка.");
	WriteData((const char**)0x2BC57D4, "");
	WriteData((const char**)0x2BC57D8, "Подсказка поможет понять,");
	WriteData((const char**)0x2BC57DC, "как выполнить задание.");

	WriteData((const char**)0x2BC57E0, "В игре 60 заданий, распределённых");
	WriteData((const char**)0x2BC57E4, "между шестью персонажами");
	WriteData((const char**)0x2BC57E8, "(Соник, Тейлз, Наклз, Эми,");
	WriteData((const char**)0x2BC57EC, "E-102 и Биг).");

	WriteData((char*)0x1704B90, "Перед бургерной всё стоит и стоит\nчеловек. Приведи его сюда!");
	WriteData((char*)0x1704C60, "Над Мистическими руинами\nвисит шар...\nНайди и достань его!");
	WriteData((char*)0x1704D30, "Собери 100 колец и принеси их\nк рекламному щиту с Соником у бассейна!");
	WriteData((char*)0x1704E00, "У меня вокруг дома\nвсё заросло сорняками!\nНадо бы от них избавиться!");
	WriteData((char*)0x1704ED0, "Эх...\nМой воздушный шар улетел!\nОн теперь так высоко!");
	WriteData((char*)0x1704FA0, "Он же утонет!\nВытащи человека из воды\nи приведи его сюда!");
	WriteData((char*)0x1705070, "Похоже, Метал Сонику одиноко,\nи ему нужен друг...\nНайди ему друга.");
	WriteData((char*)0x1705140, "Туда упала медаль!\nНе паркуйте автомобили\nв неположенных местах!");
	WriteData((char*)0x1705210, "Водопад у Изумрудного моря.\nДостань воздушный шар,\nчто парит за ним.");
	WriteData((char*)0x17052E0, "В воде что-то блестит!\nЧто же это?");
	WriteData((char*)0x17053B0, "Разбей ветряные мельницы\nи продвинься дальше...\nДостань шар, парящий в небе!");
	WriteData((char*)0x1705480, "Кто очень хорошо ладит с Чао?\nА что покоится под ним?");
	WriteData((char*)0x1705550, "Я не могу принимать душ\nв таких условиях!\nСделай что-нибудь!");
	WriteData((char*)0x1705620, "Я владыка этого отеля!\nПопробуй поймать меня!");
	WriteData((char*)0x17056F0, "М-мои медали затянуло в торнадо!\nКто-нибудь, заберите их оттуда!");
	WriteData((char*)0x17057C0, "Собери флажки\nна парящих в небе островах!");
	WriteData((char*)0x1705890, "Целься и бей!\nСобери медали с помощью Соника,\nсвёрнутого в пинбольный шар!");
	WriteData((char*)0x1705960, "Ночной парк аттракционов.\nСоверши тройной прыжок\nнад бассейном!");
	WriteData((char*)0x1705A30, "А что это виднеется\nпо ту сторону зеркала?");
	WriteData((char*)0x1705B00, "Очень скользко!\nСобери все медали\nза отведённое время!");
	WriteData((char*)0x1705BD0, "Вокруг куклы Соника\nвьются Спиннеры...\nЗащити её!");
	WriteData((char*)0x1705CA0, "На дне Изумрудного моря\nесть тайных проход!\nНайди спрятанный там флажок!");
	WriteData((char*)0x1705D70, "Кружись вокруг карусели\nи соберите 10 воздушных шаров!");
	WriteData((char*)0x1705E40, "Некто сказал:\n«Фу, здесь так темно и грязно!»\nСможешь найти это место?");
	WriteData((char*)0x1705F10, "Что находится под правой лапой\nогромного льва?");
	WriteData((char*)0x1705FE0, "Верхушка мачты пиратского корабля.\nЧто же такое охраняют пираты?");
	WriteData((char*)0x17060B0, "Собери 100 колец и принеси их\nк вертолётной площадке!");
	WriteData((char*)0x1706180, "Утренний город, где туда-сюда\nездят машины. Достань воздушный\nшар с помощью фонтана!");
	WriteData((char*)0x1706250, "Я владыка канализации!\nПопробуй поймать меня!");
	WriteData((char*)0x1706320, "Пылающая тюрьма!\nРазыщи беглеца!");
	WriteData((char*)0x17063F0, "Взлети в потоке воздуха вперемешку\nс мусором! Сможешь ли ты достать\nвоздушный шар?");
	WriteData((char*)0x17064C0, "Под мостом из брёвен\nнаходится воздушный шар...\nСможешь ли ты достать его?");
	WriteData((char*)0x1706590, "Заряжай пушку и стреляй!\nВоспользуйся ей с умом\nи достань воздушный шар!");
	WriteData((char*)0x1706660, "Кто это сделал?\nОткуда на моём корабле всё это?");
	WriteData((char*)0x1706730, "Я владыка ледяного пруда!\nПопробуй поймать меня!");
	WriteData((char*)0x1706800, "Как же страшно!\nТут всюду носятся истребители!\nКто-нибудь, заберите меня отсюда!");
	WriteData((char*)0x17068D0, "Пролети над джунглями и достань\nвсе воздушные шары!");
	WriteData((char*)0x17069A0, "Послание от древних:\n«Что находится там, куда\nуказывают огненные стрелы?..»");
	WriteData((char*)0x1706A70, "Поиск сокровищ на морском берегу!\nСобери все медали за отведённое время!");
	WriteData((char*)0x1706B40, "Что находится там, куда\nсмотрит огромная змея?");
	WriteData((char*)0x1706C10, "В момент, когда будешь\nпадать с водопада...\nХорошенько присмотрись.");
	WriteData((char*)0x1706CE0, "Я не могу сходить в туалет\nв таких условиях!\nНу почему попадаю всегда я?");
	WriteData((char*)0x1706DB0, "Стальная крепость.\nВысоко подпрыгни с трёх узких дорожек!\nБудь осторожна, не свались.");
	WriteData((char*)0x1706E80, "Я владыка этого корабля!\nПопробуй поймать меня!");
	WriteData((char*)0x1706F50, "Что находится в месте,\nгде кольцами выложена\nголова Соника?");
	WriteData((char*)0x1707020, "Секретная база с механизмами.\nКогда будешь падать в темноте,\nхорошенько присмотрись...");
	WriteData((char*)0x17070F0, "Собери 10 воздушных шаров\nв этой местности\nза отведённое время!");
	WriteData((char*)0x17071C0, "Огромный Соник смотрит на медаль.\nСможешь ли ты её достать?");
	WriteData((char*)0x1707290, "Высокоскоростной аттракцион\nчерез Млечный путь!\nСобери все флажки!");
	WriteData((char*)0x1707360, "Разветвление на пять дорожек.\nВыбери правильную дорожку\nза отведённое время.");
	WriteData((char*)0x1707430, "Стрелок Долины ветров!\nУничтожь все Спиннеры\nза отведённое время!");
	WriteData((char*)0x1707500, "Найди три спрятанных в джунглях флажка\nза отведённое время.");
	WriteData((char*)0x17075D0, "Горнолыжный склон, ясная погода.\nПересеки линию из колец,\nсовершив 3 прыжка на большой высоте!");
	WriteData((char*)0x17076A0, "Скоростной спуск в снежную бурю.\nСобери все флажки!");
	WriteData((char*)0x1707770, "Собери все воздушные шары,\nспускаясь вниз по зданию!");
	WriteData((char*)0x1707840, "Пылающий каньон.\nЧто покоится там,\nкуда смотрит «она»?");
	WriteData((char*)0x1707910, "Жерло вулкана.\nБудь осторожен,\nне попади в лаву!");
	WriteData((char*)0x17079E0, "Тебя будет преследовать\nогромный валун!\nСобери все флажки!");
	WriteData((char*)0x1707AB0, "Бочки катятся и катятся!\nНайди флажок,\nспрятанный в шлюзе!");
	WriteData((char*)0x1707B80, "Сможешь ли ты найти то,\nчто покоится\nв пасти динозавра?");
	WriteData((char*)0x1707C50, "Задание выполнено!");
	WriteData((char*)0x1707D20, "Не найдено!");
}

void GG_Games()
{
	WriteData((char*)0x7E6278, "SONIC THE HEDGEHOG");
	WriteData((char*)0x7E62A3, "SONIC THE HEDGEHOG 2");
	WriteData((char*)0x7E62CE, "SONIC CHAOS");
	WriteData((char*)0x7E62F9, "Dr.ROBOTNIK's MeanBeanMachine");
	WriteData((char*)0x7E6324, "SONIC DRIFT");
	WriteData((char*)0x7E634F, "SONIC SPINBALL");
	WriteData((char*)0x7E637A, "SONIC THE HEDGEHOG TRIPLE TROUBLE");
	WriteData((char*)0x7E63A5, "SONIC DRIFT 2");
	WriteData((char*)0x7E63D0, "TAILS ADVENTURE");
	WriteData((char*)0x7E63FB, "SONIC LABYRINTH");
	WriteData((char*)0x7E6426, "SONIC BLAST");
	WriteData((char*)0x7E6451, "TAILS' SKYPATROL");
}