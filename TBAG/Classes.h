#pragma once

class FunString
{
public:
	FunString(); //basic tool to call functions
	FunString(char String[]);
	int Length(); //Will find the length of the string completely until reaches null
	char indexedChar(int j);//Will pick a character in a string
	bool Compared(FunString as); //Will compare 2 strings together 
	char* Append(FunString as); //Will add the second string after the first string
	char* Prepend(FunString as); //Will add the second string before the first string
	const char* c_Style(); // Will write the string c-styled	
	void upperCase(); //Will change string characters into uppercase characters
	void lowerCase(); //Will change string characters into lowercase characters
	int subStrLoc(); //Will find a SubString within the first string
	int stringatString(int k); //Will find the substring within the class after a certain index
	void strRepStr(); //Will replace a substring with another substring
	char* c_enterStyle(); //Will set string to input C-style string

	char m_String[255]; //string one
	int Strlen; //first string's length
};



class Forest
{
public:
	
	Forest();
	Forest(char Name[]);
	Tiles tiles;
	bool s_Start = false;
	bool e_End = false;
};


class Tiles
{
public:
	
	int m_position[4][4];
	bool m_pit = false;
	bool m_message = false;
	Weapon weapon;
	Enemy baddy;
	Player player;
};


class Player
{
public:
	Weapon weapon;
	int m_hp;
	char* Name[20];
	int m_position[4][4];
};

class Weapon
{
public:
	char Name[20];
	int m_dmg;
	bool m_equiped;
};

class Enemy
{
public:
	Weapon weapon;
	int m_hp;
	char Name;
};