#include <iostream>
#include <string>
#include <map>
#include <iterator>

void mapInsert() {
	
}

int main() {

	std::map<char, int> myMap;

	myMap.insert(std::pair<char, int>('c', 100));
	myMap.insert(std::pair<char, int>('b', 200));

	std::pair<std::map<char, int>::iterator, bool> ptr;
	ptr = myMap.insert(std::pair<char, int>('c', 900));

	if (!ptr.second)
	{
		std::cout << "Key is Already Exist: " << ptr.first->first << std::endl;
		std::cout << "and it has a value of " << ptr.first->second << std::endl;
	}

	// second instert to position param
	std::map<char, int>::iterator mapIt = myMap.begin();
	myMap.insert(mapIt, std::pair<char, int>('a', 900));
	myMap.insert(mapIt, std::pair<char, int>('d', 300));

	// range insertion.
	std::map<char, int> anotherMap;
	anotherMap.insert(myMap.begin(), myMap.find('c'));

	// iterate through all mymap elements 
	for (mapIt = myMap.begin(); mapIt != myMap.end(); mapIt++)
	{
		std::cout << "key: " << mapIt->first << "   Value: " << mapIt->second << std::endl;
	}

	for (mapIt = anotherMap.begin(); mapIt != anotherMap.end(); mapIt++)
	{
		std::cout << "Another Map \n";
		std::cout << "key: " << mapIt->first << "   Value: " << mapIt->second << std::endl;
	}
	
	std::cin.get();
}