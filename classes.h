#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class String
{
public:
	string toLower(string input);
	string toUpper(string input);
	int strLength(string input);
	string Append(string input);
	string Prepend(string input);
	bool EqualTo(string input1, string input2);
	char CStr(string input);
	void CharacterAt(string input1, int input2);
	int Find(string input, string findInput);
	int Find(int startIndex, string input, string findInput);
};