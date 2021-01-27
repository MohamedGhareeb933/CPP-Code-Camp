#include <iostream>
using namespace std;

// merge the two halves into a sorted array
void Merge(int *a, int from, int to, int mid) {
	int i = from;
	int j = mid + 1;
	int k = 0;

	int temp[50];

	// merge the two parts into temp[]
	while (i <= mid && j <= to) {
		if (a[i] < a[j]) {
			temp[k] = a[i];
			k++; i++;
		}
		else {
			temp[k] = a[j];
			k++; j++;
		}
	}
	// insert all the remaining values from i to mid into temp[]
	while (i <= mid) {
		temp[k] = a[i];
		k++; i++;
	}
	// insert all the remaining values from j to to into temp[]
	while (j <= to) {
		temp[k] = a[j];
		k++; j++;
	}
	// assign sorted data stored in temp[] to a[]
	for (i = from; i <= to; i++) {
		a[i] = temp[i - from];
	}
}

void MergeSort(int *a, int from, int to) {
	int mid;
	if (from < to) {
		mid = (from + to) / 2;

		MergeSort(a, from, mid);
		MergeSort(a, mid + 1, to);

		Merge(a, from, to, mid);
	}
}

int main() {
	int n = 10; // number of elements
	int arr[10] = { 10, 54, 63, 6, 420, 11, 41, 32, 17, 22 };

	MergeSort(arr, 0, n - 1);

	// print the array
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	system("Pause");

	return 0;
}
