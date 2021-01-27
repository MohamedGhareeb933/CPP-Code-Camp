#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;

int main()
{
    Birthday BirthO(1, 1, 1990);
    People pplObj("Sharppy", BirthO);
    pplObj.printInfo();

}
