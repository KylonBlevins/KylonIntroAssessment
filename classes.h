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
	string toLower();
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

class Game
{
public:
	void Run();
	void Command();
	void commandList();
protected:
	bool exit = 0;
	int currentRoom;
	string commandIn;
};

class Player : public Game
{
private:
	string playerName;
	int currentRoom = 0;
public:
	void createPlayer();
	//player actions
	void MoveN();
	void MoveW();
	void MoveE();
	void MoveS();
	void Use();
	void Cast();
	void Exit();
};

class Room
{
protected:
	int RoomNum;
	string const roomDescr;
	string roomItems;
	int itemsLeft;
public:
	void describeRoom();
	void describeItems();
};

class CenterRoom : public Room
{
private:
	int RoomNum;
	string const roomDescr = "A large room with a door on each of its walls.";
	string roomItems;
	int itemsLeft = 0;
};

class Item
{

};

#endif