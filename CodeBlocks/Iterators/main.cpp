#include <iostream>
#include <map>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    std::map <std::string, int> Name;
    std::map <std::string, int> ::iterator Point;

    Name["Sharppy"] = 1;
    Name["Mohamed"] = 2;

    for(Point = Name.begin(); Point != Name.end(); Point++) {
        std::cout << "Map: " << Point << std::endl;
    }

    // Iterators in Vector
    std::vector<std::string> Word;
    std::vector<std::string>::iterator Asterisk;

    Word.push_back("Iam coding ");
    Word.push_back("join me");

    for(Asterisk = Word.begin(); Asterisk != Word.end(); Asterisk++) {
        std::cout << "Vector: " << *Asterisk << std::endl;
    }


}
