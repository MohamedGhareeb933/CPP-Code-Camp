#include <iostream>

void PrintArr(int [], int);

int main()
{
    int x, y, d;
    std::cout << "please input three integers you want to insert " << std::endl;
    std::cin >> x >> y >> d;
    std::cout << "result is :" << std::endl;

        int arr[3] = {x, y, d};
        int Size = sizeof(arr) / sizeof(arr[0]);
        PrintArr(arr, Size);
}

void PrintArr(int arr[], int s)
{
    for(int x = 0; x < s; x++) {
        std::cout << arr[x] << std::endl;
    }
}
