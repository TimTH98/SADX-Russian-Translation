#include "stdafx.h"
#include "TextConverter.h"
#include <map>


static std::map<char, char> BossTitleLetters
{
	{ '-', '7' },
	{ 'А', '8' },
	{ 'Б', '9' },
	{ 'Г', 'A' },
	{ 'Д', 'B' },
	{ 'Е', 'C' },
	{ 'З', 'D' },
	{ 'К', 'E' },
	{ 'Н', 'F' },
	{ 'О', 'G' },
	{ 'Р', 'H' },
	{ 'Х', 'I' },
	{ 'Ш', 'J' },
	{ 'Ь', 'K' },
	{ 'Э', 'L' },
	{ 'Ю', 'M' },
	{ 'а', 'N' },
	{ 'б', 'O' },
	{ 'д', 'P' },
	{ 'е', 'Q' },
	{ 'з', 'R' },
	{ 'и', 'S' },
	{ 'й', 'T' },
	{ 'л', 'U' },
	{ 'м', 'V' },
	{ 'н', 'W' },
	{ 'о', 'X' },
	{ 'п', 'Y' },
	{ 'с', 'Z' },
	{ 'т', 'a' },
	{ 'ы', 'b' },
	{ 'ь', 'c' },
	{ 'ю', 'd' },
};

static std::map<char, char> AbcTxtLetters
{
	{ 'А', 'A' },
	{ 'Б', 0x01 },
	{ 'В', 'B' },
	{ 'Г', 0x02 },
	{ 'Д', 0x03 },
	{ 'Е', 'E' },
	{ 'З', 0x04 },
	{ 'К', 'K' },
	{ 'М', 'M' },
	{ 'Н', 'H' },
	{ 'П', 0x05 },
	{ 'Р', 'P' },
	{ 'С', 'C' },
	{ 'Т', 'T' },
	{ 'У', 0x06 },
	{ 'Ф', 0x07 },
	{ 'Х', 'X' },
	{ 'Ч', 0x08 },
	{ 'Ш', 0x09 },
	{ 'Э', 0x0A },
	{ 'а', 'a' },
	{ 'б', 0x0B },
	{ 'в', 0x0C },
	{ 'г', 0x0D },
	{ 'д', 0x0E },
	{ 'е', 'e' },
	{ 'ж', 0x0F },
	{ 'з', 0x10 },
	{ 'и', 0x11 },
	{ 'й', 0x12 },
	{ 'к', 0x13 },
	{ 'л', 0x14 },
	{ 'м', 0x15 },
	{ 'н', 0x16 },
	{ 'о', 'o' },
	{ 'п', 0x17 },
	{ 'р', 'p' },
	{ 'с', 'c' },
	{ 'т', 0x18 },
	{ 'у', 'y' },
	{ 'ф', 0x19 },
	{ 'х', 'x' },
	{ 'ц', 0x1A },
	{ 'ч', 0x1B },
	{ 'ш', 0x1C },
	{ 'щ', 0x1D },
	{ 'ы', 0x1E },
	{ 'ь', 0x1F },
	{ 'э', '<'},
	{ 'ю', '=' },
	{ 'я', '>' },
};


std::string ReplaceLetters(const std::map<char, char>& letterMap, std::string& text)
{
	int length = text.length();
	for (int i = 0; i < length; i++)
	{
		if (letterMap.count(text[i]))
		{
			text[i] = letterMap.at(text[i]);
		}
	}
	return text;
}

const char* ConvertToCStyle(const std::string& text)
{
	char* result = new char[text.length()];
	strcpy(result, text.c_str());
	return result;
}


const char* ConvertBossTitle(std::string text)
{
	return ConvertToCStyle(ReplaceLetters(BossTitleLetters, text));
}

const char* ConvertAbcTxt(std::string text)
{
	return ConvertToCStyle(ReplaceLetters(AbcTxtLetters, text));
}