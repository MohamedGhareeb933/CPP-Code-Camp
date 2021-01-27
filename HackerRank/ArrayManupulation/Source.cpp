#include <iostream>
#include <vector>
#include <algorithm>


long arrayManipulation(int n, std::vector<std::vector<int>> queries) {

	unsigned long max = 0;
	std::vector<unsigned long> Input(n, 0);

	for (unsigned i = 0; i < queries.size(); i++)
	{
		unsigned a = queries[i][0] - 1;
		unsigned b = queries[i][1] - 1;
		unsigned long v = queries[i][2];

		for (unsigned j = a; j <= b; j++)
		{
			Input[j] += v;

			if (max < Input[j])
			{
				max = Input[j];
			}
		}
	}
	
	std::max(Input);
	return max;
}

int main() {

	std::vector<std::vector<int>> Input({ {1, 2, 100}, {2, 5, 100}, {3, 4, 100} });
	long n = 5;

	std::cout << arrayManipulation(n, Input);
}