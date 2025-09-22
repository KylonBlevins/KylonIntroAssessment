#include <iostream>
#include <string>
#include <fstream>
#include "functions.h"
#include "classes.h"
using namespace std;

string toLower(string input)
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

string toUpper(string input)
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

int strLength(string input)
{
	return input.length();
}

string Append(string input)
{
	input = input + "str";
	return input;
}

string Prepend(string input)
{
	input = "str" + input;
	return input;
}

bool EqualTo(string input1, string input2)
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

char CStr(string input1)
{
	const char strCon = input1[1];
	return strCon;
}