#include <iostream>
#include <string>
#include <fstream>
#include "Functions.h"
using namespace std;

enum trafficLights
{
	RED,
	YELLOW,
	GREEN,
};

void doWhile(char answer)
{

	do
	{
		cout << "You are currently in a do while loop. Would you like to continue? y/n" << endl;
		cin >> answer;
		cout << endl;
	} while (answer == 'y' || answer == 'Y');
	cout << "The loop has ended." << endl;
}

void posChecker(int num)
{
	while (num <= 0)
	{
		if (num <= 0)
		{
			cout << "Enter a valid positive number." << endl;
			cin >> num;
		}
	}
	cout << "Thank you! " << num << endl;
}

void addHundred()
{
	for (int count = 1; count <= 100; count++)
	{
		int sum = 1;
		sum = sum + count;
		cout << sum;
	}
}

void multTable(int numInput)
{
	for (int count = 1; count <= 12; count++)
	{
		cout << numInput << " x " << count << " = ";
		cout << numInput * count << endl;
	}
}


void numIterate(int Iteration)
{
	for (Iteration = 0; Iteration <= 10; Iteration++)
	{
		cout << Iteration << endl;
	}
}


void numIterateEven(int Iteration)
{
	for (Iteration = 1; Iteration <= 20; Iteration++)
	{
			Iteration = Iteration + 1;
			cout << Iteration << endl;
	}
}

void trafficGuide(trafficLights color)
{
	switch (color)
	{
	case RED:
		cout << "Red: Stop" << endl;
		break;
	case YELLOW:
		cout << "Yellow: Slow down" << endl;
		break;
	case GREEN:
		cout << "Green: Go" << endl;
		break;
	default:
		cout << " " << endl;
		break;
	}
}

bool numValidator(int numInput)
{
	if (numInput > 0)
	{
		return true;
	}
	else if (numInput < 11)
	{
		return true;
	}
	else
	{
		return false;
	}
}

string nameFormat(string firstName, string lastName)
{
	string fullName = lastName + ", " + firstName;
	return fullName;
}

int damageCalc(int dmgAdd, int healthCount)
{
	return healthCount - dmgAdd;
}

int healCalc(int healAdd, int healthCount)
{
	return healthCount + healAdd;
}

int healthDisplay(int showHealth)
{
	return showHealth;
}

void criticalHitStreak()
{
	cout << "=== CRITICAL HIT STREAM SIMULATION ===" << endl;
	int attack = 0;
	int critCount = 0;

	cout << "How many attacks will we use?" << endl;
	cin >> attack;

	for (int i = 1; i < attack; i++)
	{
		srand(time(0) + rand());
		int randomValue = rand() % 100;
		bool isCrit = (randomValue < 20);
		if (isCrit)
		{
			cout << "Attack " << i << ": CRITICAL HIT!" << endl;
			critCount++;
		}
		else
		{
			cout << "Attack " << i << ": Normal Hit" << endl;
		}
	}
}

void printArray()
{
	int array[5] = { 1, 20, 30, 40, 5 };
	array[0] = 10;
	array[4] = 50;
	cout << array[0] << endl;
	cout << array[4] << endl;
}

void printArrayLength()
{
	const int arrayLength = 4;
	int secondArray[arrayLength] = { 5, 10, 15, 20 };
	cout << secondArray[1] << endl;
	cout << "Array length is " << arrayLength << endl;
}

void arrayloop()
{
	int numbers[3] = { 7, 14, 21 };
	for (int i = 0; i < 3; i++)
	{
		cout << numbers[i] << endl;
	}
}

void game()
{
	const int PLAYER_LIVES = 3;
	const string GAME_TITLE = "My Game";
	cout << "Player Lives: " << PLAYER_LIVES << endl;
	cout << GAME_TITLE << endl;
}

void playerNameString()
{
	string playerName = "Hero";

	cout << playerName << endl << playerName.length() << endl << playerName[0] << endl;
}

void printStringInput(string input)
{
	cout << input << endl;
}
//
//assessment examples
int getStringLength(string input)
{
	return input.length();
}

string isStringEqual(string input1, string input2)
{
	if (input1 == input2)
	{
		return "These strings are equal";
	}
	else
	{
		return "These strings are not equal";
	}
}

string lowerCase(string input)
{
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] >= 'A' && input[i] <= 'Z')
		{
			//toupper(input[i]);
			input[i] = input[i] + 32;
		}
	}
	cout << input;
	return input;
}

string upperCase(string input)
{
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] >= 'a' && input[i] <= 'z')
		{
			input[i] = input[i] - 32;
		}
	}
	cout << input;
	return input;
}
//assessment examples
//

