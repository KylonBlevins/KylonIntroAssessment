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
	int toLower();
	int toUpper();
	int strLength();
	int Append(string str);
	int Prepend(string str);
	int EqualTo(string input);
	int CharacterAt(int input);
	int Find(string findInput);
	int Find(int startIndex, string findInput);
	int Replace(string findInput, string replace);
	int ReadFromConsole();
	int WriteToConsole();
};
//Inheriting class containing testing function
class TestString : public String
{
private:
	int testsPassed;
public:
	void testStringClass();  //runs all functions on data to manipulate it and evaluate if the functions work
	void resultsLogger();
};

#endif