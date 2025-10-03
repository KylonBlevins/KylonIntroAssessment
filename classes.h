#pragma once
#include <iostream>
#include <string>
#include <fstream>
#ifndef CLASSES_H
#define CLASSES_H
using namespace std;

//String utility class that contains functions that are useful for manipulating strings
class StringC
{
protected:
	string data = "He"; //the universal variable used by all functions
	int testsPassed = 0; //variable for evaluating how many of the functions passed for the resultsLogger function
public:
	string toLower(string input);
	string toUpper();
	int strLength();
	string Append(string str);
	string Prepend(string str);
	bool EqualTo(string input);
	char CharacterAt(int input);
	int Find(string findInput);
	int Find(int startIndex, string findInput);
	string Replace(string findInput, string replace);
	string ReadFromConsole();
	string WriteToConsole();
	void assessment1Data(); //runs the criteria for assessment 1
};
//Inheriting class containing testing function
class TestString : public StringC
{
public:
	void testStringClass();  //runs all functions on data to manipulate it and evaluate if the functions work
	void toLowerTest(); //all the below functions individually run and test each string function
	void lengTest();
	void appTest();
	void preTest();
	void equalTest();
	void charAtTest();
	void findTest1();
	void findTest2();
	void replaceTest();
	void toUpperTest();
	void readTest();
	void writeTest();
	void resultsLogger(); //logs the results of the testStringClass function and how many were successful
};


//Everything below is for the basic text adventure game assessment
//testt
//gawrsh
class Game
{
public:
	void Run();
	void commandList();
	string Inventory[3];
protected:
	int theOrb = 0;
	int currentRoom;
	bool exit;
	string commandIn;
	int numofOrbs = 1;
	int numofCheese = 1;
	int numofSword = 1;
};

class Player : public Game
{
public:
	//player actions
	void MoveN();
	void MoveW();
	void MoveE();
	void MoveS();
	void Use();
	void Cast();
	void checkInventory();
	void Exit();
};

class Item
{
protected:
	string itemDescr;
	string itemName;
};

class TheOrb : public Item, public Game
{
private:
	string itemDescr = "A small crystal sphere.";
	string itemName = "t h e  o r b";
public:
	void orbFunction();
	void orbInfo();
};

class CheesePills : public Item, public Game
{
private:
	string itemDescr = "Pills made of delicious cheese.";
	string itemName = "Cheese Pills";
public:
	void cheeseFunction();
	void cheeseInfo();
};

class EVILsword : public Item, public Game
{
private:
	string itemDescr = "A DASTARDLY and DESPICABLE blade.";
	string itemName = "EVIL Sword";
public:
	void swordFunction();
	void swordInfo();
};

class spell
{
private:
	string spellList[3] = { "Teleport", "Explosion", "Cheesemancy" };
public:
	void showSpells();
	void Teleport();
	void Explosion();
	void Cheesemancy();
};

#endif