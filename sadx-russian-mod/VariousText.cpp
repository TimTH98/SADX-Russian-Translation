#include "stdafx.h"
#include "TextureFontSetup.h"
#include "TextConverter.h"


// Mission mode text

DataArray(const char*, MissionModeTutorial, 0x2BC57B8, 14);

const char* MissionModeTutorialRus[]
{
	"Ваша главная задача – найти",
	"карточки с заданиями",
	"на Полях приключений.",
	"Чтобы выполнить задание,",
	"прочтите подсказку к нему.",

	"Коснитесь карточки с заданием,",
	"чтобы появилась подсказка.",
	"",
	"Подсказка поможет понять,",
	"как выполнить задание.",

	"В игре 60 заданий, распределённых",
	"между шестью персонажами",
	"(Соник, Тейлз, Наклз, Эми,",
	"E-102 и Биг)."
};

const char* MissionsRus[]
{
	/* 01 */ "Перед бургерной всё стоит и стоит\nчеловек. Приведи его сюда!",
	/* 02 */ "Над Мистическими руинами\nвисит шар...\nНайди и достань его!",
	/* 03 */ "Собери 100 колец и принеси их\nк рекламному щиту\nс Соником у бассейна!",
	/* 04 */ "У меня вокруг дома\nвсё заросло сорняками!\nНадо бы от них избавиться!",
	/* 05 */ "Эх...\nМой воздушный шар улетел!\nОн теперь так высоко!",
	/* 06 */ "Он же утонет!\nВытащи человека из воды\nи приведи его сюда!",
	/* 07 */ "Похоже, Метал Сонику одиноко,\nи ему нужен друг...\nНайди ему кого-то.",
	/* 08 */ "Туда упала медаль!\nНе паркуйте автомобили\nв неположенных местах!",
	/* 09 */ "Водопад у Изумрудного моря.\nДостань воздушный шар,\nчто парит за ним.",
	/* 10 */ "В воде что-то блестит!\nЧто там такое лежит?",
	/* 11 */ "Разбей ветряные мельницы\nи продвинься дальше...\nДостань шар, парящий в небе!",
	/* 12 */ "Кто очень хорошо ладит с Чао?\nА что покоится под ним?",
	/* 13 */ "Я не могу принимать душ\nв таких условиях!\nСделай что-нибудь!",
	/* 14 */ "Я владыка этого отеля!\nПопробуй поймать меня!",
	/* 15 */ "М-мои медали затянуло в торнадо!\nКто-нибудь, заберите их оттуда!",
	/* 16 */ "Собери флажки\nна парящих в небе островах!",
	/* 17 */ "Целься и бей!\nСобери медали с помощью Соника,\nсвёрнутого в пинбольный шар!",
	/* 18 */ "Ночной парк аттракционов.\nСоверши тройной прыжок\nнад бассейном!",
	/* 19 */ "А что это виднеется\nпо ту сторону зеркала?",
	/* 20 */ "Очень скользко!\nСобери все медали\nза отведённое время!",
	/* 21 */ "Вокруг куклы Соника\nвьются Спиннеры...\nЗащити её!",
	/* 22 */ "На дне Изумрудного моря\nесть тайных проход!\nНайди спрятанный там флажок!",
	/* 23 */ "Крутясь на карусели,\nсобери 10 воздушных шаров!",
	/* 24 */ "Она сказала:\n«Фу, тут так темно и грязно!»\nСможешь найти, где это?",
	/* 25 */ "Что находится под правой лапой\nогромного льва?",
	/* 26 */ "Верхушка мачты пиратского корабля.\nЧто же такое охраняют пираты?",
	/* 27 */ "Собери 100 колец и принеси их\nк вертолётной площадке!",
	/* 28 */ "Утренний город, где туда-сюда\nездят машины. Достань воздушный\nшар с помощью фонтана!",
	/* 29 */ "Я владыка канализации!\nПопробуй поймать меня!",
	/* 30 */ "Пылающая тюрьма!\nРазыщи беглеца!",
	/* 31 */ "Взлети в потоке воздуха вперемешку\nс мусором! Сможешь ли ты достать\nвоздушный шар?",
	/* 32 */ "Под мостом из брёвен\nнаходится воздушный шар...\nСможешь ли ты достать его?",
	/* 33 */ "Заряжай пушку и стреляй!\nВоспользуйся ей с умом\nи достань воздушный шар!",
	/* 34 */ "Кто это сделал?\nОткуда на моём корабле всё это?",
	/* 35 */ "Я владыка ледяного пруда!\nПопробуй поймать меня!",
	/* 36 */ "Как же страшно!\nТут всюду носятся истребители!\nКто-нибудь, заберите меня отсюда!",
	/* 37 */ "Пролети над джунглями и достань\nвсе воздушные шары!",
	/* 38 */ "Послание от древних:\n«Что находится там, куда\nуказывают огненные стрелы?..»",
	/* 39 */ "Поиск сокровищ на морском берегу!\nСобери все медали за отведённое время!",
	/* 40 */ "Что находится там, куда\nсмотрит огромная змея?",
	/* 41 */ "В момент, когда будешь\nпадать с водопада...\nХорошенько присмотрись.",
	/* 42 */ "Я не могу сходить в туалет\nв таких условиях!\nНу почему так попадаю всегда я?",
	/* 43 */ "Стальная крепость.\nВысоко подпрыгни с трёх узких дорожек!\nБудь осторожна, не свались.",
	/* 44 */ "Я владыка этого корабля!\nПопробуй поймать меня!",
	/* 45 */ "Что находится в месте,\nгде кольцами выложена\nголова Соника?",
	/* 46 */ "Секретная база с механизмами.\nКогда будешь падать в темноте,\nхорошенько присмотрись...",
	/* 47 */ "Собери 10 воздушных шаров\nв этой местности\nза отведённое время!",
	/* 48 */ "Огромный Соник смотрит на медаль.\nСможешь ли ты её достать?",
	/* 49 */ "Высокоскоростной аттракцион\nчерез Млечный путь!\nСобери все флажки!",
	/* 50 */ "Разветвление на пять дорожек.\nВыбери правильную дорожку\nза отведённое время.",
	/* 51 */ "Стрелок Долины ветров!\nУничтожь все Спиннеры\nза отведённое время!",
	/* 52 */ "Найди три спрятанных в джунглях флажка\nза отведённое время.",
	/* 53 */ "Горнолыжный склон, ясная погода.\nПересеки линию из колец,\nсовершив 3 прыжка на большой высоте!",
	/* 54 */ "Скоростной спуск в снежную бурю.\nСобери все флажки!",
	/* 55 */ "Собери все воздушные шары,\nспускаясь вниз по зданию!",
	/* 56 */ "Пылающий каньон.\nЧто покоится там,\nкуда устремлён ЕЁ взгляд?",
	/* 57 */ "Жерло вулкана.\nБудь осторожен,\nне попади в лаву!",
	/* 58 */ "Тебя будет преследовать\nогромный валун!\nСобери все флажки!",
	/* 59 */ "Бочки катятся и катятся!\nНайди флажок,\nспрятанный в шлюзе!",
	/* 60 */ "Сможешь ли ты найти то,\nчто покоится\nв пасти динозавра?",

	"Задание выполнено!",
	"Не найдено!",
};


