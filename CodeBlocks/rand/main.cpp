#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int width = 20;
    int y;
    for(int x = 0; x <= 20; x++) {

        y =  2+(rand()% width) -1;
        cout << y << endl;
    }



}
