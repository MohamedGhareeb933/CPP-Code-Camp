#include <iostream>
#include <vector>
#include <iterator>

int main() {

	int n = 2;


	std::vector<std::vector<int>> queries({ {1, 0, 5}, {1, 1, 7}, {1, 0, 3}, // q, x , y
										{2, 1, 0}, {2, 1, 1} });
	int lastAnswer = 0;

	std::vector<std::vector<int>> seq;
	std::vector<int> Last;
	
	for (int i = 0; i < n; i++)
	{
		std::vector<int> v1;
		seq.push_back(v1);
	}

	for (int i = 0; i < queries.size(); i++)
	{

		 int x = queries[i][1]; // reseting every iteration.
		 int y = queries[i][2];

		if (queries[i][0] == 1)
		{
			seq[(x ^ lastAnswer) % n].push_back(y);
		}
		else
		{
			int seqDef = (x ^ lastAnswer) % n; // (queries[i][1] ^ lastAnswer) % n;
			int eleDef = y % seq[seqDef].size();
			lastAnswer = seq[seqDef][eleDef];
			Last.push_back(lastAnswer);
		}

	}

	for (int i = 0; i < Last.size(); i++)
	{
		std::cout << Last[i] << " ";
	}

	std::cin.get();
}