void gameConfig(const string playerName)
{
	const string GAME_NAME = "Adventure";
	const float VERSION = 1.0;
	const int MAX_PLAYERS = 4;

	cout << "Thank you for playing " << GAME_NAME << endl;
	cout << "Version: " << VERSION << endl;
	cout << "Maximum Players: " << MAX_PLAYERS << endl;
	cout << "Player Name: " << playerName << endl;
}

void commandParser() //CMD means Command
{
	string userCMD;
	while (bool i = true)
	{
		cout << "Enter a command (type 'quit' to exit): " << endl;
		getline(cin, userCMD);
		userCMD = lowerCase(userCMD);
		cout << endl;
		cout << "Command Length: " << userCMD.length() << endl;
		if (userCMD == "quit")
		{
			break;
		}
	}
}

//
//pointers
void valuePointer()
{
	int value = 42;
	int* valuePtr = &value;

	cout << "Variable value: " << value << endl;
	cout << "Pointer value: " << * valuePtr << endl;
	cout << "Memory address1: " << valuePtr << endl;
	cout << "Memory address2: " << &value << endl;
}

void healthChangePointer()
{
	int health = 100;
	int maxHealth = 150;
	int *healthPtr = &health;

	cout << "Health: " << *healthPtr << endl;
	healthPtr = &maxHealth;
	//*healthPtr = &maxHealth; ////pointer is changing the original health value to 150, because of *
	cout << "Max Health: " << *healthPtr << endl;

	cout << "No Pointer" << endl;
	cout << "Health: " << health << endl;
	cout << "Max Health: " << maxHealth << endl;
}

void checkNullPointer(int *intPtr)
{

	if (intPtr == nullptr)
	{
		cout << "Pointer is null." << endl;
	}
	else
	{
		cout << *intPtr << endl;
	}
}
//main code lines
//checkNullPointer(nullptr);
//int number = 30;
//int* numPointer = &number;
//checkNullPointer(numPointer);
//pointers
//

void referenceVar()
{
	int intVar = 25;
	int& varRef = intVar;

	varRef = 50;
	cout << intVar << endl;
}
//references &

int refDoubler(int& value)
{
	value = value * 2;
	return value;
}
//main code lines
//int num = 30;
//cout << "Initial Value: " << num << endl;
//refDoubler(num);
//cout << "Doubled Value: " << num << endl;
//

void printValue(const int& num)
{
	cout << num << endl;
//	num = num * 2;
}

//File I/O examples: overwrites
void writeToFile()
{
	ofstream logFile("test_results.txt");
	if (logFile.is_open())
	{
		logFile << "Test Results:" << endl;
		logFile << "Passed: 15" << endl;
		logFile << "Failed: 2" << endl;
		logFile.close();
		cout << "File written successfully!" << endl;
	}
	else
	{
		cout << "Error: Could not create file!" << endl;
	}
}
//Append/ dont overwrite: ios::app adds to files instead of overwriting
//void appendToLog()
//{
//	ofstream logFile("test_results.txt", ios::app);
//
//	if (logFile.is_open())
//	{
//		logFile << "New test run: " << getCurrentDate() << endl;
//		logFile << "Success rate: 88%" << endl;
//		logFile.close();
//	}
//}
//reading from files
void readFromFile()
{
	ifstream dataFile("player_data.txt");
	if (dataFile.is_open())
	{
		string playerName;
		int playerLevel;
		float playerHealth;
		dataFile >> playerName >> playerLevel >> playerHealth;
		cout << "Player: " << playerName << endl;
	}
	else
	{
		cout << "No save file found." << endl;
	}
}
// slide 96
void readPlayerCommands()
{
	ifstream file("game_commands.txt");
	string line;

	if (file.is_open()) while (getline(file, line))
	{
		cout << "Command: " << line << endl;
	}
	file.close();
}

//checking if files exist
bool fileExists(string filename)
{
	ifstream file(filename);
	return file.is_open();
}
void smartFileOperation()
{
	if (fileExists("player_save.txt"))
	{
		cout << "Save file found! Loading your progress..." << endl;
	}
	else
	{
		cout << "No save file found! Creating new player..." << endl;
	}
}
//see slide 100

void simpleGame()
{
	ofstream logFile("Game_Events.txt");
	if (logFile.is_open())
	{
		logFile << "Game started!" << endl;
		logFile << "Enemy defeated!" << endl;
		logFile << "Game Ended!" << endl;
		logFile.close();
		cout << "File written successfylly!" << endl;
	}
	else
	{
		cout << "Error: could not write to file" << endl;
	}
}
//highscore storer and reader
void highScoreFunc()
{
	ofstream logFile("Scores.txt");
	if (logFile.is_open())
	{
		int highScore = 130;
		logFile << "High Score: " << highScore << endl;
		ifstream logFile("Scores.txt");
		if (logFile.is_open())
		{
			cout << "High Score: " << highScore << endl;
		}
		logFile.close();
	}
	else
	{
		cout << "Error: could not write to file" << endl;
	}
}