// Game Gear titles

const char* GameGearTitles[] //до 42 символов на название (43 с учётом нуля)
{
	"SONIC THE HEDGEHOG",
	"SONIC THE HEDGEHOG 2",
	"SONIC CHAOS",
	"Dr.ROBOTNIK's MeanBeanMachine",
	"SONIC DRIFT",
	"SONIC SPINBALL",
	"SONIC THE HEDGEHOG TRIPLE TROUBLE",
	"SONIC DRIFT 2",
	"TAILS ADVENTURE",
	"SONIC LABYRINTH",
	"SONIC BLAST",
	"TAILS' SKYPATROL",
};


// Chao Garden text

HintText_Text AboutChaoGarden[] = {
		{ "\aЭто сад Чао.", 120 },
		{ "\aЕсли принести сюда яйца, найденные\nна уровнях, из них вылупятся Чао.", 360 },
		{ 0 }
};

HintText_Text AboutChaoEggs[] = {
	{ "\aЯйцо может созреть само\nпо себе спустя время, но...", 180 },
	{ "\aТы можешь ускорить созревание,\nпокачав яйцо на руках.", 180 },
	{ "\aХарактер Чао будет меняться\nв зависимости от того,", 180 },
	{ "\aкак ты обращался с яйцом.\nПопробуй разные методы.", 180 } ,
	{ 0 }
};

