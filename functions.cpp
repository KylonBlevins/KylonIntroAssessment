#include <iostream>
#include <string>
#include <fstream>
#include "classes.h"
using namespace std;

//converts a passed in string into lowercase using the ascii method
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
//converts a passed in string into uppercase using the ascii method
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
//gets the length of a passed in string
int String::strLength(string input)
{
	return input.length();
}
//appends str to the end of a passed in string
string String::Append(string input)
{
	string finalinput = input.append("str");
	return finalinput;
}
//prepends str to the front of a passed in string
string String::Prepend(string input)
{
	string finalinput = input.insert(0, "str");
	return finalinput;
}
//checks if two passed in string are equal to each other
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
//returns the first character of a passed in string as constant
char String::CStr(string input)
{
	const char strCon = input[1];
	return strCon;
}
//gets the character located at (input2) of a passed in string (input1)
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
//finds a specified string (findinput) inside of a passed in string (input)
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
//finds a specified string (findinput) from a specified start index inside of a passed in string (input)
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

