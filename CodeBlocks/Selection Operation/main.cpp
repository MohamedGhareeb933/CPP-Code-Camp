#include <iostream>

class Selection
{
public :
    Print()
    {
        std::cout << "what ever" << std::endl;
    }
};

int main()
{
   Selection S;
   Selection *Se = &S;
   Se->Print();
}
