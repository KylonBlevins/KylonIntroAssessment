#include <iostream>
#include <string>
#include <fstream>
#include "classes.h"
#include "functions.h"
using namespace std;

void String::testStringClass()
{
	cout << "This program evaluates that all of the String Class functions work as intended." << endl;
	String Test;
	cout << "What is the current value of data?" << endl;
	cout << Test.data << endl;
	cout << "What is 'He' after using the toLower function?" << endl;
	Test.toLower();
	cout << Test.data << endl;
	cout << "What is the length of 'he'?" << endl;
	Test.strLength();
	cout << "Append 'ese' to the end of 'he'." << endl;
	Test.Append("ese");
	cout << Test.data << endl;
	cout << "Prepend 'C' to the front of 'heese'." << endl;
	Test.Prepend("C");
	cout << Test.data << endl;
	cout << "True or false, data is now equal to the word 'Cheese'?" << endl;
	Test.EqualTo("Cheese");
	cout << "What character is at position 2 in 'Cheese'?" << endl;
	Test.CharacterAt(2);
	cout << "What position is the substring 'eese' in 'Cheese'?" << endl;
	Test.Find("eese");
	cout << "Can you find 'ese' starting from position 4 in 'Cheese'? If not, return -1" << endl;
	Test.Find(4, "ese");
	cout << "Replace 'eese' with 'ores'." << endl;
	Test.Replace("eese", "ores");
	cout << Test.data << endl;
	cout << "What is the word 'Chores' after using the toUpper function?" << endl;
	Test.toUpper();
	cout << Test.data << endl;
	cout << "Now input any string of your choice to change data to." << endl;
	Test.ReadFromConsole();
	cout << "Now, the console will print data." << endl;
	Test.WriteToConsole();
}

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
	return data.append(str);
}
//prepends str to the front of a passed in string
string String::Prepend(string str)
{
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
		return data.replace(finder, finderLeng, replace);
	}
	else
		cout << "Not Found" << endl;
		return "Not Found";
}

string String::ReadFromConsole()
{
	string input;
	cin >> input;
	data = input;
	return data;
}

string String::WriteToConsole()
{
	cout << data << endl;
	return data;
}