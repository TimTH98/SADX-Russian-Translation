#pragma once
#include <SADXFunctions.h>

// Original code by PkR

__int16 ChaoGardenMessages_French_0_Control[] = {
	NPCTextControl_EventFlag,
	8,
	NPCTextControl_Voice,
	199,
	NPCTextControl_SetEventFlag,
	0x4008,
	NPCTextControl_End
};

HintText_Text ChaoGardenMessages_French_0_Text[] = {
	{ "\aЭто сад Чао.", 120 },
	{ "\aЕсли принести сюда яйца, найденные\nна уровнях, из них вылупятся Чао.", 360 },
	{ 0 }
};

__int16 ChaoGardenMessages_French_1_Control[] = {
	NPCTextControl_EventFlag,
	2,
	NPCTextControl_Voice,
	193,
	NPCTextControl_SetEventFlag,
	0x4002,
	NPCTextControl_End
};

HintText_Text ChaoGardenMessages_French_1_Text[] = {
	{ "\aЯйцо может созреть само\nпо себе спустя время, но...", 180 }, 
	{ "\aВы можете ускорить созревание,\nпокачав яйцо на руках.", 180 }, 
	{ "\aХарактер Чао будет меняться\nв зависимости от того,", 180 }, 
	{ "\aкак вы обращались с яйцом.\nПопробуйте разные методы.", 180 } ,
	{ 0 }
};

__int16 ChaoGardenMessages_French_2_Control[] = {
	NPCTextControl_EventFlag,
	3,
	NPCTextControl_Voice,
	1952,
	NPCTextControl_SetEventFlag,
	0x4003,
	NPCTextControl_End
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
	{ "\aВозьми Чао и положи его\nна красную кнопку.", 0 } ,
	{ "\aДавай Чао милые имена, хорошо?", 0 } ,
	{ 0 }
};

HintText_Text ChaoGardenMessages_French_6_Text[] = {
	{ "\aДобро пожаловать на стадион Чао!\nЗдесь проводятся гонки Чао!", 0 } ,
	{ 0 }
};


HintText_Text ChaoGardenMessages_French_7_Text[] = {
	{ "\a'Гонки Чао'", 0 },
	{ "\a\x81\xA1Здесь Чао состязаются между собой,\nприменяя развитые умения!", 0 },
	{ "\a\x81\xA1Если занять первое место\nв Гонке сокровищ,", 0 },
	{ "\aЧао получит драгоценный кулон.", 0 },
	{ "\x81\xA1\aМузыка и голос поддержат Чао.\nОн немного ускорится, если", 0 },
	{ "\aподбодрить его, когда тот светится.\nПоддержать: кнопки ABXY", 0 },
	{ "\x81\xA1\aВыберите Чао, за которым хотите\nпосмотреть, перемещая треугольный", 0 },
	{ "\aуказатель кнопками камеры.", 0 },
	{ "\aИзменение углов камеры:\nлевый стик", 0 },
	{ 0 }
};

HintText_Entry ChaoGardenMessages_French[] = {
	{ ChaoGardenMessages_French_0_Control, ChaoGardenMessages_French_0_Text },
	{ ChaoGardenMessages_French_1_Control, ChaoGardenMessages_French_1_Text },
	{ ChaoGardenMessages_French_2_Control, ChaoGardenMessages_French_2_Text },
	{ NULL, ChaoGardenMessages_French_3_Text },
	{ NULL, ChaoGardenMessages_French_4_Text },
	{ NULL, ChaoGardenMessages_French_5_Text },
	{ NULL, ChaoGardenMessages_French_6_Text },
	{ NULL, ChaoGardenMessages_French_7_Text }
};
#pragma warning(pop)