#include <iostream>
#include <map>
#include <vector>
#include <string>

//function Declaration
// Example of Iterators on Maps
void ExMap();

// Function Declaration
// Example Of iterator on Vectors
void ExVector();

int main() {

	ExVector();
	//ExMap();
	std::cout << std::endl;		system("pause");

}

void ExMap() {
	
	std::map<std::string, int> Name;
	std::map<std::string, int>:: iterator Point;

	Name["Sharppy"] = 1;
	Name["Mohamed"] = 2;
	Name["Mooo"] = 3;

	
	std::cout << Name["Sharppy"] << std::endl;	// Instead of typing the map Key.

		for (Point = Name.begin(); Point != Name.end(); Point++)
		std::cout << "Map: " << Point->second << std::endl;		// iterator is about Pointers, use arrow selection, First to printout Map Key , Second To printout Value
}

void ExVector() {
	std::vector<std::string> Vector;
	std::vector<std::string> ::iterator Asterisk;

	Vector.push_back("Iam Coding");
	Vector.push_back("Join Me");
	Vector.push_back("Keep going ");

	for (Asterisk = Vector.begin(); Asterisk != Vector.end(); Asterisk++)
		std::cout << "Vector: " << *Asterisk << std::endl;		// Derefrence To printout the Value Of Astersik , 
}
