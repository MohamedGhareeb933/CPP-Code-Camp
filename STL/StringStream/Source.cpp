#include <iostream>
#include <string>
#include <sstream>
#include <map>

int CountWords(std::string Words) {

	std::string AddWords = "";
	std::stringstream ss(Words);

	int count = 0;
	while (ss >> AddWords)
	{
		count++;
	}


	return count;
}

void Frequence(std::string Words) {
	std::string AddToWords = "";
	std::stringstream s(Words);
	std::map<std::string, int> stringMap;
	char Space = ' ';

	int count = 0;

	while (getline(s, AddToWords, Space))
	{
		count++;
		stringMap[AddToWords]++;
	}

	std::map<std::string, int>::iterator i = stringMap.begin();
	for (i; i != stringMap.end(); i++)
	{
		std::cout << i->first << " -> " <<
			i->second << std::endl;
	}
}

int main() {

	std::string Words = "Hello this is mohamed doing String Stream Test";

	//std::cout << CountWords(Words);
	Frequence(Words);

	std::cin.get();
}