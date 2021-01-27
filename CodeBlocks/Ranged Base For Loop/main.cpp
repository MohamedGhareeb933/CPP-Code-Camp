#include <iostream>

int main()
{

    int x[9] {11, 22, 33, 44, 55, 66, 77, 88 ,99 };

    // its like inheritance from the x Element
    for(int a : x) {
        std::cout << a << " " ;
    }

    std::cout << std::endl;
    // Another Example
    for (int b : {1, 2, 3, 4})
        std::cout << b << std::endl;
}
