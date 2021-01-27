#include <iostream>


void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int arr[], int size) {
	
	int min;

	for (int x = 0; x < size -1; x++) {

		min = x;

		for (int j = x + 1; j < size; j++) {

			if (arr[j] < arr[min]) {
				min = j;
			}

			
		}
		swap(&arr[min], &arr[x]);
	}

}

void printArr(int arr[], int size) {
	for (int x = 0; x < size; x++) {
		std::cout << arr[x] << " ";
	}
}

int main() {

	int arr[] = { 64, 25, 12, 22, 11 };
	int size = sizeof(arr) / sizeof(arr[0]);

	selectionSort(arr, size);
	printArr(arr, size);

	std::cout << "\n\n"; system("pause"); return 0;
}