#include <iostream>
#include <string>
#include <iterator>
#include <map> 
#include <vector>
#include <sstream>
#include <limits>

void intVector() {
	std::vector<int > intVector({ 5, 2, 3, 5, 7, 6, 9, 12 });

	intVector.push_back(1);
	intVector.push_back(2);
	intVector.push_back(3);
	intVector.push_back(4);
	intVector.push_back(5);
	intVector.pop_back();
	std::cout << "vector last index is: " << intVector.at(intVector.size() - 1) << std::endl; // peeking vector 
	// TODO - VECTOR INSERT
	// TODO - VECTOR ASSIGN 

	intVector[0] = 10;
	std::cout << "vector at index 0: " << intVector.at(0) << std::endl;

	for (auto i : intVector)
	{
		std::cout << i << std::endl;
	}

}

void StringVector() {
	std::vector<std::string> pushIntoVector;

	std::string sentence = "hello iam doing STL ";
	std::stringstream s(sentence);
	std::string input;
	char Space = ' ';
	while (std::getline(s, input, Space))
	{
		pushIntoVector.push_back(input);
	}

	for (auto i : pushIntoVector)
	{
		std::cout << i << std::endl;
	}

}



int main() {



	std::cin.get();		return 0;
}