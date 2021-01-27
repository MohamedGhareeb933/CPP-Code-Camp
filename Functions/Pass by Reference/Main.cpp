/*
	pass by reference- create An Adress Data type
	EX - int& x = y;
	the adress of X = Y adress.
	any Effects to X apply to Y.
	NEXT: Check pointers.
*/
#include <iostream>
#include<string>

// function Declaration.
void askUser(int&, std::string&); // we Can use Pointers aswell
// askUser - Ask user to Fill in Infromation.
// @Pram - int& , ask user to fill in Score.
// @pram - string& , ask user to fill in Name.

// Function Declaration.
void CalculateOutcome(int, std::string);
// Calculate OutCome
// @prma- int, Calculate Score.
// @pram- string , Printout User Name.

int main()
{
	int Score;
	std::string Name;

	askUser(Score, Name); 
	CalculateOutcome(Score, Name); 

	std::cout << std::endl << system("pause");
}

void askUser(int &Score, std::string &Name)	 // we can also Create a pointers*.
{
	std::cout << "PLease Enter you'r Name: ";
	std::getline(std::cin, Name);	// when we create a pointers we have to Derefrence it by putting * before the Name to acces the Value

	std::cout << "Please Enter you'r Score: ";
	std::cin >> Score;	// as well as score

	
}

void CalculateOutcome(int Score, std::string Name) // we are Just using the Value not modifying , no need for pointers or Reference
{
	if (Score >= 50)
		std::cout << "you'v Passed " << Name << std::endl;
	else
		std::cout << "Sorry , good luck next time. " << Name << std::endl;
}