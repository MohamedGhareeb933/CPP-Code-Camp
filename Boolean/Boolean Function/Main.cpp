#include <iostream>
#include <string>

//Function Declaration.
bool is4digits(std::string);
// @Pram - string Checking for Pin Length 

int main()
{
	std::string PIN;
	std::cout << "Please Enter 4 Digits Numbers :";
	std::cin >> PIN;

	if (is4digits(PIN))
		std::cout << "PIN Accepted.\n";
	else
		std::cout << "PIN Denied.\n";

	std::cout << std::endl;	 system("PAUSE");
}

// Function Definition
bool is4digits(std::string PIN)
{
	bool status = true;
	if (PIN.length() != 4)	// Return false  - If string (PIN) not equal to 4.
		return false;
	else
		return true;
}
