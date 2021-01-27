#ifndef PEOPLE_H
#define PEOPLE_H
#include <iostream>
#include "Birthday.h"
using namespace std;

class People
{
    public:
        People(string n, Birthday bo);
        void printInfo();

    private:
        string name;
        Birthday birthObj;
};

#endif // PEOPLE_H
