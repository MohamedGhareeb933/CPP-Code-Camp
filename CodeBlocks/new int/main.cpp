#include <iostream>

using namespace std;

class PrintSome{
public:
int x;
};

int main()
{
    PrintSome a = new PrintSome;
   cout << a.x << endl;

}
