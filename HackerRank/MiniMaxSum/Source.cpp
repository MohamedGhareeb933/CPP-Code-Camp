#include <iostream>
#include <vector>

void miniMaxSum(std::vector<int> arr) {
	int sum = 0;
	int min = 0;
	int max = 0;

	for (int i = 0; i < arr.size(); i++) {
		sum += arr[i];
	}

	for (int i = 0; i <arr.size(); i++) {
		int cal = sum;

		cal -= arr[i];
		if (min == 0 && max == 0) {
			min = cal;
			max = cal;
		}

		if (min > cal) {
			min = cal;
		}

		if (max < cal) {
			max = cal;
		}
	}

	std::cout << min << " " << max;

}


int main() {

	std::vector<int> Input({ 1, 2, 3, 4, 5 });

	miniMaxSum(Input);

	std::cin.get();
}