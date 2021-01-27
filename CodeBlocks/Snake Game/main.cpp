#include <iostream>
#include <ctime>
#include <conio.h>  // Console Input&Output , Keyboard , kbhit();
#include <windows.h>    // Game Speed , Compiler , Sleep();

using namespace std;

//Functions Prototype
void Setup();
void Draw();
void Input();
void Logic();

//Setup
bool gameOver;
int score;
enum Direction{STOP, UP, DOWN, RIGHT, LEFT} dir;

//MAP Dimensions
const int width = 40;
const int height = 20;

//Map Positions
int snakeX, snakeY, fruitX, fruitY;

// Tail
int tailX[100] , tailY[100];
int nTail;


int main()
{

    Setup();
    while(!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(50);
    }
}

//Functions Definitions
void Setup() {
    gameOver = false;
    dir = STOP;
    snakeX = width / 2;
    snakeY = height / 2;
    srand(time(0));
    fruitX = rand() % width;
    fruitY = rand() % height;
}

void Draw() {

    system("CLS"); // clear screen

    for(int w = 0; w <= width; w++) { // Drawing - Top
        cout << "#";
    }
    cout << endl;
    for(int h = 0; h <= height; h++) { // Drawing Walls

        for(int w = 0; w <= width; w++) {
            if(w == 0){
                cout << "#";
            }

            if(w == snakeX && h == snakeY) {
                cout << "0";
            }
            else if (w == fruitX && h == fruitY) {
                cout << "$";
             } else{ cout << " "; }

            if(w == width -2) {
                cout << "#";
            }
        }
        cout << endl;
    }
    for(int w = 0; w <= width; w++) { // Drawing Button
        cout << "#";
    }
    cout << endl;
    cout << "Score is " << score;


}

void Input() {
    if(kbhit()) { // if keyboard Hit
        switch(getch()) { // GetCharacter - Store the ASCII Var and Return it without any Eco
            case 'w':
                case 'W':
                    dir = UP;
                        break;
            case 's':
                case 'S':
                    dir = DOWN;
                        break;
            case 'd':
                case 'D':
                    dir = RIGHT;
                        break;
            case 'a':
                case 'A':
                    dir = LEFT;
                        break;
            case 'x':
                 case 'X':
                    gameOver = true;
                        break;
        }
    }

}

void Logic() {

// Snake Tail
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X , prev2Y;
    tailX[0] = snakeX;
    tailY[0] = snakeY;

// snakeY = height - up and down
// snakeX = width - right and left
    switch(dir) {
        case UP:
            snakeY --;
                break;
        case DOWN:
            snakeY ++;
                break;
        case RIGHT:
            snakeX ++;
                break;
        case LEFT:
            snakeX --;
                break;
    }
    if(snakeX > width-2 || snakeX < 0 || snakeY > height || snakeY < 0) {
        gameOver = true;
    }
    if(snakeX == fruitX && snakeY == fruitY) {
        score += 10;
        srand(time(0));
        fruitX = rand() % width;
        fruitY = rand() % height;
        nTail++;
    }
}
