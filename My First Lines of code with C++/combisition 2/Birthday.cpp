#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;


Birthday::Birthday(int d, int m, int y)
{
   day = d;
   month = m;
   year = y;
}

void Birthday::printDate() {
    cout << day << "/" << month << "/" << year << endl;
}
