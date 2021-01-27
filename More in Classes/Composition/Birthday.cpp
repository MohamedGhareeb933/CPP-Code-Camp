#include "Birthday.h"


// Using Memeber Intitializer to Access Private Variables 
Birthday::Birthday(int d, int m, int y)
	:	day(d), month(m), year(y)	{}

void Birthday::PrintOutDate()
{
	std::cout << day << "/" << month << "/" << year;
}
