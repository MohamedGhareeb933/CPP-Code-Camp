#include <iostream>

class myClass {
public:
myClass(int a, int b)
:myVar(a), anyVar(b)
{
    // you can copy the Print Func Here and Print it out without Getter Class
}

void Print() {
    std::cout << myVar << std::endl << anyVar << std::endl;
}

private:
    int myVar;
    const int anyVar;

};
int main()
{
    myClass obj(10, 20);
    obj.Print();
}
