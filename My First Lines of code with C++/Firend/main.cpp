#include <iostream>

class MyClass {

friend void Function(MyClass &C);

public:
    MyClass()
    {
    Value = 0;
    }
private:
    int Value;
};

void Function(MyClass &C) {
    C.Value = 50;
    std::cout << C.Value << std::endl;
}

int main() {

    MyClass C;
    Function(C);
}
