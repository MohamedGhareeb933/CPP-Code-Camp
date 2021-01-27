/* Compisition, Use Multiple Classes togethar .
- Ex-(Birthday Class - People Class) 
- Birthday Class Containe Information Of People Date 
- People Class Printout NAME and Date Function 
*/

#include <iostream>
#include <string>
#include "Birthday.h" // Inculde Birthday Class Header File  - to Use it in Main Function
#include "People.h" // Include People Class Header File - to Use it in Main Fuction 

int main()
{
	Birthday BO(1, 1, 80);
	People PO("Mo", BO);
	PO.PrintOutInfo();

	std::cout << std::endl; system("pause"); // system PAUSE . Press Any key to Continue.
}
