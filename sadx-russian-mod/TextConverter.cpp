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
	{ '�', '8' },
	{ '�', '9' },
	{ '�', 'A' },
	{ '�', 'B' },
	{ '�', 'C' },
	{ '�', 'D' },
	{ '�', 'E' },
	{ '�', 'F' },
	{ '�', 'G' },
	{ '�', 'H' },
	{ '�', 'I' },
	{ '�', 'J' },
	{ '�', 'K' },
	{ '�', 'L' },
	{ '�', 'M' },
	{ '�', 'N' },
	{ '�', 'O' },
	{ '�', 'P' },
	{ '�', 'Q' },
	{ '�', 'R' },
	{ '�', 'S' },
	{ '�', 'T' },
	{ '�', 'U' },
	{ '�', 'V' },
	{ '�', 'W' },
	{ '�', 'X' },
	{ '�', 'Y' },
	{ '�', 'Z' },
	{ '�', 'a' },
	{ '�', 'b' },
	{ '�', 'c' },
	{ '�', 'd' },
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
