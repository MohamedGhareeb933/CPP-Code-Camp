/*
	map <key, value> instance; 
	EX- std::map<int, String> Name;
*/
#include <iostream>
#include <map>
#include <string>

// Function Declaration.
// Boolean Function , Check for Dublicated Letters.
bool IsExist(std::string);

// Function Declaration.
// Examples of map.
void ExMap();

int main()
{
	// Comment ExMap Function To Keep you'r Input ScreenClean.
	ExMap();


	/**/
	std::cout << "please Enter the Word Without any Dublicated Letters or Characters.\n";
	std::string s;
	std::getline(std::cin, s); // getline, Read All string include spaces and Numbers as a string.
	if (!IsExist(s)) // if not, Negation, Ex(IsExist == false)
		std::cout << "Please Don't Enter any Dublicated Letters"; // Print out 
	else
		std::cout << "Word Accepted.";

	std::cout << std::endl;		system("Pause"); // press any key to continue.
}


void ExMap()
{


	std::map<std::string, bool > Check; // use string to get boolean result.
	Check["Sharppy"] = false; // use check to set the Values
	Check["Mo"] = true;
	Check["What Ever"] = false;
	Check["MM"] = true;

	std::cout << "Size of Map: " << Check.size() << std::endl;	// OUTPUT : 4 , cuz it hase only 4 values.
	std::cout << Check["Mo"] << std::endl; // print out using the Key .


	// Another Example.									  
	std::map<int, char> Print;
	Print[1] = 'z';
	Print[2] = 'X';
	Print[3] = 'M';
	Print[4] = 'm';

	std::cout << "Print:" << Print[4] << std::endl;

}


// Function Definition.
bool IsExist(std::string Word)
{
	std::map<char, bool> Letter;  // setting up Map. Char to bool Ex-'Z' = true; And Letter is instance to access Map Values
	for (char x : Word) {		  // inhanced for Loop - for Each Word,Char = x, 
		if (Letter[x] == true)    // if the Single Digit is equal to True Ex- 'M' = True.
			return false;		  // return False .
		else
			Letter[x] = true;	 // set the Character is equal to true
	}
}
