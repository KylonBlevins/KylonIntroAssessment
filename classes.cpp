#include <iostream>
#include <string>
#include <fstream>
#include "functions.h"
#include "classes.h"
using namespace std;

string toLower::string(string input)
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

string toUpper::string(string input)
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

int strLength::string(string input)
{
	return input.length();
}

string Append::string(string input)
{
	input = input + "str";
	return input;
}

string Prepend::string(string input)
{
	input = "str" + input;
	return input;
}

bool EqualTo::string(string input1, string input2)
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

char CStr::string(string input1)
{
	const char strCon = input1[1];
	return strCon;
}

int Find::string(string input)
{

}

int Find::string(int startIndex, string input)
{

}