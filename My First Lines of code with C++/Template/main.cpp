#include <iostream>
using namespace std;

template <class Moo>
Moo MakeCal(Moo a, Moo b) {
   return a * b;
}

int main()
{
    int x = 5, y = 10, z;
    z = MakeCal(x, y);
    cout << z << endl;
}
