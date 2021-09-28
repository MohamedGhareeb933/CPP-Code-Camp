#include <iostream>

using namespace std;

int main()
{

    int *p = NULL;      // pointer initialized with Null
    p = new int[20];    // Request Array Memory
    delete []p;         // Delete Array Pointed to P

}
