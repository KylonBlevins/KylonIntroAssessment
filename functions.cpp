#include <iostream>
#include <string>
#include <fstream>
#include "classes.h"
using namespace std;

TestString Test;

//This function and those below it run and test all of the functions inside of the String class
void TestString::testStringClass()
{
	ofstream strLog("string_test_log.txt", ios::app);
	if (strLog.is_open())
	{
		cout << "This program evaluates that all of the String Class functions work as intended." << endl;
		cout << "What is the current value of data?" << endl;
		cout << Test.data << endl;
		strLog << "|String Class Test Log|" << endl;
		Test.toLowerTest();
		Test.lengTest();
		Test.appTest();
		Test.preTest();
		Test.equalTest();
		Test.charAtTest();
		Test.findTest1();
		Test.findTest2();
		Test.replaceTest();
		Test.toUpperTest();
		Test.readTest();
		Test.writeTest();
		Test.resultsLogger();
		strLog << " " << endl;
	}
	else
	{
		cout << "Failed to write to test log!" << endl;
	}
}
//Test Functions
void TestString::toLowerTest()
{
	ofstream strLog("string_test_log.txt", ios::app);
	cout << "What is 'He' after using the toLower function?" << endl;
	Test.toLower();
	cout << Test.data << endl;
	if (data == "he")
	{
		testsPassed = testsPassed + 1;
		strLog << "toLower Test Passed" << endl;
	}
	else
	{
		strLog << "toLower Test Failed" << endl;
	}
}
void TestString::lengTest()
{
	ofstream strLog("string_test_log.txt", ios::app);
	cout << "What is the length of 'he'?" << endl;
	if (strLength() == 2)
	{
		testsPassed = testsPassed + 1;
		strLog << "strLength Test Passed" << endl;
	}
	else
	{
		strLog << "strLength Test Failed" << endl;
	}
}
void TestString::appTest()
{
	ofstream strLog("string_test_log.txt", ios::app);
	cout << "Append 'ese' to the end of 'he'." << endl;
	Test.Append("ese");
	cout << Test.data << endl;
	if (data == "heese")
	{
		testsPassed = testsPassed + 1;
		strLog << "Append Test Passed" << endl;
	}
	else
	{
		strLog << "Append Test Failed" << endl;
	}
}
void TestString::preTest()
{
	ofstream strLog("string_test_log.txt", ios::app);
	cout << "Prepend 'C' to the front of 'heese'" << endl;
	Test.Prepend("C");
	cout << Test.data << endl;
	if (data == "Cheese")
	{
		testsPassed = testsPassed + 1;
		strLog << "Prepend Test Passed" << endl;
	}
	else
	{
		strLog << "Prepend Test Failed" << endl;
	}
}
void TestString::equalTest()
{
	ofstream strLog("string_test_log.txt", ios::app);
	cout << "True or false, data is now equal to the word 'Cheese'?" << endl;
	if (EqualTo("Cheese") == true)
	{
		testsPassed = testsPassed + 1;
		strLog << "EqualTo Test Passed" << endl;
	}
	else
	{
		strLog << "EqualTo Test Failed" << endl;
	}
}
void TestString::charAtTest()
{
	ofstream strLog("string_test_log.txt", ios::app);
	cout << "What character is at position 2 in 'Cheese'?" << endl;
	if (CharacterAt(2) == 'e')
	{
		testsPassed = testsPassed + 1;
		strLog << "CharacterAt Test Passed" << endl;
	}
	else
	{
		strLog << "CharacterAt Test Failed" << endl;
	}
}
void TestString::findTest1()
{
	ofstream strLog("string_test_log.txt", ios::app);
	cout << "What position is the substring 'eese' in 'Cheese'?" << endl;
	if (Find("eese") == 2)
	{
		testsPassed = testsPassed + 1;
		strLog << "Find Test 1 Passed" << endl;
	}
	else
	{
		strLog << "Find Test 1 Failed" << endl;
	}
}
void TestString::findTest2()
{
	ofstream strLog("string_test_log.txt", ios::app);
	cout << "What position is the substring 'ese' starting from position 2 in 'Cheese'?" << endl;
	if (Find(2, "ese") == 3)
	{
		testsPassed = testsPassed + 1;
		strLog << "Find Test 2 Passed" << endl;
	}
	else
	{
		strLog << "Find Test 2 Failed" << endl;
	}
}
void TestString::replaceTest()
{
	ofstream strLog("string_test_log.txt", ios::app);
	cout << "Replace 'eese' with 'ores'." << endl;
	Test.Replace("eese", "ores");
	cout << Test.data << endl;
	if (data == "Chores")
	{
		testsPassed = testsPassed + 1;
		strLog << "Replace Test Passed" << endl;
	}
	else
	{
		strLog << "Replace Test Failed" << endl;
	}
}
void TestString::toUpperTest()
{
	ofstream strLog("string_test_log.txt", ios::app);
	cout << "What is the word 'Chores' after using the toUpper function?" << endl;
	Test.toUpper();
	cout << Test.data << endl;
	if (data == "CHORES")
	{
		testsPassed = testsPassed + 1;
		strLog << "ToUpper Test Passed" << endl;
	}
	else
	{
		strLog << "ToUpper Test Failed" << endl;
	}
}
void TestString::readTest()
{
	ofstream strLog("string_test_log.txt", ios::app);
	cout << "Enter any string." << endl;
	Test.ReadFromConsole();
	testsPassed = testsPassed + 1;
	strLog << "Read Test Passed" << endl;
}
void TestString::writeTest()
{
	ofstream strLog("string_test_log.txt", ios::app);
	cout << "Now, the console will print data." << endl;
	Test.WriteToConsole();
	testsPassed = testsPassed + 1;
	strLog << "Write Test Passed" << endl;
}
//Test Functions

