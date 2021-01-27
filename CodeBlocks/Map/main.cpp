#include <iostream>
#include <map>

int main()
{

    std::map <char , std::string> Name;
    Name['a'] = "Sharppy";
    Name['b'] = "Mohamed";
    Name['c'] = "Mo";
    Name['a'] = "Nothing";
    Name['d'] = "What ever";

    std::cout<< Name.size() << std::endl;
    std::cout<< Name['b'] << std::endl;

}
