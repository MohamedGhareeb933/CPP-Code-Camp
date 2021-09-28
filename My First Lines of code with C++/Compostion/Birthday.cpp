#include "Birthday.h"
#include <iostream>

Birthday::Birthday(int d, int m, int y)
: day(d), month(m), year(y)
{}

void Birthday::PrintDate()
{
    std::cout << day << "/" << month << "/" << year << std::endl;
}
