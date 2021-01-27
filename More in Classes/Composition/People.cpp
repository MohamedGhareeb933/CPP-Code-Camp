#include "People.h"

People::People(std::string n, Birthday BO) 
: name(n), BirthObj(BO)	{}

void People::PrintOutInfo()
{
	std::cout << name << " ";
	BirthObj.PrintOutDate();
}
