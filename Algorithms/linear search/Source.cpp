#include <iostream>

int search(int arr[], int size, int ele) 
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == ele)
		{
			return i;
		}
	}
	return -1;
}

int main() {

	int arr[] = { 45, 4, 56, 897, 73, 46, 68, 30};
	int size = sizeof(arr) / sizeof(arr[0]);

	std::cout << "found element at index "  << search(arr, size, 45);

	std::cout << "\n\n"; system("pause");
	return 0;
}