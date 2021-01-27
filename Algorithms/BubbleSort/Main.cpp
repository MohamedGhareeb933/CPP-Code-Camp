#include <iostream>


// SWAPING BY VALUE 
void swap(int *f, int *s) {
	int swap = *s;
	*s = *f;
	*f = swap;
}


//
void bubbleSort(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {

		for (int c = 0; c < size - i - 1; c++) {
			
			if (arr[c] > arr[c +1 ])
			{
				swap(&arr[c], &arr[c + 1]);
			}
		}
	}
}

void printArray(int arr[], int size) {
	
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << "  ";
	}
}

int main() {

	int arr[] = { 64, 34, 25, 12, 90, 11, 22 };
	int size = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, size);
	printArray(arr, size);
	
	std::cout << "\n\n";  system("pause");  return 0;
}