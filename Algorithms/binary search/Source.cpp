#include <iostream>

int binarySearch(int arr[], int l, int r, int element) {

	if (l <= r)
	{
		int med = l + (r - 1) / 2;

		if (arr[med] == element)
		{
			return med;
		}
			if (arr[med] > element)
			{
				return binarySearch(arr, l, med - 1, element);
			}
			else
			{
				return binarySearch(arr, med + 1, r, element);
			}
		
	}

	return -1;
}

int main() {

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	

	int result = binarySearch(arr, 0, size - 1, 10);
	 
	std::cout << "fount element at index: " << result;

	std::cout << "\n\n"; system("pause");
	return 0;
}