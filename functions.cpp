#include <iostream>
#include <string>
#include <fstream>
#include "classes.h"
using namespace std;

string String::toLower(string input)
{
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] >= 'A' && input[i] <= 'Z')
		{
			input[i] = input[i] + 32;
		}
	}
	cout << input;
	return input;
}

string String::toUpper(string input)
{
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] >= 'a' && input[i] <= 'z')
		{
			input[i] = input[i] - 32;
		}
	}
	cout << input;
	return input;
}

int String::strLength(string input)
{
	return input.length();
}

string String::Append(string input)
{
	input = input + "str";
	return input;
}

string String::Prepend(string input)
{
	input = "str" + input;
	return input;
}

bool String::EqualTo(string input1, string input2)
{
	if (input1 == input2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

char String::CStr(string input)
{
	const char strCon = input[1];
	return strCon;
}

void String::CharacterAt(string input1, int input2)
{
	int lengCheck = input1.length();
	if (input2 < lengCheck && input2 > 0)
	{
		char charReturn = input1[input2];
		cout << charReturn << endl;
	}
	else
	{
		cout << "0" << endl;
	}
}

int String::Find(string input, string findInput)
{
	int finder = input.find(findInput);
	if (finder != string::npos)
	{
		return finder;
	}
	else
	{
		return -1;
	}
}

int String::Find(int startIndex, string input, string findInput)
{
	int finder = input.find(findInput, startIndex);
		if (finder != string::npos)
		{
			return finder;
		}
		else
		{
			return -1;
		}
}