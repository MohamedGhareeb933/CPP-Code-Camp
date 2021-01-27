#include <iostream>

void swap(int *a, int *p) {
	int swap = *a;
	*a = *p;
	*p = swap;
}

int partition(int arr[], int low, int high) {

	int pivot = arr[high];
	int j = low - 1;

	for (int i = low; i < high; i++)
	{
		if (arr[i] < pivot)
		{
			j++;
			swap(&arr[j], &arr[i]);
		}
	}

	swap(&arr[j + 1], &arr[high]);
	return (j + 1);
}

void quickSort(int arr[], int low, int high) {
	if (low < high)
	{
		int pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

void printArray(int arr[], int size) {

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}

int main() {

	int arr[] = { 45, 578, 513, 57, 26, 37, 45, 241, 56 };
	int size = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0, size - 1);
	printArray(arr, size);

	std::cout << "\n\n"; system("pause");
	return 0;
}