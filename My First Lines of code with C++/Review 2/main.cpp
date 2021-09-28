#include <iostream>
using namespace std;


int main() {

    int Array[2][3] = {{1, 2, 3},{4, 5, 6}};

    for(int row = 0; row <= 1; row ++) {
        for(int column = 0; column <= 2; column++) {
            cout << Array[row][column] << " ";
        }
        cout << endl;
    }

}
