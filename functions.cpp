#include <iostream>
#include <string>
#include <fstream>
#include "classes.h"
#include "functions.h"
using namespace std;



//converts a passed in string into lowercase using the ascii method
string String::toLower()
{
	for (int i = 0; i < data.length(); i++)
	{
		if (data[i] >= 'A' && data[i] <= 'Z')
		{
			data[i] = data[i] + 32;
		}
	}
	cout << data;
	return data;
}
//converts a passed in string into uppercase using the ascii method
string String::toUpper()
{
	for (int i = 0; i < data.length(); i++)
	{
		if (data[i] >= 'a' && data[i] <= 'z')
		{
			data[i] = data[i] - 32;
		}
	}
	cout << data;
	return data;
}
//gets the length of a passed in string
int String::strLength()
{
	cout << data.length() << endl;
	return data.length();
}
//appends str to the end of a passed in string
string String::Append(string str)
{
	cout << data.append(str) << endl;
	return data.append(str);
}
//prepends str to the front of a passed in string
string String::Prepend(string str)
{
	cout << data.insert(0, str);
	return data.insert(0, str);
}
//checks if two passed in string are equal to each other
bool String::EqualTo(string input)
{
	if (data == input)
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
int String::CharacterAt(int input)
{
	int lengCheck = data.length();
	if (input < lengCheck && input > 0)
	{
		char charReturn = data[input];
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
int String::Find(string findInput)
{
	int finder = data.find(findInput);
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
int String::Find(int startIndex, string findInput)
{
	int finder = data.find(findInput, startIndex);
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
string String::Replace(string findInput, string replace)
{
	int finder = data.find(findInput);
	int finderLeng = findInput.length() + finder;
	if (finder != string::npos)
	{
		cout << data.replace(finder, finderLeng, replace) << endl;
		return data.replace(finder, finderLeng, replace);
	}
	else
		cout << "Not Found" << endl;
		return "Not Found";
}

string String::ReadFromConsole(string input)
{
	return input;
}

string String::WriteToConsole()
{
	cout << data << endl;
	return data;
}