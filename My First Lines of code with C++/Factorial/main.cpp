#include <iostream>

int factorial(int n)
{
    if(n ==1)
        return n;
    else
        return n* factorial(n -1);
}
int main()
{
   // recursion 5 = *4*3*2*1

   std::cout << factorial(5) << std::endl;
}
