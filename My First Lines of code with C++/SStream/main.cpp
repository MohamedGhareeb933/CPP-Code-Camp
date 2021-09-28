#include <iostream>
#include <sstream>
using namespace std;

int main()
{

    string Number;
    int x = 50;
    // x = Number; - Not legal , Because compiler can't initialize int to Strings
    stringstream(x) >> Number ;
    cout << Number;
}