HintText_Text AboutLittleAnimals[] = {
	{ "\aЧао изменится, если дать ему\nмаленькое животное.", 180 } ,
	{ "\aПопробуй давать Чао\nразных животных.", 180 } ,
	{ 0 }
};

HintText_Text AboutFeedingBreedingEtc[] = {
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

HintText_Text AboutWarphole[] = {
	{ "\a'Портал'", 0 } ,
	{ "\aЭто портал.", 0 } ,
	{ "\aЧерез него можно попасть в те\nсады, где вы уже побывали.", 0 } ,
	{ "\aС собой можно взять\nяйцо или Чао.", 0 } ,
	{ 0 }
};

HintText_Text AboutNameMachine[] = {
	{ "\a'Машина имён'", 0 } ,
	{ "\aЭта машина позволяет дать\nЧао имя.", 0 } ,
	{ "\aВозьмите Чао и положите его\nна красную кнопку.", 0 } ,
	{ "\aПросим называть Чао милыми именами,\nхорошо?", 0 } ,
	{ 0 }
};

HintText_Text AboutChaoStadium[] = {
	{ "\aДобро пожаловать на стадион Чао!\nЗдесь проводятся гонки Чао!", 0 } ,
	{ 0 }
};

HintText_Text AboutChaoRace[] = {
	{ "\a'Гонки Чао'", 0 },
	{ "\aЗдесь Чао состязаются между собой,\nприменяя развитые умения!", 0 },
	{ "\aЕсли занять первое место\nв Гонке сокровищ,", 0 },
	{ "\aЧао получит драгоценный кулон.", 0 },
	{ "\aМузыка и голос поддержат Чао.\nОн немного ускорится, если", 0 },
	{ "\aподбодрить его, когда тот светится.\nПоддержать: кнопки ABXY", 0 },
	{ "\aВыберите Чао, за которым хотите\nпосмотреть, перемещая треугольный", 0 },
	{ "\aуказатель кнопками камеры.", 0 },
	{ "\aДля смены угла камеры\nиспользуйте левый стик.", 0 },
	{ 0 }
};


// Sound Test

DataArray(SoundTestEntry, SoundTest, 0x7EFB88, 102);

SoundTestEntry SoundTestRU[]
{
	// Characters
	
	{ "Главная тема:  Open Your Heart", 66 },
	{ "Соник:  It Doesn't Matter", 83 },
	{ "Тейлз:  Believe In Myself", 88 },
	{ "Наклз:  Unknown From M.E.", 62 },
	{ "Эми:  My Sweet Passion", 6 },
	{ "Биг:  Lazy Days ~Livin' in Paradise~", 7 },
	{ "Тема E-102", 27 },
	{ "Тема Эггмана", 33 },
	{ "Тема Супер Соника", 86 },
	{ "Тема Тикал", 95 },
	{ "Тема Чао", 16 },

	// Action stages

	{ "Emerald Coast:  Azure Blue World", 28 },
	{ "Emerald Coast:  Windy and Ripply", 29 },
	{ "BIG Fishes at Emerald Coast...", 30 },
	{ "Icecap:  Snowy Mountain", 52 },
	{ "Icecap:  Limestone Cave", 53 },
	{ "Icecap:  Snowboard", 54 },
	{ "Windy Valley:  Windy Hill", 107 },
	{ "Windy Valley:  Tornado", 108 },
	{ "Windy Valley:  The Air", 109 },
	{ "Lost World:  Tricky Maze", 63 },
	{ "Lost World:  Danger! Chased by Rock", 64 },
	{ "Lost World:  Leading Lights", 65 },
	{ "Sky Deck:  Skydeck A Go! Go!", 81 },
	{ "Sky Deck:  General Offensive", 82 },
	{ "Hot Shelter:  Bad Taste Aquarium", 79 },
	{ "Hot Shelter:  Red Barrage Area", 80 },
	{ "Run Through The Speed Highway", 48 },
	{ "Speed Highway:  Goin' Down!?", 49 },
	{ "Speed Highway:  At Dawn", 50 },
	{ "Casinopolis:  The Dreamy Stage", 12 },
	{ "Casinopolis:  Dilapidated Way", 13 },
	{ "Casinopolis:  Blue Star", 14 },
	{ "Casinopolis:  NiGHTS Pinball", 15 },
	{ "Twinkle Park:  Twinkle Cart", 104 },
	{ "Twinkle Park:  Pleasure Castle", 105 },
	{ "Twinkle Park:  Fakery Way", 106 },
	{ "Mt. Red: a Symbol of Thrill", 73 },
	{ "Red Mountain:  Red Hot Skull", 74 },
	{ "Final Egg:  Mechanical Resonance", 42 },
	{ "Final Egg:  Crank the Heat Up!!", 43 },
	{ "Босс:  Хаос", 20 },
	{ "Босс:  Хаос 6", 21 },
	{ "Босс:  Абсолютный Хаос - фаза 1", 22 },
	{ "Босс:  Абсолютный Хаос - фаза 2", 23 },
	{ "Босс:  E-101 модель 2", 9 },
	{ "Босс:  Эгг-Шагоход и Эгг-Гадюка", 34 },
	{ "Босс:  Зеро", 35 },
	{ "Босс:  Эгг-Шершень", 8 },
	{ "Босс:  против другого персонажа", 10 },
	{ "Босс:  серия Е", 11 },

	// Adventure fields

	{ "Стейшн-Сквер", 76 },
	{ "Мистические руины", 67 },
	{ "Эгг-Крейсер", 31 },
	{ "Эгг-Крейсер - океан", 32 },
	{ "Мини-игра:  Воздушная погоня", 78 },
	{ "Мини-игра:  Мерцающий заезд", 25 },
	{ "Мини-игра:  Песчаный холм", 77 },
	{ "Мини-игра:  Ежиный молот", 47 },
	{ "Мини-игра:  Гонки Чао - выбор", 18 },
	{ "Мини-игра:  Гонки Чао", 19 },
	{ "Мини-игра:  Гонки Чао - финиш", 17 },

	// Events

	{ "Грустный момент", 36 },
	{ "Напряженный момент", 37 },
	{ "Свобода", 38 },
	{ "Прощание", 39 },
	{ "Прошлое", 40 },
	{ "Фанфары Эггману", 41 },
	{ "Появление:  Соник", 94 },
	{ "Появление:  Тейлз", 93 },
	{ "Появление:  Наклз", 92 },
	{ "Появление:  Эми", 89 },
	{ "Появление:  E-102", 91 },
	{ "Появление:  Биг", 90 },

	// Others

	{ "Начальный экран", 101 },
	{ "Настройки", 72 },
	{ "Выбор персонажа", 24 },
	{ "Режим испытаний", 103 },
	{ "Руководство:  Соник", 5 },
	{ "Руководство:  Тейлз", 4 },
	{ "Руководство:  Наклз", 3 },
	{ "Руководство:  Эми", 0 },
	{ "Руководство:  Е-102", 2 },
	{ "Руководство:  Биг", 1 },

	// Jingles

	{ "Тейлз:  Надо торопиться!", 51 },
	{ "Биг:  Рыба на крючке", 45 },
	{ "Биг:  Поймал рыбу", 44 },
	{ "Биг:  Рыба сорвалась", 46 },
	{ "Ускорение", 85 },
	{ "Неуязвимость", 55 },
	{ "Уровень пройден", 75 },
	{ "Дополнительная жизнь", 71 },
	{ "Сюжетный предмет", 56 },
	{ "Таймер", 96 },
	{ "Продолжить?", 26 },
	{ "Джингл A", 57 },
	{ "Джингл B", 58 },
	{ "Джингл C", 59 },
	{ "Джингл D", 60 },
	{ "Джингл E", 61 },
	{ "Задание началось!", 110 },
	{ "Задание выполнено!", 111 },
};


// Text loading funcs

bool NowSavingLoaded = false;

void LoadNowSaving()
{
	if (!NowSavingLoaded)
	{
		WriteData((char*)0x7DCBF4, "COXPAHEHO");
		NowSavingLoaded = true;
	}	
}

void LoadFileSelectText()
{
	static float newValue = 248;				// координата x надписи "Новое сохранение" рассчитывается игрой так: HorizontalStretch * 320.0 - 240.0
	WriteData((float**)0x504B53, &newValue);	// поэтому увеличение значения 240 сдвинет надпись левее
	WriteData((const char**)0x504B5B, ConvertAbcTxt("Новое сохранение"));
		
	const char* loading = ConvertStaffrollTxt("Загрузка...");
	WriteData((const char**)0x40BE09, loading);
	WriteData((const char**)0x50342D, loading);
	WriteData((const char**)0x503469, loading);

	// Deleting file messages	
	WriteData((const char**)0x10D7A44, "\aПодтвердить выбор");
	WriteData((const char**)0x10D7B0C, "\aОтменить выбор");
	WriteData((const char**)0x10D7A6C, "\aУдалить файл");
	WriteData((const char**)0x10D7954, "\t\tУдалено.");
	WriteData((const char**)0x10D7968, "\t\tОшибка удаления.");
}

void LoadSoundTestText()
{
	for (int i = 0; i < SoundTest.size(); i++)
	{
		SoundTest[i] = { ConvertAbcTxt(SoundTestRU[i].Name), SoundTestRU[i].ID };
	}
}

void LoadHedgehogHammerText()
{
	//Story

	WriteData((const char**)0x52843D, "PEKOPD"); //Рекорд
	WriteData((const char**)0x528467, "OIKOB"); //Очков
	WriteData((const char**)0x52849A, "OIKOB"); //Очков
	WriteData((const char**)0x5284E5, "DOKTOP WFFMAH"); //Доктор Эггман
	WriteData((const char**)0x528500, "WMN"); //Эми
	WriteData((const char**)0x528549, "HAIATZ"); //Начать
	WriteData((const char**)0x528599, "BPEMR"); //Время
	WriteData((const char**)0x5285A8, "CIYT"); //Счёт
	WriteData((const char**)0x5285E9, "OIKOB"); //Очков
	WriteData((const char**)0x528632, "OIKOB"); //Очков
	WriteData((const char**)0x5286D1, "NFPA OKOHIEHA"); //Игра окончена
	WriteData((const char**)0x528728, "VOSDPABLREM"); //Подзравляем
	WriteData((const char**)0x528790, "VOLUINTE VEPO BONHA"); //Получите Перо воина
	WriteData((const char**)0x5287A3, "VOLUINTE DLNHHJQ MOLOT"); //Получите Длинный молот
	WriteData((const char**)0x5287FA, "BJ VOXNLN PEKOPD"); //Вы побили рекорд

	//Minigame

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
}

void LoadCharacterUnlockText()
{
	WriteData((const char**)0x916998, "\tТЕЙЛЗ теперь доступен для игры!");
	WriteData((const char**)0x9169AC, "\tНАКЛЗ теперь доступен для игры!");
	WriteData((const char**)0x9169D4, "\tЭМИ теперь доступна для игры!");
	WriteData((const char**)0x9169E8, "\tE-102 теперь доступен для игры!");
	WriteData((const char**)0x9169FC, "\tБИГ теперь доступен для игры!");
	WriteData((const char**)0x4B5433, "\tМетал Соник доступен\nдля режима «Испытания».");
}

void LoadKeysText()
{
	WriteData((const char**)0x111C6A8, "\aКлюч воспарил...");
	WriteData((const char**)0x111C680, "\aПохоже, ключ не отсюда...");

	WriteData((const char**)0x7D3AB1, "\aСеребряная статуя...\nПохожа на ключ.");
	WriteData((const char**)0x7D3A72, "\aЗолотая статуя...\nПохожа на ключ.");

	WriteData((const char**)0x7D3A2B, "\aКамень ветра... Похож на ключ.\nЕго внешний вид что-то значит.");
	WriteData((const char**)0x7D39E0, "\aКамень льда... Похож на ключ.\nДумаю, он откуда-то отсюда.");
	WriteData((const char**)0x2BBF538, "\aКамень льда... Похож на ключ.\nКажется, он из Мистических руин.");
}

void LoadMonkeyDetonatorText()
{
	WriteData((const char**)0x111CB68, "\aНаписано:\n«Кнопка дистанционного уничтожения».");
	WriteData((const char**)0x111CB6C, "\a«Нажмите для активации».");

	WriteData((const char**)0x111CB38, "\aИ... нажал!");
	WriteData((const char**)0x111CB10, "\aКнопка нажата,\nно ничего не произошло.");
	WriteData((const char**)0x111CAE8, "\aКнопка нажата,\nно ничего не произошло.");
}

void LoadPauseMenuMessages()
{
	WriteData((const char**)0x917DD0, "Вернуть настройки по умолчанию?");
	WriteData((const char**)0x917DE4, "Нажмите кнопку действия,\nчтобы вернуться.");
	WriteData((const char**)0x917DF8, "Изменить эту кнопку?");
	WriteData((const char**)0x917E0C, "Нажмите кнопку, которую хотите изменить.");

	WriteData((const char**)0x90C4A8, "Желаете закончить игру и вернуться\nк выбору персонажа?");
	WriteData((const char**)0x90C4BC, "Желаете покинуть уровень и вернуться\nна Поле приключений?");
	WriteData((const char**)0x90C4D0, "Желаете закончить игру и вернуться\nв главное меню?");
}


// Boss titles

void LoadBossTitles()
{
	WriteData((const char**)0x5482A8, ConvertBossTitle("Хаос 0"));
	WriteData((const char**)0x54CCFE, ConvertBossTitle("Хаос 2"));
	WriteData((const char**)0x5509DC, ConvertBossTitle("Хаос 4"));
	WriteData((const char**)0x559872, ConvertBossTitle("Хаос 6"));
	WriteData((const char**)0x56037F, ConvertBossTitle("Абсолютный Хаос"));
	WriteData((const char**)0x587DA4, ConvertBossTitle("ЗЕРО"));
	WriteData((const char**)0x571813, ConvertBossTitle("ЭГГ-ШЕРШЕНЬ"));
	WriteData((const char**)0x57F2A1, ConvertBossTitle("ЭГГ-ГАДЮКА"));
	WriteData((const char**)0x5757B3, ConvertBossTitle("ЭГГ-ШАГОХОД"));
	WriteData((const char**)0x566F64, ConvertBossTitle("Е-101 Бета"));
	WriteData((const char**)0x4E6C81, ConvertBossTitle("Е-103 Дельта"));
	WriteData((const char**)0x604791, ConvertBossTitle("Е-104 Эпсилон"));
	WriteData((const char**)0x5A39F8, ConvertBossTitle("Е-105 Дзета"));
	WriteData((const char**)0x56C2B8, ConvertBossTitle("Е-101 модель 2"));
}


// Tikal hints for bosses

void LoadTikalHintsForBosses()
{
	// Chaos 0 (when timer is 01:00:00)

	WriteData((HintText_Text*)0x7FD51C, { "\aДля самонаводящейся атаки\nдважды нажми кнопку прыжка!", 180 });
	WriteData((HintText_Text*)0x7FD56C, { "\aЦелься в уязвимую точку\nна голове.", 120 });

	// Chaos 2

	WriteData((HintText_Text*)0x7FD960, { "\aЦелься в голову Хаоса,\nкогда он откроется!", 180 });
	WriteData((HintText_Text*)0x7FD9B0, { "\aСпланируй в него или ударь\nв прыжке вместо ударов кулаками.", 180 });
	WriteData((HintText_Text*)0x7FDA00, { "\aТы можешь отбить кулаком\nмаленькие водяные шарики!", 180 });

	// Chaos 4

	WriteData((HintText_Text*)0x7FE450, { "\aУ тебя будет шанс ударить,\nкогда Хаос высунет свою голову.", 150 });

	// Chaos 6

	WriteData((HintText_Text*)0x7FEBA0, { "\aЗаморозить бы Хаоса...\nПридумай, как это сделать.", 180 });
	WriteData((HintText_Text*)0x7FEBF8, { "\aКидай бомбы Эггмана\nпрямо в пасть Хаоса.", 180 });

	WriteData((HintText_Text*)0x7FEC48, { "\aПрицелься в лягушку\nи закинь в неё наживку!", 180 });

	WriteData((HintText_Text*)0x7FECA8, { "\aУ тебя появится возможность\nиспользовать удочку,", 120 });
	WriteData((HintText_Text*)0x7FECB0, { "\aкогда Хаос подойдёт ближе!", 180 });

	// Egg Hornet

	WriteData((HintText_Text*)0x801D54, { "\aЭгг-Мобиль – его слабое место.\nАтакуй, когда подберёшься ближе.", 250 });

	// Egg Walker	

	WriteData((HintText_Text*)0x802D00, { "\aЧтобы он потерял равновесие,\nметь ему в ноги.", 120 });
	WriteData((HintText_Text*)0x802D10, { "\aБей не только по ногам.\nАтакуй ещё и кабину!", 120 });

	// Egg Viper

	WriteData((HintText_Text*)0x803444, { "\aЭггман на той стороне\nконцентрирует энергию...", 120 });
	WriteData((HintText_Text*)0x803454, { "\aДоберись до него, используя\nСамонаводящуюся атаку...", 120 });
	WriteData((HintText_Text*)0x803464, { "\a...и бей в кабину!", 120 });
	WriteData((HintText_Text*)0x803474, { "\aЗапрыгни на эти детали\nи доберись до кабины.", 300 });
	WriteData((HintText_Text*)0x803484, { "\aБерегись! Он что-то задумал!", 120 });

	// ZERO (when timer is 01:00:00)

	WriteData((HintText_Text*)0x8046E4, { "\aУ него должно быть слабое место.", 120 });
	WriteData((HintText_Text*)0x8046EC, { "\aПродолжай атаковать,\nпока не найдёшь его!", 160 });

	// Perfect Chaos

	WriteData((HintText_Text*)0x800544, { "\aНа максимальной скорости\nты станешь подобен молнии.", 240 });
	WriteData((HintText_Text*)0x80054C, { "\aТолько так у тебя будет шанс\nатаковать Хаоса!", 120 });
}


void LoadMissionText()
{
	for (int i = 0; i < MissionModeTutorial.size(); i++)
	{
		MissionModeTutorial[i] = MissionModeTutorialRus[i];
	}

	int currentAddress = 0x1704B90; // отсюда начинаются описания миссий
	const int bufferSize = 208; // с этой периодичностью
	char buffer[bufferSize];
	for (int i = 0; i < std::size(MissionsRus); i++)
	{
		sprintf_s(buffer, MissionsRus[i]);
		WriteData((char*)currentAddress, buffer);
		currentAddress += bufferSize;
	}
}

void LoadGameGearStuff()
{
	WriteData((const char**)0x4B54DB, "Разблокирована игра для Game Gear:\n'%s'.");
	
	int currentAddress = 0x7E6278; // отсюда начинаются названия игр
	const int bufferSize = 43;
	char buffer[bufferSize];
	for (int i = 0; i < std::size(GameGearTitles); i++)
	{
		sprintf_s(buffer, GameGearTitles[i]);
		WriteData((char*)currentAddress, buffer);
		currentAddress += bufferSize;
	}
}


void LoadDCChaoGardenText()
{
	WriteData((HintText_Text*)0x880DE0, AboutChaoGarden);
	WriteData((HintText_Text*)0x880DF8, AboutChaoEggs);
	WriteData((HintText_Text*)0x880E20, AboutLittleAnimals);
	WriteData((HintText_Text*)0x880E38, AboutFeedingBreedingEtc);
	WriteData((HintText_Text*)0x880EB0, AboutWarphole);
	WriteData((HintText_Text*)0x880ED8, AboutNameMachine);
	WriteData((HintText_Text*)0x880F00, AboutChaoStadium);
	WriteData((HintText_Text*)0x887B88, AboutChaoRace);
}


void LoadOtherText()
{
	// Tikal's hint for hunting stages
	WriteData((HintText_Text*)0x88C730, { "\aДавай за мной!", 60 });
	
	// New lure messages
	WriteData((const char**)0x9818A0, "\aНовая наживка!");
	WriteData((const char**)0x9818A4, "\aС ней удастся поймать\nболее крупную рыбу!");	

	// Station Square cards messages
	WriteData((const char**)0x2BC07B8, "\aЭто пропуск сотрудника!\nС ним я смогу пройти в здание.");

	WriteData((const char**)0x2BC07E0, "\aПроверка ID...");

	WriteData((const char**)0x2BBF470, "\aПропуск на картинг!\nС ним можно попасть на Мерцающий заезд.");
	WriteData((const char**)0x2BBF478, "\tДобро пожаловать\nна Мерцающий заезд!");
	
	// Chao Garden hint monitors
	WriteData((const char**)0x887738, "ВЫХОД");
	WriteData((const char**)0x887734, "ДАЛЕЕ");
	WriteData((const char**)0x887730, "НАЗАД");
}


void LoadText()
{
	SetUpTextureFonts();
	
	LoadFileSelectText();
	LoadSoundTestText();
	LoadHedgehogHammerText();
	LoadCharacterUnlockText();
	LoadKeysText();
	LoadMonkeyDetonatorText();
	LoadPauseMenuMessages();
	
	LoadBossTitles();
	LoadTikalHintsForBosses();

	LoadMissionText();
	LoadGameGearStuff();

	LoadDCChaoGardenText();

	LoadOtherText();
}