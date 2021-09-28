#include <iostream>
#include "Birthday.h"
#include "People.h"



int main()
{
    Birthday B(1, 1, 1990);
    People P("Sharppy", B);
    P.PrintInfo();
}
