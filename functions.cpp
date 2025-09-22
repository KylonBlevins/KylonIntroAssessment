#include <iostream>
#include <string>
#include <fstream>
#include "functions.h"
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

int String::Find(string input)
{

}

int String::Find(int startIndex, string input)
{

}