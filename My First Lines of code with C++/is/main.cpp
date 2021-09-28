#include <iostream>
#include <map>

bool LowerCase(std::string);

int main()
{
    std::string s;
    std::getline(std::cin, s);
    if(!LowerCase(s)) {
        std::cout << "please Enter all lower Case" << std::endl;
    }

}

bool LowerCase(std::string Case)
{
    for(auto Letter : Case)
        if(isupper(Letter))
            return false;
        else
            return true;


}
