#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;


People::People(string n, Birthday bo)
: name(n), birthObj(bo)
{}

void People::printInfo() {
    cout << name << " was born in: " ;
    birthObj.printDate();
}
