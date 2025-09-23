#pragma once
#include <iostream>
#include <string>
#include <fstream>
#ifndef CLASSES_H
#define CLASSES_H
using namespace std;

//String utility class that contains functions that are useful for manipulating strings
class String
{
protected:
	string data = "He"; //the universal variable used by all functions
public:
	string toLower();
	string toUpper();
	int strLength();
	string Append(string str);
	string Prepend(string str);
	bool EqualTo(string input);
	int CharacterAt(int input);
	int Find(string findInput);
	int Find(int startIndex, string findInput);
	string Replace(string findInput, string replace);
	string ReadFromConsole();
	string WriteToConsole();
};
//Inheriting class containing testing function
class TestString : public String
{
public:
	void testStringClass();  //runs all functions on data to manipulate it and evaluate if the functions work
};

#endif