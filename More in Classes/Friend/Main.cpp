// Friend Keyword Can Access Private Member in the Class 

#include <iostream>

class Print {
	friend void Func(Print &); // Friend Function, - Declaration.
private:
	int regvar;
public:
	Print()
	{
		regvar = 0;
	}
};

void Func(Print& obj) { // friend Function Definition,	pass by refrence.
	obj.regvar = 99; // Modify Private Member Of Print Class.
	std::cout << obj.regvar; // Printout the private Variable.
}
int main()
{
	Print obj; // Print object 
	Func(obj); // Pass Print object into pramaters
	std::cout << std::endl;	system("Pause"); // Press any key to continue.
}