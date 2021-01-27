#pragma once
#include <iostream>
#include <string>

class Birthday {
private:
	const int day, month, year; 
public:
	Birthday(int, int, int); // Constructor Class - @Pram - 3 INTEGERS Variables to Access the Private Variables
	void PrintOutDate(); // @ Func - Printout - Day , Month , Year
};

