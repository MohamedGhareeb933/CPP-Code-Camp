#include <iostream>

int Func(int *x)
{
    return *x = 100;
}

int main()
{
    int Var = 20;
    Func(&Var);
    std::cout << Var;
}
