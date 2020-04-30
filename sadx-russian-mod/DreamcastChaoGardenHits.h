#pragma once
#include <SADXFunctions.h>

// Original code by PkR

__int16 ChaoGardenMessages_English_0_Control[] = {
	NPCTextControl_EventFlag,
	8,
	NPCTextControl_Voice,
	199,
	NPCTextControl_SetEventFlag,
	0x4008,
	NPCTextControl_End
};

HintText_Text ChaoGardenMessages_English_0_Text[] = {
	{ "\aЭто сад Чао.", 120 },
	{ "\aЕсли принести сюда яйца, найденные\nна уровнях, из них вылупятся Чао.", 360 },
	{ 0 }
};

__int16 ChaoGardenMessages_English_1_Control[] = {
	NPCTextControl_EventFlag,
	2,
	NPCTextControl_Voice,
	193,
	NPCTextControl_SetEventFlag,
	0x4002,
	NPCTextControl_End
};

HintText_Text ChaoGardenMessages_English_1_Text[] = {
	{ "\aЯйцо может созреть само\nпо себе спустя время, но...", 120 }, 
	{ "\aвы можете ускорить созревание,\nкачая яйцо на руках.", 120 }, 
	{ "\aХарактер Чао будет меняться\nв зависимости от того,", 120 }, 
	{ "\aкак вы обращались с яйцом.\nПопробуйте разные методы.", 150 } ,
	{ 0 }
};

__int16 ChaoGardenMessages_English_2_Control[] = {
	NPCTextControl_EventFlag,
	3,
	NPCTextControl_Voice,
	1952,
	NPCTextControl_SetEventFlag,
	0x4003,
	NPCTextControl_End
};

HintText_Text ChaoGardenMessages_English_2_Text[] = {
	{ "\aЧао изменится, если дать ему\nмаленькое животное.", 150 } ,
	{ "\aПопробуй давать Чао\nразных животных.", 150 } ,
	{ 0 }
};

HintText_Text ChaoGardenMessages_English_3_Text[] = {
	{ "\a'Как кормить Чао'", 0 } ,
	{ "\aЧао любят орехи. Они падают с\nдеревьев, если их потрясти.", 0 } ,
	{ "\aВстаньте перед деревом и потрясите", 0 } ,
	{ "\aего, используя кнопку действия\nи кнопки управления.", 0 } ,
	{ "\aФрукты по-разному влияют на Чао.\nПопробуйте понаблюдать за", 0 } ,
	{ "\aэтим процессом.", 0 } ,
	{ "\a'Размножение Чао'", 0 } ,
	{ "\aКогда вокруг Чао цветут цветы,\nнаступает брачный сезон.", 0 } ,
	{ "\aЕсли посадить двух Чао вместе,", 0 } ,
	{ "\aбыть может, они снесут яйцо?..", 0 } ,
	{ "\a'И напоследок...'", 0 } ,
	{ "\aВ одном саду может находиться\nне более 8 Чао.", 0 } ,
	{ "\aЕсли же их больше 8...", 0 } ,
	{ "\aто им становится тесно, и\nони уходят в другой сад.", 0 } ,
	{ 0 }
};

HintText_Text ChaoGardenMessages_English_4_Text[] = {
	{ "\a'Портал'", 0 } ,
	{ "\aЭто портал.\nОтсюда можно быстро попасть в те", 0 } ,
	{ "\aсады, где вы уже побывали.", 0 } ,
	{ "\aС собой можно взять яйцо или Чао.", 0 } ,
	{ 0 }
};

HintText_Text ChaoGardenMessages_English_5_Text[] = {
	{ "\a'Машина имён'", 0 } ,
	{ "\aЭта машина позволяет дать\nЧао имя.", 0 } ,
	{ "\aВозьми Чао и положи его\nна красную кнопку.", 0 } ,
	{ "\aДавай Чао милые имена, договорились?", 0 } ,
	{ 0 }
};

HintText_Text ChaoGardenMessages_English_6_Text[] = {
	{ "\aДобро пожаловать на стадион Чао!\nЗдесь проводятся гонки Чао!", 0 } ,
	{ 0 }
};

//Custom messages

HintText_Text ChaoGardenMessages_English_7_Text[] = {
	{ "\a'Гонки Чао'", 0 },
	{ "\a\x81\xA1Здесь Чао состязаются между собой,\nприменяя развитые умения!", 0 },
	{ "\a\x81\xA1Если занять первое место в\nДрагоценных гонках Чао,", 0 },
	{ "\aто Чао получит\nдрагоценный кулон.", 0 },
	{ "\x81\xA1\aМузыка и голос поддержат Чао.\nОн немного ускорится, если", 0 },
	{ "\aподбодрить его, когда тот светится.\nПоддержать: кнопки ABXY", 0 },
	{ "\x81\xA1\aВыберите Чао, за которым хотите\nпосмотреть, перемещая треугольный", 0 },
	{ "\aуказатель кнопками камеры.", 0 },
	{ "\aИзменение углов камеры:\nкнопки направления", 0 },
	{ 0 }
};

HintText_Entry ChaoGardenMessages_English[] = {
	{ ChaoGardenMessages_English_0_Control, ChaoGardenMessages_English_0_Text },
	{ ChaoGardenMessages_English_1_Control, ChaoGardenMessages_English_1_Text },
	{ ChaoGardenMessages_English_2_Control, ChaoGardenMessages_English_2_Text },
	{ NULL, ChaoGardenMessages_English_3_Text },
	{ NULL, ChaoGardenMessages_English_4_Text },
	{ NULL, ChaoGardenMessages_English_5_Text },
	{ NULL, ChaoGardenMessages_English_6_Text },
	{ NULL, ChaoGardenMessages_English_7_Text }
};

#pragma warning(pop)