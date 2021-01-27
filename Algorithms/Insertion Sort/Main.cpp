#include <iostream>


void insertion(int arr[], int size) 
{
	for (int i = 1; i < size; i++)
	{
		int key = arr[i]; // 1
		int j = i - 1; // 0

		while (j >= 0 && arr[j] > key) //arr[0] > arr[1]
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

void printArray (int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}

int main() {

	int arr[] = { 12, 11, 13, 5, 6 };

	int size = sizeof(arr) / sizeof(arr[0]);

	insertion(arr, size);
	printArray(arr, size);

	std::cout << "\n\n"; system("pause");
	return 0;
}