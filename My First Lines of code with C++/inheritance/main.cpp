#include <iostream>

class Base
{
public:
    int PublicVar;
protected:
    int ProtectedVar;
private:
    int PrivateVar;

};

class Derived :public Base
{
public:
    Derived()
    {
        PublicVar = 1;
        ProtectedVar = 2;
        std::cout << PublicVar << std::endl << ProtectedVar;
    }

};

int main()
{
    Derived dp;


}
