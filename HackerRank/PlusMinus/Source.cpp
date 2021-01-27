#include <iostream>
#include <vector>

int main() {

	std::vector<int> arr({ -4, 3, -9, 0, 4, 1 });

	float posNumber = 0;
	float negNumber = 0;
	float zeroNumber = 0;

	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] > 0) {
			posNumber++;
		}
		if (arr[i] < 0)
		{
			negNumber++;
		} 
		if (arr[i] == 0) {
			zeroNumber++;
		}
	}

	std::cout << posNumber / arr.size() << "\n"
		<< negNumber / arr.size() << "\n"
		<< zeroNumber / arr.size();

	std::cin.get();
}