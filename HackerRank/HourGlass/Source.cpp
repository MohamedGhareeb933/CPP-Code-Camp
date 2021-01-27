#include <iostream>
#include <vector>
#include <iterator>

int main() {

	std::vector<std::vector<int>> vec({ {1, 1, 1, 0, 0, 0}, {0, 1, 0, 0, 0, 0}, {1, 1, 1, 0, 0, 0},
									  {0, 9, 2, -4, -4, 0}, {0, 0, 0, -2, 0, 0}, {0, 0, -1, -2, -4, 0} });

	int pivot = 0;

	std::vector<int> CalHourGlass;

	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec[i].size(); j++)
		{
			if (i != 0 && i != vec.size() - 1 && j != 0 && j != vec[i].size() - 1)
			{
				int pivotTop = 0;
				int pivotBottom = 0;

				pivot = vec[i][j];

				for (int k = j - 1; k <= j + 1; k++)
				{
					pivotTop += vec[i - 1][k];
					pivotBottom += vec[i + 1][k];
				}

				CalHourGlass.push_back(pivot + pivotTop + pivotBottom);
			}
		}
	}


	int topSum = 0;

	for (int i = 0; i < CalHourGlass.size(); i++)
	{
		for (int j = i + 1; j < CalHourGlass.size(); j++)
		{
			if (CalHourGlass[i] < CalHourGlass[j])
			{
				int swap = CalHourGlass[i];
				CalHourGlass[i] = CalHourGlass[j];
				CalHourGlass[j] = swap;
			}
		}
	}

	std::cout << CalHourGlass[0] << std::endl;

	std::cin.get();
}
