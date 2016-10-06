#include <iostream>
#include "Classes.h"

#pragma region Class_Commands
MyString::MyString()
{
	// the default function constructor
};

MyString::MyString(char string[])
{
	int i;
	for (i = 0; string[i] != '\0'; i++) // for loop reads all the characters in the given string arguements
	{
		m_String[i] = string[i]; // sets all the characters into the string class
	}
	m_String[i] = '\0'; // adds the null character to the end of the string to prevent errors
}

int MyString::Length()
{
	int i = 0;
	for (; m_String[i] != 0; i++);// loop runs until "i" reaches the null character of the string m_String

	Strlen = i; //saves the length of the length of first string
	return Strlen; //returns number of characters in string
}

char MyString::indexedChar(int j) // finds a character at a certain index that was inputed in main
{
	char indChar = m_String[j]; // sets a char variable as the indexed char inside the string
	return indChar; // returns the character in the string
}

bool MyString::Compared(MyString as) //compares two strings
{

	if (m_String == as.m_String)	// if statement used to find a difference between 2 inputed strings
	{
		return true; // bool function becomes true and breaks from function
	}
	else  // else segment runs if comparison between the 2 strings are different in any way
	{
		return false;	// bool function becomes false and function ends
	}
}

char* MyString::Append(MyString as) //adds the second string to the first
{
	as.Length(); // runs the function Length to find the the length of the first string also allowing Strlen to be used without error
	int m_Length = Strlen; // stores the first strings length as an integer
	int i; // creates a variable to be used in for loop
	for (i = 0; i < as.Strlen; i++) // for loop that repeats until the total length of the second string is counted
	{
		m_String[m_Length + i] = as.m_String[i]; // adds more space for characters and adds another character into the string
	}
	m_String[m_Length + i] = '\0'; // adds the final null character to the end of the string to prevent errors
	return m_String; // returns the new string
}

char* MyString::Prepend(MyString as)
{
	as.Length(); // runs the function Length to find the total length of the second string also allowing Strlen to be used without error
	int m_Length = as.Strlen;	// stores the second strings length as an integer 
	int i; // creates a variable to be used in for loop
	for (i = 0; i < Strlen; i++) // for loop that repeats until the total length of the first string is counted
	{
		as.m_String[m_Length + i] = m_String[i]; // adds more space for characters and adds another character into the string
	}
	as.m_String[m_Length + i] = '\0'; // adds the final null character to the end of the string to prevent errors
	return as.m_String; // returns the new string
}

const char* MyString::c_Style()
{
	const char* constString = m_String;	// creates a const character pointer towards the original string
	return constString; // returns the now c-styled string
}

void MyString::lowerCase()
{

	for (int j = 0; m_String[j]; j++) //loops through all the characters in the string
	{
		if (m_String[j] >= 65 && m_String[j] <= 90) // checks for any uppercase characters
		{
			char c = m_String[j]; // sets new character and defines it as the uppercase character needed to be changed
			c += 32;	// adds 32 to change the value of character to its lowercase equivalent in the ASCII table
			m_String[j] = c; // sets the new lower case character into where the uppercase character was in the string
		}
		else if ((int)m_String[j] >= 97 && (int)m_String[j] <= 122) // if the character is already lowercase it goes here
		{
			// the character is left alone and loops over looking at the next character
			m_String[j];
		}
	}
}

void MyString::upperCase()
{

	for (int j = 0; m_String[j]; j++) // loops through all the characters in the string
	{
		if (m_String[j] >= 97 && m_String[j] <= 122) // checks for any lowercase characters
		{

			m_String[j] = (int)m_String[j] - 32; // subtracts 32 to change the value of character to its uppercase equivalent in the ASCII table

		}
		else if (m_String[j] >= 65 && m_String[j] <= 90) //if the character is already uppercase it goes here
		{
			// the character is left alone and loops over looking at the next character
			m_String[j];
		}
	}
}

int MyString::subStrLoc()
{
	int i, j, temp;	//used to get index given string and arrays
	char substr[20] = { "state" }; //sets the substring
	for (i = 0; m_String[i] != '\0'; i++) //for loop to search string for the substring
	{
		j = 0; //used to index the substring
		if (m_String[i] == substr[j]) //if indeed the string contains the substring
		{
			temp = i + 1; //saves at what index the substring is located 
			while (m_String[i] == substr[j]) //continues as long as both strings don't equal to the null character
			{
				i++;
				j++;
			}

			if (substr[j] == '\0') //if the substring is found in the string
			{
				return temp;
			}
			else //if the substring is not found
			{
				i = temp;
				temp = 0; //causes break loop
			}
		}
	}

	if (temp == 0) //breaks the loop 
		return temp;
}

int MyString::stringatString(int k)
{
	Length();
	int w, nope; //used to index trough given string and arrays
	char subs[20] = { "ST" }; // creates the substring
	for (k; m_String[k] != Strlen; k++) //for loop to search the string to find the substring
	{
		w = 0; // defined to index substring
		nope = w; // sets nope to equal '0' to return false
		if (m_String[k] == subs[w]) // runs if the string has the substring
		{
			nope = w + 1; //saves the index value where the substring was found
			while (m_String[k] == subs[w])//continues as long as both strings don't equal to the null character
			{
				k++;
				w++;
			}
			if (subs[w] == '\0') //once the substring reaches the null character
			{
				return nope; // breaks loop and substring was found before the end of main string
			}
			else
			{
				w = nope; // saves the end location of the substring
				nope = 0; // the function returns false and substring is not found
			}
		}
	}
	return nope;
}

void MyString::strRepStr()
{
	//No understanding yet
	// is a bonus
}

char* MyString::c_enterStyle()
{
	char string[255]; // sets string in c-style
	std::cin >> string; //user changes the preset string
	std::cout << "\n \n"; // adding some space between lines
	int i;
	for (i = 0; string[i] != '\0'; i++) // for loop reads all the characters in the given string arguements
	{
		m_String[i] = string[i]; // sets all the characters into the string class
	}
	m_String[i] = '\0'; // adds the null character to the end of the string to prevent errors

	return m_String;
}
#pragma endregion



Forest::Forest() {};
Enemy::Enemy()  { int m_hp, char* Name; };