void eventLogger(string event)
{
	ofstream logFile("Game_Logs.txt", ios::app);
	if (logFile.is_open())
	{
		logFile << "Event: " << event << endl;
		cout << "Event logged successfully." << endl;
	}
	else
	{
		cout << "Error: could not write to file" << endl;
	}
}

void terrWeaponSelect()
{
	int i = 0;
	int userIn;
	string weapons[4] = { "Minishark","SDMG", "Onyx Blaster", "Vortex Beater" };
	while (i == 0)
	{
		cout << "Enter a number between 0-3 to select a weapon." << endl;
		cout << "0. Minishark" << endl << "1. SDMG" << endl << "2. Onyx Blaster" << endl << "3. Vortex Beater" << endl;
		cin >> userIn;
		try
		{
			if (userIn > 3 || userIn < 0 || cin.fail())
			{
				throw runtime_error("Invalid Input"); //throw runtime_error("Invalid Input");
			}
			else
			{
				cout << "You selected the " << weapons[userIn] << "!" << endl;
				i = 1;
			}
		}
		catch (runtime_error& e) //...
		{
			cout << "ERROR: " << e.what() << endl;
			cout << "Input a valid number." << endl;
		}
	}
}
//// class example
//class Player
//{
//private:
//	int health;
//
//public:
//	string name;
//	void takeDamage(int damage)
//	{
//		health -= damage; cout << name << " takes " << damage << " damage!";
//	}
//	int getHealth()
//	{
//		return health;
//	}
//	int setHealth(int newHealth)
//	{
//		return health = newHealth;
//	}
//};
//
//int main()
//{
//	Player p1;
//	p1.name = "Player";
//	p1.setHealth(100);
//	p1.takeDamage(15);
//	cout << endl;
//	cout << p1.getHealth();
//}
//// see slide 113
//// class example

////struct GameCharacter
////{
////	string name;
////	int health;
////	int level;
////};
////
////GameCharacter Player{ "Hero", 100, 3 };

//class BankAccount
//{
//private:
//	int balance = 0;
//
//	int accountNumber = 0;
//
//public:
//	int deposit(int input)
//	{
//		balance = balance + input;
//		return balance;
//	}
//	int getBalance()
//	{
//		return balance;
//	}
//	int setAccountNumber(int input)
//	{
//		accountNumber = input;
//		return accountNumber;
//	}
//};
//
//int main()
//{
//	BankAccount Kylon;
//	Kylon.setAccountNumber(1286);
//	Kylon.deposit(1000);
//	cout << "Your current balance is $" << Kylon.getBalance() << "." << endl;
//}

//struct Address
//{
//	string street;
//	string city;
//	int zipCode;
//};
//struct Player
//{
//	string name;
//	Address homeAddress;
//	int score;
//};
//
//int main()
//{
//	Address JohnAddr;
//	JohnAddr.street = "Street here";
//	JohnAddr.city = "City here";
//	JohnAddr.zipCode = 8124;
//	Player JohnPlayer;
//	JohnPlayer.name = "John";
//	JohnPlayer.homeAddress.city = JohnAddr.city;
//	JohnPlayer.homeAddress.street = JohnAddr.street;
//	JohnPlayer.homeAddress.zipCode = JohnAddr.zipCode;
//	JohnPlayer.score = 100;
//
//	cout << "Player: " << JohnPlayer.name << endl;
//	cout << "Address: " << JohnPlayer.homeAddress.city << " " << JohnPlayer.homeAddress.street << endl;
//	cout << "Zip Code: " << JohnPlayer.homeAddress.zipCode << endl;
//	cout << "Score: " << JohnPlayer.score << endl;
//}

//class Student
//{
//private:
//	string name;
//	int studentID;
//	float gpa;
//public:
//	Student()
//	{
//		name = "Unknown";
//		studentID = 0;
//		gpa = 0.0f;
//	}
//	Student(string passName, int passID, float passGPA)
//	{
//		name = passName;
//		studentID = passID;
//		gpa = passGPA;
//	}
//	void displayStudentInfo()
//	{
//		cout << "Student Name: " << name << endl;
//		cout << "Student ID: " << studentID << endl;
//		cout << "Student GPA: " << gpa << endl;
//	}
//};
//
//
//
//int main()
//{
//	Student Billy("Billy", 42, 0);
//	Billy.displayStudentInfo();
// Student Jim;
// Jim.displayStudentInfo();
//}

