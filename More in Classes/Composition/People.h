#pragma once
#include "Birthday.h"
#include <iostream>
#include <string>


class People {
private:
	const std::string name; // String Variable - Insert the Name in the instance Or Creat CIN to insert it.
	Birthday BirthObj; // Birthday Object or instance - to Access Print out Date in Birthday Class 
public:
	People(std::string, Birthday); // Constructor Class . @ Pram - String and Instance of Birthday Class 
	void PrintOutInfo(); // // @ Func -Printout {Name , Date Function inside Birthday Class}

};
