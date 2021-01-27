#include <iostream>
#include <string>

using namespace std;

int main() {

	int a, b;

	string List[] = { "zero" , "one", "two", "three", "four", "five", "six", "seven",
						"eight", "nine" };

	int size = sizeof(List) / sizeof(List[0]);

	cin >> a >> b;

	/*for (int i = a; i <= b; i++)
	{
		if (i <= size)
		{
			cout << List[i] << "\n";
		}
		if (i % 2 == 0)
		{
			cout << "even";
		}
		else
		{
			cout << "odd";
		}
	}*/

	for (int i = a; i <= b; i++)
	{
		cout << ((i <= 9) ? List[i] : ((i % 2 == 0) ? "even" : "odd")) << endl;
	}


	cin.get();
}