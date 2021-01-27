#include <iostream>

void swap(int *a, int* p) {
	int temp = *a;
	*a = *p;
	*p = temp;
}

void selectionSort(int arr[], int n) {
	int x, a;
	for (x = 1; x < n; x++) { // x = 2
		a = x; // a = 2
		while (a > 0 && arr[a - 1] > arr[a]) {  // 1 > 0 && arr 1 > arr 0 
			swap(&arr[a], &arr[a - 1]);
			a--; // a = 1
		} 
	}
}

void printarr(int arr[], int size) {
	for (int x = 0; x < size; x++)
		std::cout << arr[x] << "  ";
}

int main() {
	
	int arr[] = { 5, 2, 42, 6, 1, 3, 2};
	int n = sizeof(arr) / sizeof(arr[0]);
	selectionSort(arr, n);
	printarr(arr, n);

	std::cout << "\n\n";		 system("pause");
}

/*
		j=1
		2.5.42.6.1.3.2
		j-- =0
		break while;
		j=2
		j-- =1
		false, beark while;
		j=3
		2.5.6.42.1.3.2
		running loop till j = 1 then break 
		j=4
		2.5.6.1.42.3.2
		j--;  j=3
		2.5.1.6.42.3.2
		j--;  j=2
		2.1.5.6.42.3.2
		j--, j=1
		1.2.5.6.42.3.2
		break the while loop;
		j=5
		etc..........

*/