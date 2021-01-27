#include "People.h"
#include <iostream>
#include "Birthday.h"

People::People(std::string N, Birthday B)
:Name(N), BD(B)
{}

void People::PrintInfo()
{
    std::cout << Name << std::endl;
    BD.PrintDate();
}
