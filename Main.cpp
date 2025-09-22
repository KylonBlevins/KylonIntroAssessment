#include <iostream>
#include "Functions.h"
#include <string>
#include <fstream>
#include "classes.h"
using namespace std;

class BankAccount
{
private:
	int balance = 0;

	int accountNumber = 0;

public:
	int deposit(int input)
	{
		balance = balance + input;
		return balance;
	}
	int getBalance()
	{
		return balance;
	}
	int setAccountNumber(int input)
	{
		accountNumber = input;
		return accountNumber;
	}
};

struct Address
{
	string street;
	string city;
	int zipCode;
};

struct Player
{
	string name;
	Address homeAddress;
	int score;
};

class Student
{
private:
	string name;
	int studentID;
	float gpa;
public:
	Student()
	{
		name = "Unknown";
		studentID = 0;
		gpa = 0.0f;
	}
	Student(string passName, int passID, float passGPA)
	{
		name = passName;
		studentID = passID;
		gpa = passGPA;
	}
	void displayStudentInfo()
	{
		cout << "Student Name: " << name << endl;
		cout << "Student ID: " << studentID << endl;
		cout << "Student GPA: " << gpa << endl;
	}
};

class Weapon
{
private:
	string name;
	int damage;
	int durability;
public:
	Weapon()
	{
		name = "Weapon";
		damage = 10;
		durability = 100;
	}
	Weapon(string passName)
	{
		name = passName;
		damage = 10;
		durability = 100;
	}
	Weapon(string passName, int passDMG, int passDur)
	{
		name = passName;
		damage = passDMG;
		durability = passDur;
	}
	void displayWeaponStats()
	{
		cout << "Weapon Name: " << name << endl;
		cout << "Weapon Damage: " << damage << endl;
		cout << "Weapon Durability: " << durability << endl;
	}
};

class Item
{
protected:
	string name;

public:
	Item()
	{
		cout << "Item constructor called" << endl;
		name = "Unknown Item";
	}
	Item(string itemName)
	{
		cout << "Item constructor with name called" << endl;
		name = itemName;
	}
};

class Sword : public Item
{
public:
	Sword()
	{
		cout << "Sword Constructor called" << endl;
	}
	Sword(string itemName)
	{
		cout << "Sword Constructor with name called" << endl;
	}
};

class Animal
{
protected:
	string name;
	int age;
};

class Dog : public Animal
{
public:
	Dog()
	{
		name = "Random Dog";
		age = 0;
	}
	Dog(string passName, int passAge)
	{
		name = passName;
		age = passAge;
	}
	void Bark()
	{
		cout << name << " barks!" << endl;
	}
	void DogInfo()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};

class Vehicle
{
protected:
	int speed;
	string color;
};

class Car : public Vehicle
{
public:
	Car()
	{
		speed = 40;
		color = "White";
	}
	Car(int passSpeed, string passColor)
	{
		speed = passSpeed;
		color = passColor;
	}
	void honk()
	{
		cout << "Honk" << endl;
	}
	void carStats()
	{
		cout << "Car Speed: " << speed << endl;
		cout << "Car Color: " << color << endl;
	}
};

class GameCharacter
{
protected:
	int health;
	string name;
};

class Warrior : public GameCharacter
{
private:
	string weapon;
public:
	Warrior()
	{
		health = 100;
		name = "Unknown";
		weapon = "None";
	}
	Warrior(int passHP, string passName, string passWeapon)
	{
		health = passHP;
		name = passName;
		weapon = passWeapon;
	}
	void displayStats()
	{
		cout << "Name: " << name << endl;
		cout << "Health: " << health << endl;
		cout << "Weapon: " << weapon << endl;
	}
};

class animalPoly
{
public:
	virtual void makeSound()
	{
		cout << "Some animal sound." << endl;
	}
};

class dogPoly : public animalPoly
{
public:
	void makeSound() override
	{
		cout << "Woof!" << endl;
	}
};

class Shape
{
public:
	virtual void draw()
	{
		cout << "Drawing a shape" << endl;
	}
};

class Circle : public Shape
{
public:
	void draw() override
	{
		cout << "Drawing circle" << endl;
	}
};

class itemPoly
{
public:
	virtual void use()
	{
		cout << "Item used." << endl;
	}
};

class swordPoly : public itemPoly
{
public:
	void use() override
	{
		cout << "You swing a sword!" << endl;
	}
};

int main()
{
	
}

//#ifndef
//#define