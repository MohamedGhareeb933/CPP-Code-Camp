#include <iostream>
#include <vector>
#include <iterator>


int main() {

	std::vector<int> v1({ 1, 2, 3, 4, 5 });
	int d = 3;

	for (int i = 0; i < d; i++)
	{
		v1.emplace_back(v1[i]);
	}

	v1.erase(v1.begin(), v1.begin() + d);

	for (int i = 0; i < v1.size(); i++)
	{
		std::cout << v1[i];
	}

	std::cin.get();
}