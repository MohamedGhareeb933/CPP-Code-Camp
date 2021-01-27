#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const int width = 40; // the width Dimension
    const int height = 20; // height dimension.
    int snakeX, snakeY, fruitX, fruitY; // snake and fruit position.
    snakeX = width / 2; // 20
    snakeY = height / 2; // 10
    srand(time(0)); // random
    fruitX = rand() % width; //  Locate Fruit at random Location
    fruitY = rand() % height; // Same for height Position

    for(int w = 0; w <= width; w++) { // Drawing - Top
        cout << "#";
    }
    cout << endl;
    for(int h = 0; h <= height; h++) { // Drawing Walls

        for(int e = 0; e <= width; e ++) {
            if(e == 0){
                cout << "#";
                }
            if(e == snakeX && h == snakeY) {
                cout << "0";
                }
           else if (e== fruitX && h == fruitY) {
                cout << "$";
                } else { cout << " "; }
            if(e == width -2) {
                cout << "#";
                }
        }
        cout << endl;
    }
    for(int w = 0; w <= width; w++) { // Drawing Button
        cout << "#";
    }
}
