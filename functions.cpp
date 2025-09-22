#include <iostream>
#include <string>
#include <fstream>
#include "classes.h"
using namespace std;

void stringClassTest()
{

}
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
	cout << input.length() << endl;
	return input.length();
}
//appends str to the end of a passed in string
string String::Append(string input, string str)
{
	cout << input.append(str) << endl;
	return input.append(str);
}
//prepends str to the front of a passed in string
string String::Prepend(string input, string str)
{
	cout << input.insert(0, str);
	return input.insert(0, str);
}
//checks if two passed in string are equal to each other
bool String::EqualTo(string input1, string input2)
{
	if (input1 == input2)
	{
		cout << "true" << endl;
		return true;
	}
	else
	{
		cout << "false" << endl;
		return false;
	}
}
//gets the character located at (input2) of a passed in string (input1)
int String::CharacterAt(string input1, int input2)
{
	int lengCheck = input1.length();
	if (input2 < lengCheck && input2 > 0)
	{
		char charReturn = input1[input2];
		cout << charReturn << endl;
		return charReturn;
	}
	else
	{
		cout << 0 << endl;
		return 0;
	}
}
//finds a specified string (findinput) inside of a passed in string (input)
int String::Find(string input, string findInput)
{
	int finder = input.find(findInput);
	if (finder != string::npos)
	{
		cout << finder << endl;
		return finder;
	}
	else
	{
		cout << -1 << endl;
		return -1;
	}
}
//finds a specified string (findinput) from a specified start index inside of a passed in string (input)
int String::Find(int startIndex, string input, string findInput)
{
	int finder = input.find(findInput, startIndex);
		if (finder != string::npos)
		{
			cout << finder << endl;
			return finder;
		}
		else
		{
			cout << -1 << endl;
			return -1;
		}
}
string String::Replace(string input, string findInput, string replace)
{
	int finder = input.find(findInput);
	int finderLeng = findInput.length() + finder;

	if (finder != string::npos)
	{
		cout << input.replace(finder, finderLeng, replace) << endl;
		return input.replace(finder, finderLeng, replace);
	}
	else
		cout << "Not found" << endl;
	return "Not Found";
}
string String::ReadFromConsole(string input)
{
	return input;
}
string String::WriteToConsole(string input)
{
	cout << input << endl;
	return input;
}