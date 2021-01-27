#include <iostream>

class grpah {

public:
	int n;
	int** adj;

	grpah(int n) {
		this->n = n;
		adj = new int*[n];

		for (int i = 0; i < n; i++)
		{
			adj[i] = new int[5];

			for (int j = 0; j < n; j++)
			{
				adj[i][j] = 0;
			}
		}
	}

	void addEdge(int orig, int dest) {
		if (orig > n || dest > n || orig < 1 || dest < 1)
		{
			std::cout << "invalid input " << orig << " , " << dest;
		}
		else
		{
			adj[orig - 1][dest -1] = 1;
		}
	}

	void removeEdge(int orig, int dest) {
		if (orig > n || dest > n || orig < 1 || dest < 1)
		{
			std::cout << "invalid Remove " << orig << " , " << dest;
		}
		else
		{
			adj[orig - 1][dest - 1] = 0;
		}
	}

	void ouput() {
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				std::cout << adj[i][j] << " ";
			}
			std::cout << std::endl;
		}
	}

};

int main() {

	grpah g(5);
	g.addEdge(1, 5);
	g.addEdge(3, 3);
	g.ouput();

	std::cout << "\n\n"; system("pause");
	return 0;
}