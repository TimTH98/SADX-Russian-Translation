#pragma once
#include <SADXFunctions.h>

#pragma warning(push)
#pragma warning(disable: 4267 4838)

//Original messages

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
	{ "\aЭто сад Чао.", 120 } /* "\aThis is the Chao Garden." */,
	{ "\aЕсли принести сюда яйца, найденные\nна уровнях, из них вылупятся Чао.", 360 } /* "\aIf you bring the eggs you find all\nover the world, a Chao will be born." */,
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
	{ "\aЯйцо может созреть само\nпо себе спустя время, но...", 120 } /* "\aThe egg will hatch\nnaturally after a while." */,
	{ "\aвы можете ускорить созревание,\nкачая яйцо на руках.", 120 } /* "\aYou can also help the egg to hatch." */,
	{ "\aХарактер Чао будет меняться\nв зависимости от того,", 120 } /* "\aDepending on how you hatch the egg," */,
	{ "\aкак вы обращались с яйцом.\nПопробуйте разные методы.", 120 } /* "\athe characteristics of\nthe Chao will be affected." */,
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
	{ "\aЧао изменится, если дать ему\nмаленькое животное.", 150 } /* "\aIf you give a Chao a small animal,\nthe Chao changes." */,
	{ "\aПопробуй давать Чао\nразных животных.", 150 } /* "\aTry experimenting using\ndifferent animals." */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_English_3_Text[] = {
	{ "\a'Как кормить Чао'", 0 } /* "\a'Feeding your Chao'" */,
	{ "\aЧао любят орехи. Они падают с\nдеревьев, если их потрясти.", 0 } /* "\aChao love to eat fruits.\nYou can get them by shaking trees." */,
	{ "\aВстаньте перед деревом и потрясите", 0 } /* "\aWhen you want to shake a tree," */,
	{ "\aего, используя кнопку действия\nи кнопки управления.", 0 } /* "\ause the action button\nand +Control Pad." */,
	{ "\aФрукты по-разному влияют на Чао.\nПопробуйте понаблюдать за", 0 } /* "\aDifferent Chao fruits\nhave different effects." */,
	{ "\aэтим процессом.", 0 } /* "\aTry giving them different fruits." */,
	{ "\a'Размножение Чао'", 0 } /* "\a'How to Breed your Chao'" */,
	{ "\aКогда вокруг Чао цветут цветы,\nнаступает брачный сезон.", 0 } /* "\aWhen flowers start to bloom around\nthe Chao, it is ready for breeding." */,
	{ "\aЕсли посадить двух Чао вместе,", 0 } /* "\aIf you put it with other Chao," */,
	{ "\aбыть может, они снесут яйцо?..", 0 } /* "\ayou may get lucky and\nit may lay an egg." */,
	{ "\a'И напоследок...'", 0 } /* "\a'Extra Advice'" */,
	{ "\aВ одном саду может находиться\nне более 8 Чао.", 0 } /* "\aIf you put more than\n8 Chao in one garden," */,
	{ "\aЕсли же их больше 8...", 0 } /* "\athey start to feel crowded." */,
	{ "\aто им становится тесно, и\nони уходят в другой сад.", 0 } /* "\aIf it gets too crowded, some Chao\nstart moving to other gardens." */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_English_4_Text[] = {
	{ "\a'Портал'", 0 } /* "\a'Warp Hole'" */,
	{ "\aЭто портал.\nОтсюда можно быстро попасть в те", 0 } /* "\aThis is a Warp Hole.\nYou can go easily to gardens" */,
	{ "\aсады, где вы уже побывали.", 0 } /* "\ayou have previously been to." */,
	{ "\aС собой можно взять яйцо или Чао.", 0 } /* "\aYou may bring Chao and\neggs with you, too." */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_English_5_Text[] = {
	{ "\a'Машина имён'", 0 } /* "\a'Name Machine'" */,
	{ "\aЭта машина позволяет дать\nЧао имя.", 0 } /* "\aThis is a machine that\nrecords Chao's name." */,
	{ "\aВозьми Чао и положи его\nна красную кнопку.", 0 } /* "\aGrab Chao and place Chao \non the red button to start." */,
	{ "\aДавай Чао милые имена, договорились?", 0 } /* "\aGive Chao a cute name, OK?" */,
	{ 0 }
};

HintText_Text ChaoGardenMessages_English_6_Text[] = {
	{ "\aДобро пожаловать на стадион Чао!\nHome of the Chao Races!!", 0 } /* "\aWelcome to Chao Stadium!\nHome of the Chao Races!!" */,
	{ 0 }
};

//Custom messages

HintText_Text ChaoGardenMessages_English_7_Text[] = {
	{ "\a'Гонки Чао'", 0 },
	{ "\a\x81\xA1Здесь Чао состязаются между со-\nбой, применяя развитые умения!", 0 },
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