#include "stdafx.h"
#include "TextConverter.h"
#include <map>


static std::map<char, char> BossTitleLetters
{
	{ '0', '0' },
	{ '1', '1' },
	{ '2', '2' },
	{ '3', '3' },
	{ '4', '4' },
	{ '5', '5' },
	{ '6', '6' },
	{ '-', '7' },
	{ 'À', '8' },
	{ 'Á', '9' },
	{ 'Ã', 'A' },
	{ 'Ä', 'B' },
	{ 'Å', 'C' },
	{ 'Ç', 'D' },
	{ 'Ê', 'E' },
	{ 'Í', 'F' },
	{ 'Î', 'G' },
	{ 'Ð', 'H' },
	{ 'Õ', 'I' },
	{ 'Ø', 'J' },
	{ 'Ü', 'K' },
	{ 'Ý', 'L' },
	{ 'Þ', 'M' },
	{ 'à', 'N' },
	{ 'á', 'O' },
	{ 'ä', 'P' },
	{ 'å', 'Q' },
	{ 'ç', 'R' },
	{ 'è', 'S' },
	{ 'é', 'T' },
	{ 'ë', 'U' },
	{ 'ì', 'V' },
	{ 'í', 'W' },
	{ 'î', 'X' },
	{ 'ï', 'Y' },
	{ 'ñ', 'Z' },
	{ 'ò', 'a' },
	{ 'û', 'b' },
	{ 'ü', 'c' },
	{ 'þ', 'd' },
};

std::string ReplaceLetters(std::string text)
{
	int length = text.length();
	for (int i = 0; i < length; i++)
	{
		if (BossTitleLetters.count(text[i]))
		{
			text[i] = BossTitleLetters[text[i]];
		}
	}
	return text;
}

const char* ConvertToCStyle(std::string text)
{
	char* result = new char[text.length()];
	strcpy(result, text.c_str());
	return result;
}

const char* ConvertBossTitle(const char* text)
{
	return ConvertToCStyle(ReplaceLetters(text));
}