//converts data into lowercase using the ascii method
string StringC::toLower()
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
//converts data into uppercase using the ascii method
string StringC::toUpper()
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
//gets the length of data
int StringC::strLength()
{
	cout << data.length() << endl;
	return data.length();
}
//appends str to the end of data
string StringC::Append(string str)
{
	data = data.append(str);
	return data;
}
//prepends str to the front of data
string StringC::Prepend(string str)
{
	data = data.insert(0, str);
	return data;
}
//checks if data is equal to a passed in string
bool StringC::EqualTo(string input)
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
//gets the character located at (input) of data
char StringC::CharacterAt(int input)
{
	int lengCheck = data.length();
	if (input < lengCheck && input > 0)
	{
		char charReturn = data[input];
		cout << charReturn << endl;
		return data[input];
	}
	else
	{
		cout << 0 << endl;
		return 0;
	}
}
//finds a specified string (findinput) inside of a passed in string (input)
int StringC::Find(string findInput)
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
int StringC::Find(int startIndex, string findInput)
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
			return 0;
		}
}
//replaces a specified part of a string (findInput) with a different phrase
string StringC::Replace(string findInput, string replace)
{
	int i = 0;
	int finder = data.find(findInput);
	int finderLeng = findInput.length() + finder;
	while (i < finderLeng)
	{
		if (finder != string::npos)
		{
			i += 1;
			data = data.replace(finder, finderLeng, replace);
		}
		else
			cout << "Not Found" << endl;
	}
	return data;
}
//takes an input from the user and changes the value of data to that input
string StringC::ReadFromConsole()
{
	string input;
	cin >> input;
	data = input;
	return data;
}
//returns data and displays it on the console
string StringC::WriteToConsole()
{
	cout << data << endl;
	return data;
}
//checks how many of the tests were successful and logs them to a log file
void TestString::resultsLogger()
{
	ofstream strLog("string_test_log.txt", ios::app);

	float passRate = (float)testsPassed / 12;
	passRate = passRate * 100;

	if (strLog.is_open())
	{
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

void StringC::assessment1Data()
{
	Test.data = "ello,";
	Test.Append(" World");
	Test.Prepend("H");
	Test.WriteToConsole();
}


//The main game loop for the text adventure game
void Game::Run()
{
	Player P1;
	cout << "You wake up inside of a room you don't recognize. What is your name?" << endl;
	P1.createPlayer();
	do
	{

	} 
	while (exit = 0);
}
//Allows input for the player name
void Player::createPlayer()
{
	cin >> PlName;
}

void Room::printDescr()
{
	cout << roomDescr;
}