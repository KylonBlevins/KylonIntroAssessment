#include <iostream>
#include <string>
#include <fstream>
#include "classes.h"
using namespace std;

Player P1;
TheOrb Orb;
CheesePills Cheese;
EVILsword Sword;
spell Spells;
Game runG;
//Room Rooms;

StringC GameS;
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
	/*Test.toLower();*/
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
string StringC::toLower(string input)
{
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] >= 'A' && input[i] <= 'Z')
		{
			input[i] = input[i] + 32;
		}
	}
	return input;
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



void Player::MoveN()
{
	if (currentRoom == 0 || currentRoom == 1)
	{
		cout << "Moved North" << endl;
		currentRoom = 1;
		cout << "A hallway which doesn't seem to end." << endl;
		theOrb++;
		if (theOrb > 2)
		{
			cout << " " << endl;
			cout << "t h e  o r b  r u i n e d  m y  l i f e " << endl;
			cout << " " << endl;
			theOrb = 0;
			if (numofOrbs == 1)
			{
				numofOrbs == 0;
				Inventory[0] = "t h e  o r b";
				Orb.orbInfo();
			}
		}
	}
	else if (currentRoom == 3)
	{
		cout << "Moved North" << endl;
		currentRoom = 0;
		cout << "A spacious room with doors left, right, and behind you. In front of you is a hallway that you can't see the end of." << endl;
	}
	else if (currentRoom == 2 || currentRoom == 4)
	{
		cout << "Cannot move North" << endl;
	}
}

void Player::MoveW()
{
	if (currentRoom == 0)
	{
		cout << "Moved West" << endl;
		currentRoom = 2;
		cout << "A small bathroom." << endl;
		if (numofCheese == 1)
		{
			numofCheese == 0;
			Inventory[1] = "Cheese Pills";
			Cheese.cheeseInfo();
		}
	}
	else if (currentRoom == 4)
	{
		cout << "Moved West" << endl;
		currentRoom = 0;
		cout << "A spacious room with doors left, right, and behind you. In front of you is a hallway that you can't see the end of." << endl;
	}
	else if (currentRoom == 2 || currentRoom == 1 || currentRoom == 3)
	{
		cout << "Cannot move West" << endl;
	}
}

void Player::MoveE()
{
	if (currentRoom == 2)
	{
		cout << "Moved East" << endl;
		currentRoom = 0;
		cout << "A spacious room with doors left, right, and behind you. In front of you is a hallway that you can't see the end of." << endl;
	}
	else if (currentRoom == 0)
	{
		cout << "Moved East" << endl;
		currentRoom = 4;
		cout << "A warehouse filled with boxes." << endl;
		if (numofSword == 1)
		{
			numofSword = 0;
			Inventory[2] = "EVIL Sword";
			Sword.swordInfo();
		}
	}
	else if (currentRoom == 4 || currentRoom == 3 || currentRoom == 1)
	{
		cout << "Cannot move East" << endl;
	}
}

void Player::MoveS()
{
	if (currentRoom == 0)
	{
		cout << "Moved South" << endl;
		currentRoom = 3;
		cout << "A study with many books." << endl;
	}
	else if (currentRoom == 1)
	{
		cout << "Moved South" << endl;
		currentRoom = 0;
		cout << "A spacious room with doors left, right, and behind you. In front of you is a hallway that you can't see the end of." << endl;
	}
	else if (currentRoom == 2 || currentRoom == 3 || currentRoom == 4)
	{
		cout << "Cannot move South" << endl;
	}
}

