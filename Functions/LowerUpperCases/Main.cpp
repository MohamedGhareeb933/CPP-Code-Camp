#include <iostream>
#include <string>


// islower Declaration.
bool Islower(std::string);

// tolower Declration.
void Convert(std::string&);


int main() {

	std::string Word;
	std::string toLower;
	
	std::cout << "islower Function: Please Enter all lowerCases\n";
	std::getline(std::cin, Word); // Getline , Printout all letters including Spaces.
	if (!Islower(Word)) // Or (== false) instead of NOT (!) operation. 
		std::cout << "DENIED.\n";
	else { std::cout << "ACCEPTED.\n"; }
	
	
	std::cout << "Please Enter upper Case to Convert to Lower Case:\n ";
	std::getline(std::cin, toLower);
	Convert(toLower);
	std::cout << toLower << std::endl;
	
	
	std::cout << std::endl << system("pause"); // press any key to continue.
}

// islower Definition. 
bool Islower(std::string Letter) { 
	/*
	islower() & isupper()
	used to check the String not To convert it
	and return the Result.
	*/

	for (auto x : Letter) // inhanced for loop, X Get all Characters in Letter .
		if (isupper(x)) // if Letter IS UPPER CASE
			return false; // return flase.
	// No else , we don't want uppercase in the Middle of the letter 
		// Ex Else {return true} 
			// if the third Word is uppercase this will return True 
				// which Word will be accpeted.
}

// tolower Definition.
void Convert(std::string &s) {	//CHECK PASS BY REFERENCE.
	for (int x = 0; x < s.length(); x++)
		s[x] = tolower(s[x]);	// use [] for Strings. 
}
