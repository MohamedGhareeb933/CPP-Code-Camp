#include <iostream>
#include<vector>
#include <map>

int main() {

	const int arr[] = { 1, 2, 3, 4};
	const int size = sizeof(arr) / sizeof(arr[0]);

	std::map<int, bool> cont;

	for (unsigned i = 0; i < size; i++)
	{
		int cal = arr[i];

		cont[cal] = true;

		for (unsigned j = i + 1; j < size; j++)
		{
			cal += arr[j];
			int plus = arr[i] + arr[j];

			if (!cont[plus])
			{
				cont[plus] = true;
			}

			if (!cont[cal]) {
				cont[cal] = true;
			}
		}
	}

	std::cout << cont.size();


	std::cin.get();
}