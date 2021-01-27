#include <iostream>
#include <vector>
#include <string>

int main(){

	std::vector<std::vector<int>> queres({ {1, 2, 100}, {2, 3, 100}, {3, 5, 100} });
	int n = 5;


	std::vector<long> Input;

	for (int i = 0; i < n; i++)
	{
		Input.push_back(0);
	}

	int max = Input[0];

	for (int  i = 0; i < queres.size(); i++)
	{
		int a = queres[i][0] - 1;
		int b = queres[i][1] - 1;
		long v = queres[i][2];

		for (int j = a; j <= b; j++)
		{
			Input[j] += v;

			if (max < Input[j])
			{
				max = Input[j];
			}
		}
	}


	/*
	for (int i = 1; i < Input.size(); i++)
	{
		if (max < Input[i])
		{
			max = Input[i];
		}
	}*/

	std::cout << "\n" << max;

	std::cin.get();
}