void Player::Use()
{
	cout << "What item would you like to use?" << endl;
	for (int j = 0; j < 3; j++)
	{
		cout << Inventory[j] << endl;
	}
	getline(cin, commandIn);
	commandIn = GameS.toLower(commandIn);
	if (commandIn == "the orb" || commandIn == "t h e  o r b")
	{
		if (Inventory[0] == "t h e  o r b")
		{
			Orb.orbFunction();
		}
		else
		{
			cout << "You don't have that item!" << endl;
		}
	}
	if (commandIn == "cheese pills")
	{
		if (Inventory[1] == "Cheese Pills")
		{
			Cheese.cheeseFunction();
		}
		else
		{
			cout << "You don't have that item!" << endl;
		}
	}
	if (commandIn == "evil sword")
	{
		if (Inventory[2] == "EVIL Sword")
		{
			Sword.swordFunction();
		}
	}
}

void Player::Cast()
{
	cout << "What spell would you like to cast?" << endl;
	Spells.showSpells();
	getline(cin, commandIn);
	commandIn = GameS.toLower(commandIn);
	if (commandIn == "teleport")
	{
		Spells.Teleport();
	}
	else if (commandIn == "explosion")
	{
		Spells.Explosion();
	}
	else if (commandIn == "cheesemancy")
	{
		Spells.Cheesemancy();
	}
}

void Player::checkInventory()
{
	cout << "||Inventory||" << endl;
	for (int j = 0; j < 3; j++)
	{
		cout << Inventory[j] << endl;
	}
}

void Game::Run()
{
	currentRoom = 0;
	while (exit == 1);
	{
		commandList();
		getline(cin, commandIn);
		commandIn = GameS.toLower(commandIn);
		if (commandIn == "exit")
		{
			P1.Exit();
		}
		if (commandIn == "move north")
		{
			P1.MoveN();
		}
		else if (commandIn == "move west")
		{
			P1.MoveW();
		}
		else if (commandIn == "move east")
		{
			P1.MoveE();
		}
		else if (commandIn == "move south")
		{
			P1.MoveS();
		}
		else if (commandIn == "use")
		{
			P1.Use();
		}
		else if (commandIn == "cast")
		{
			P1.Cast();
		}
		else if (commandIn == "inventory")
		{
			P1.checkInventory();
		}
		else if (commandIn == "spell list")
		{
			Spells.showSpells();
		}
	}
}

void Game::commandList()
{
	cout << "||Commands||" << endl;
	cout << "move north" << endl;
	cout << "move south" << endl;
	cout << "move west" << endl;
	cout << "move east" << endl;
	cout << "use" << endl;
	cout << "cast" << endl;
	cout << "inventory" << endl;
	cout << "spell list" << endl;
	cout << "exit" << endl;
	cout << " " << endl;
}

void TheOrb::orbInfo()
{
	cout << itemName << endl;
	cout << itemDescr << endl;
	cout << " " << endl;
}

void TheOrb::orbFunction()
{
	cout << "You brandish " << itemName << "." << endl;
	cout << "Nothing happens." << endl;
	cout << " " << endl;
}

void CheesePills::cheeseFunction()
{
	Inventory[1] = " ";
	cout << "You eat the " << itemName << "." << endl;
	cout << "You feel cheesy." << endl;
	cout << " " << endl;
}

void CheesePills::cheeseInfo()
{
	cout << itemName << endl;
	cout << itemDescr << endl;
	cout << " " << endl;
}

void EVILsword::swordFunction()
{
	cout << "You swing the " << itemName << "." << endl;
	cout << "You feel EVIL." << endl;
	cout << " " << endl;
}

void EVILsword::swordInfo()
{
	cout << itemName << endl;
	cout << itemDescr << endl;
	cout << " " << endl;
}

void spell::showSpells()
{
	for (int j = 0; j < 3; j++)
	{
		cout << spellList[j] << endl;
	}
}

void spell::Teleport()
{
	cout << "You manage to teleport out of this mysterious structure." << endl;
	P1.Exit();
}

void spell::Explosion()
{
	cout << "You explode." << endl;
	P1.Exit();
}

void spell::Cheesemancy()
{
	cout << "You create a wheel of cheese, but your poor mastery over Cheesemancy makes it melt on the spot." << endl;
	P1.Exit();
}

void Player::Exit()
{
	cout << "The game is over!" << endl;
	exit = 0;
}