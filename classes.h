#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "functions.h"
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
using namespace std;

class String
{
private:
	string data;
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
	string ReadFromConsole(string input);
	string WriteToConsole();
};

#endif