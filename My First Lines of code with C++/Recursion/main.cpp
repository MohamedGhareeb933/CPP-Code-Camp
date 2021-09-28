#include <iostream>
using namespace std;

int Recursion(int x)
{
    if(x == 1)
    return x;

    else
        return x *Recursion(x -1);
}

int main()
{
    cout << Recursion(6) << endl;
}
