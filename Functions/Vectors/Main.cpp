/*
	Vectors are sequence containers representing arrays that can change in size.
	Format: Vector <Datatype> Name_of_Vector.
	Name_of_Vector.push_back(Value), Adds Element at the End of the Vector, Also Resize it.
	Name_of_Vector.at(Value)-  Return Element at Specific Index Number.
	Name_of Vector.insert(Name_of_Vector.Begin() Search Index+ , add New Value) - adds Element BEFORE specified index Number
	Name_of_Vector.erase(Name_of_Vector.begin() Search Index+) - removes Element from Specified number
	Name_of_Vector.clear() - removes ALL Element in Vector
	Name_of_Vector.empty() - Returns boolean Value if whether vector is Empty
*/
#include <iostream>
#include <vector>

// Function Declaration.
// Examples of Vectors.
void VectorEx();

// Function Declaration.
// Push_back Example.
void PushEx();

int main() {
	
	PushEx();
	//VectorEx();
	std::cout << std::endl;		system("pause");

}

void VectorEx()
{
	std::vector<int> Vector;

	Vector.push_back(10);
	Vector.push_back(33);
	Vector.push_back(48);
	Vector.push_back(91);

	std::cout << Vector.at(3) << std::endl; // Vector[ ].

	for (unsigned int x = 0; x < Vector.size(); x++) // unsigned , Positive Integers Only.
		std::cout << Vector[x] << " "; // Vector.at( )

	std::cout << std::endl;

	Vector.insert(Vector.begin() +2, 74);
	for (unsigned int x = 0; x < Vector.size(); x++)
		std::cout << Vector[x] << " ";

	std::cout << std::endl;

	Vector.erase(Vector.begin() + 3);
	for (unsigned int x = 0; x != Vector.size(); x++) // != Same As x < Vector.Size() . 
		std::cout << Vector.at(x) << " ";

	std::cout << std::endl;

	if (Vector.empty())
		std::cout << "Vector is Empty \n";
	else
		std::cout << "Vector is not Empty \n";

	Vector.clear();		// All vector Elements IS Removed.
	if (Vector.empty())
		std::cout << "Vector is Empty \n";
	else
		std::cout << "Vector is not Empty \n";
}

void PushEx()
{
	std::vector<int> Vector;
	int myVar;

	std::cout << "Please Enter Integers (Press 0 to Exit) \n";
	do 
	{
		std::cin >> myVar;
		Vector.push_back(myVar);
	} while (myVar); // or while(myVar != 0), Same.
	
	for (unsigned int x = 0; x < Vector.size(); x++)
		std::cout << Vector[x] << " ";
	std::cout << "\nVecotr Size:" << Vector.size() << std::endl;
}