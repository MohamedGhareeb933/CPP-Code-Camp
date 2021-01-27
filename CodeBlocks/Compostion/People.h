#ifndef PEOPLE_H
#define PEOPLE_H

#include <iostream>
#include "Birthday.h"

class People
{
    public:
        People(std::string, Birthday);
        void PrintInfo();

    protected:

    private:
        std::string Name;
        Birthday BD;
};

#endif // PEOPLE_H
