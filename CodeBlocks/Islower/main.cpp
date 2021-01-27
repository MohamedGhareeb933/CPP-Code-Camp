#include <iostream>
#include <map>

bool Lower(std::string);

int main()
{
    std::string s;
    std::getline(std::cin, s);
    if(Lower(s)) {
        std::cout << "please Enter all LowerCase" << std::endl;
    }
}

bool Lower(std::string Word)
{
    for(auto Letter : Word) {
        if(isupper(Letter)) {
            return true;
        }

    }
}
