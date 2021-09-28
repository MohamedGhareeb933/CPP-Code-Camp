#include <iostream>
using namespace std;

void PassByRef(int*);
// Passing by Ref

int main()
{
   int Value = 20;
    PassByRef(&Value);

    cout << Value << endl;

}

void PassByRef(int* x) {
    *x = 100;
}
