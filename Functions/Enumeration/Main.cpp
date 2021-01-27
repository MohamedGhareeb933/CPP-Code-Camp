/*
Basic Enum.
-Enumeration is an Integer Type.
- whatever data Type We give to Enum it's still and Integer Type EX:(enum "Name" : Char {..........}
- NEXT: Enum Function.
*/

#include <iostream>

// enum is a group of integers starting with 0 as its default.
enum Colors {
	RED  , BLUE  , GREEN ,YELLOW
}/*(WE CAN CREATE AN ENUM INSTANCE HERE JUST BEFORE PRANTHASES AND SIMICOLON))*/; 

int main() {
	
	// we can create an instance for enum and set it to equal to any value inside Enum.
	Colors c = Colors::YELLOW; // or Colors c = Yellow;
	
	int a = c; // Create an integer and set it to equal the Enum instance.
	int b = a;  // Another Integer and Equal to a.
	


	// we can set the integer to be equal  Enum Instance , But we cant set The Enum Instance To be Equal  Integer.
	Colors d = static_cast<Colors>(b); // Force it, D = B ,  it takes Int and Return it as a Colors Instance.

	std::cout << d << std::endl;
	std::cout << a << std::endl;
	
	std::cout << std::endl;		system("pause");
}

// Static : RUN Time.
// Staic Cast Simply mean Convert .
// Try to avoid Static Cast as much as Possible. cuz its run at RUN time
// and it means something going wrong and We force Convert Variables.
