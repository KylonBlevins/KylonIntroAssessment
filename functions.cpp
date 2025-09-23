#include <iostream>
#include <string>
#include <fstream>
#include "classes.h"
using namespace std;

TestString Test;

//This function runs and tests all of the functions inside of the String class
void TestString::testStringClass()
{
	cout << "This program evaluates that all of the String Class functions work as intended." << endl;
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

	Test.resultsLogger();
}

//converts data into lowercase using the ascii method
string String::toLower()
{
	for (int i = 0; i < data.length(); i++)
	{
		if (data[i] >= 'A' && data[i] <= 'Z')
		{
			data[i] = data[i] + 32;
		}
	}
	testsPassed = testsPassed + 1;
	return data;
}
//converts data into uppercase using the ascii method
string String::toUpper()
{
	for (int i = 0; i < data.length(); i++)
	{
		if (data[i] >= 'a' && data[i] <= 'z')
		{
			data[i] = data[i] - 32;
		}
	}
	testsPassed = testsPassed + 1;
	return data;
}
//gets the length of data
int String::strLength()
{
	cout << data.length() << endl;
	testsPassed = testsPassed + 1;
	return data.length();
}
//appends str to the end of data
string String::Append(string str)
{
	data = data.append(str);
	testsPassed = testsPassed + 1;
	return data;
}
//prepends str to the front of data
string String::Prepend(string str)
{
	data = data.insert(0, str);
	testsPassed = testsPassed + 1;
	return data;
}
//checks if data is equal to a passed in string
bool String::EqualTo(string input)
{
	if (data == input)
	{
		cout << "true" << endl;
		testsPassed = testsPassed + 1;
		return true;
	}
	else
	{
		cout << "false" << endl;
		return false;
	}
}
//gets the character located at (input) of data
int String::CharacterAt(int input)
{
	int lengCheck = data.length();
	if (input < lengCheck && input > 0)
	{
		char charReturn = data[input];
		cout << charReturn << endl;
		testsPassed = testsPassed + 1;
		return data[input];
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
		testsPassed = testsPassed + 1;
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
			testsPassed = testsPassed + 1;
			return 1;
		}
		else
		{
			cout << -1 << endl;
			return 0;
		}
}
//replaces a specified part of a string (findInput) with a different phrase
string String::Replace(string findInput, string replace)
{
	int finder = data.find(findInput);
	int finderLeng = findInput.length() + finder;
	for (int i = 0; i < finderLeng; i++)
	{
		if (finder != string::npos)
		{
			data = data.replace(finder, finderLeng, replace);
		}
		else
			cout << "Not Found" << endl;
	}
	testsPassed = testsPassed + 1;
	return data;
}
//takes an input from the user and changes the value of data to that input
string String::ReadFromConsole()
{
	string input;
	cin >> input;
	data = input;
	testsPassed = testsPassed + 1;
	return data;
}
//returns data and displays it on the console
string String::WriteToConsole()
{
	cout << data << endl;
	testsPassed = testsPassed + 1;
	return data;
}
//checks how many of the tests were successful and logs them to a log file
void TestString::resultsLogger()
{
	ofstream strLog("string_test_log.txt", ios::app);

	float passRate = (float)testsPassed / 12;

	if (strLog.is_open())
	{
		strLog << "|String Class Test Results|" << endl;
		strLog << "Tests passed: " << testsPassed << "/12" << endl;
		strLog << "Percentage passed: " << passRate << "%" << endl;
		strLog.close();

		cout << "Test results logged successfully!" << endl;
	}
	else
	{
		cout << "Warning: Could not write to string test log!" << endl;
	}
}