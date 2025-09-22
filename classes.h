#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class String
{
private:

public:
	string toLower(string input);
	string toUpper(string input);
	int strLength(string input);
	string Append(string input, string str);
	string Prepend(string input, string str);
	bool EqualTo(string input1, string input2);
	int CharacterAt(string input1, int input2);
	int Find(string input, string findInput);
	int Find(int startIndex, string input, string findInput);
	string Replace(string input, string findInput, string replace);
	string ReadFromConsole(string input);
	string WriteToConsole(string input);
};