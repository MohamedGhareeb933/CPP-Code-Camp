#include <iostream>
#include <vector>
#include <iterator>


void NormalIt() {
	std::vector<std::vector<int>> vec;

	int cal = 10;

	for (int i = 0; i < 5; i++)
	{
		std::vector<int> vCal;

		for (int i = 0; i < 5; i++)
		{
			vCal.push_back(cal);
			cal += 5;
		}

		vec.push_back(vCal);
	}

	// binary iteration
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec[i].size(); j++)
		{
			std::cout << vec[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void vectorIT() 
{
	std::vector<std::vector<int>> vec;

	int cal = 10;

	for (int i = 0; i < 5; i++)
	{
		std::vector<int> vCal;

		for (int i = 0; i < 5; i++)
		{
			vCal.push_back(cal);
			cal += 5;
		}

		vec.push_back(vCal);
	}


	// memory iteration.
	std::vector<int>::iterator it;
	for (int i = 0; i < vec.size(); i++)
	{
		for (it = vec[i].begin(); it < vec[i].end(); it++)
		{
			std::cout << *it << " ";
		}

		std::cout << std::endl;
	}

}

void worngAnswer() {
	vector<int>::iterator it;

	int mid = 0;
	int calLeft = 0;
	int calRight = 0;

	for (int i = 0; i < arr.size(); i++)
	{
		int mid = arr.size() / 2;

		if (i == 0)
		{
			it = arr[i].begin();
			calLeft += *it;

			it = arr[i].end() - 1;
			calRight += *it;
		}

		if (i == mid)
		{
			calLeft += arr[i][mid];
			calRight += arr[i][mid];
		}

		if (i == arr.size() - 1)
		{
			it = arr[i].end() - 1;
			calLeft += *it;

			it = arr[i].begin();
			calRight += *it;
		}
	}

}



int main() {

	std::vector<std::vector<int>> arr({ {11, 2, 4, 9}, {4, 5, 6, 7}, {10, 8, 25, -12}, {57, 967, 16, 37} });

	int calLeft = 0;
	int calRight = 0;
	int totalsum = 0;

	int r = arr.size();

	for (int i = 0; i < arr.size(); i++)
	{
		r--;

		calLeft += arr[i][i];
		calRight += arr[i][r];

	}

	std::cout << calRight;

	//std::cout << calRight;


	/*if (calLeft - calRight >= 0)
	{
		std::cout << calLeft - calRight;
	}
	else
	{
		std::cout << calRight - calLeft;
	}*/

	std::cin.get();
}
