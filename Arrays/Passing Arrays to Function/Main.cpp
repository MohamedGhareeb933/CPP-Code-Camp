#include <iostream>

// Function Declaration.
// @ Pram - 2 Integers , Array int and another Int for Array Size.
void ArrayToFunction(int[], int);

int main()
{
	int Array[3] = { 1, 2, 3 }; // Array
	int size = sizeof(Array) / sizeof(Array[0]);
	ArrayToFunction(Array, size); // Passing Array into Function 
	std::cout << std::endl << system("pause"); // Press any key to Continue.
}

// Function Defenition.
void ArrayToFunction(int Arr[], int Size)
{
	for (int x = 0; x < Size; x++)
		std::cout << Arr[x] << std::endl; // Print out All Elements in the Array Starting with X,0
}
