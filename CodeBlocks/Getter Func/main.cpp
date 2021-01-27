#include <iostream>

class MyClass{
public:
    MyClass (int a, int b)
    : MyVar(a) , AnyVar(b)
    {
    }
    void Print() {
        std::cout << MyVar << std::endl << AnyVar << std::endl;
    }
private:
    int MyVar;
    int AnyVar;
};

int main()
{
    MyClass Obj(50, 90);
    Obj.Print();

}