//class Weapon
//{
//private:
//	string name;
//	int damage;
//	int durability;
//public:
//	Weapon()
//	{
//		name = "Weapon";
//		damage = 10;
//		durability = 100;
//	}
//	Weapon(string passName)
//	{
//		name = passName;
//		damage = 10;
//		durability = 100;
//	}
//	Weapon(string passName, int passDMG, int passDur)
//	{
//		name = passName;
//		damage = passDMG;
//		durability = passDur;
//	}
//	void displayWeaponStats()
//	{
//		cout << "Weapon Name: " << name << endl;
//		cout << "Weapon Damage: " << damage << endl;
//		cout << "Weapon Durability: " << durability << endl;
//	}
//};
//
//
//
//int main()
//{
//	Weapon Standard;
//	Standard.displayWeaponStats();
//	cout << endl;
//	Weapon Longsword("Puppet Saber");
//	Longsword.displayWeaponStats();
//	cout << endl;
//	Weapon Dagger("Monad Rose Sword", 45, 150);
//	Dagger.displayWeaponStats();
//}

//class Item
//{
//protected:
//	string name;
//
//public:
//	Item()
//	{
//		cout << "Item constructor called" << endl;
//		name = "Unknown Item";
//	}
//	Item(string itemName)
//	{
//		cout << "Item constructor with name called" << endl;
//		name = itemName;
//	}
//};
//class Sword : public Item
//{
//public:
//	Sword()
//	{
//		cout << "Sword Constructor called" << endl;
//	}
//	Sword(string itemName)
//	{
//		cout << "Sword Constructor with name called" << endl;
//	}
//};
//
//int main()
//{
//	Sword mySword;
//	Sword Excalibur("Excalibur");
//}

//class Animal
//{
//protected:
//	string name;
//	int age;
//};
//class Dog : public Animal
//{
//public:
//	Dog()
//	{
//		name = "Random Dog";
//		age = 0;
//	}
//	Dog(string passName, int passAge)
//	{
//		name = passName;
//		age = passAge;
//	}
//	void Bark()
//	{
//		cout << name << " barks!" << endl;
//	}
//	void DogInfo()
//	{
//		cout << "Name: " << name << endl;
//		cout << "Age: " << age << endl;
//	}
//};
//
//int main()
//{
//	Dog RandomDog;
//	RandomDog.DogInfo();
//	RandomDog.Bark();
//	cout << endl;
//
//	Dog Bingo("Bingo", 2);
//	Bingo.DogInfo();
//	Bingo.Bark();
//}


void calculatorChallenge()
{
	int i = 1;
	do {
		float userIn;
		cout << "This is a calculator. Enter the number correlated to the option you'd like to take." << endl;
		cout << "0. Exit" << endl << "1. Addition" << endl << "2. Subtraction" << endl << "3. Multiplication" << endl << "4. Division" << endl;
		cin >> userIn;
		if (userIn == 0)
		{
			i = 0;
		}
		else
		{
			calcSelector(userIn);
		}
	} while (i || 0);
}

void calcSelector(int userIn)
{
	switch (userIn)
	{
		case 0:
		{
			cout << " " << endl;
			break;
		}
		case 1:
		{
			cout << " " << endl;
			calcAdd();
			break;
		}
		case 2:
		{
			cout << " " << endl;
			calcSubtract();
			break;
		}
		case 3:
		{
			cout << " " << endl;
			calcMultiply();
			break;
		}
		case 4:
		{
			cout << " " << endl;
			calcDivide();
			break;
		}
		default:
		{
			cout << "Invalid Input." << endl;
			break;
		}
	}
}

void calcAdd()
{
	float userIn1;
	float userIn2;

	cout << "Enter your first number." << endl;
	cin >> userIn1;

	cout << "Plus..." << endl;
	cin >> userIn2;

	cout << "= " << userIn1 + userIn2 << endl;

}

void calcSubtract()
{
	float userIn1;
	float userIn2;

	cout << "Enter your first number." << endl;
	cin >> userIn1;

	cout << "Minus..." << endl;
	cin >> userIn2;

	cout << "= " << userIn1 - userIn2 << endl;
}

void calcMultiply()
{
	float userIn1;
	float userIn2;

	cout << "Enter your first number." << endl;
	cin >> userIn1;

	cout << "Multiplied by..." << endl;
	cin >> userIn2;

	cout << "= " << userIn1 * userIn2 << endl;

}

void calcDivide()
{
	float userIn1;
	float userIn2;

	cout << "Enter your first number." << endl;
	cin >> userIn1;

	cout << "Divided by..." << endl;
	cin >> userIn2;

	cout << "= " << userIn1 / userIn2 << endl;
}