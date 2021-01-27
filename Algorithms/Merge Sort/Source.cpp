#include <iostream>

 
void merge(int arr[], int l, int m, int r) {

	int i, j, k;
	int le = m - l + 1;
	int re = r - m;

	int *leftArray = new int[le];
	int *rightArray = new int[re];

	for (i = 0; i < le; i++)
	{
		leftArray[i] = arr[l + i];
	}
	for (j = 0; j < re; j++)
	{
		rightArray[j] = arr[m + 1 + j];
	}

	 i = 0; // left array 
	 j = 0; // right array 
	 k = l; // the two arrays

	while (i < le && j < re)
	{
		if (leftArray[i] <= rightArray[j]) // if the left is smaller
		{
			arr[k] = leftArray[i];
			i++;
		}
		else
		{
			arr[k] = rightArray[j];
			j++;
		}
		k++;
	}
	

	// TODO - insert all the rest of the array into total array.
	while (i < le) // i
	{
		arr[k] == leftArray[i];
		i++;
		k++;
	}
	while (j < re) 
	{
		arr[k] = rightArray[j];
		j++;
		k++;
	}

	delete leftArray;
	delete rightArray;
}

void mergeSort(int arr[], int l, int r) {

	if (l < r)
	{
		int m = l + (r - l) / 2;

		mergeSort(arr, l, m); 
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);

	}
}



void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}

}

int main() {

	int arr[] = { 24, 48, 67, 27, 547, 54, 642, 543 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	mergeSort(arr, 0, arrSize - 1);
	
	printArray(arr, arrSize);

	std::cout << "\n\n"; system("pause");
	return 0;
}