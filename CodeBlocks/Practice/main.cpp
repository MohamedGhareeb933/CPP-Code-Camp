#include <iostream>
#include <iterator>
#include <vector>
#include <map>

int main()
{
     std::vector<std::string> Name;
     std::vector<std::string> ::iterator Asterisk; //*

     Name.push_back("Sharppy");
     Name.push_back("Moahmed");

    for(Asterisk = Name.begin(); Asterisk!= Name.end(); Asterisk++) {
        std::cout << "Vector: " << *Asterisk << std::endl;
    }
    std::cout << std::endl;

    std::map <std::string, int> Word;
    std::map <std::string, int> ::iterator Point;

    Word["Iam coding in c++"] = 1;
    Word["come join us!!"] = 2;

    for(Point = Word.begin(); Point != Word.end(); Point++) {
        std::cout << "Map: " << Point->first << std::endl;
    }
}
