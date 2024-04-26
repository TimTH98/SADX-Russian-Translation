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

static std::map<char, char> StaffrollTxtLetters
{
	{ 'А', 'A' },
	{ 'Б', 0x01 },
	{ 'В', 'B' },
	{ 'Д', 0x02 },
	{ 'Е', 'E' },
	{ 'З', 0x03 },
	{ 'И', 0x04 },
	{ 'Й', 0x05 },
	{ 'К', 'K' },
	{ 'Л', 0x06 },
	{ 'М', 'M' },
	{ 'Н', 'H' },
	{ 'О', 'O' },
	{ 'П', 0x07 },
	{ 'Р', 'P' },
	{ 'С', 'C' },
	{ 'Т', 'T' },
	{ 'У', 0x08 },
	{ 'Х', 'X' },
	{ 'Ы', 0x09 },
	{ 'а', 'a' },
	{ 'б', 0x0A },
	{ 'в', 0x0B },
	{ 'г', 0x0C },
	{ 'д', 0x0D },
	{ 'е', 'e' },
	{ 'ё', 0x0E },
	{ 'з', 0x0F },
	{ 'и', 0x10 },
	{ 'й', 0x11 },
	{ 'к', 0x12 },
	{ 'л', 0x13 },
	{ 'м', 0x14 },
	{ 'н', 0x15 },
	{ 'о', 'o' },
	{ 'п', 0x16 },
	{ 'р', 'p' },
	{ 'с', 'c' },
	{ 'т', 0x17 },
	{ 'у', 'y' },
	{ 'ф', 0x18 },
	{ 'ч', 0x19 },
	{ 'щ', 0x1A },
	{ 'ы', 0x1B },
	{ 'ь', 0x1C },
	{ 'ю', 0x1D },
	{ 'я', 0x1E },
};


std::string ReplaceLetters(const std::map<char, char>& letterMap, std::string& text)
{
	for (auto& letter : text)
	{
		if (letterMap.count(letter))
		{
			letter = letterMap.at(letter);
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

const char* ConvertStaffrollTxt(std::string text)
{
	return ConvertToCStyle(ReplaceLetters(StaffrollTxtLetters, text));
}