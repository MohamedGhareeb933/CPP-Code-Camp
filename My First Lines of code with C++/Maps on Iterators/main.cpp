#include <iostream>
#include <map>

bool IsoGram(std::string);

int main()
{
    std::string s;
    std::getline(std::cin, s);
    std::cout << IsoGram(s) << std::endl;

}

bool IsoGram(std::string Guess)
{
    std::map<char, bool> Letter;
    for(auto x : Guess) {
        if(Letter[x] == true){
            return false;
        }
        else{
            Letter[x] = true;
        }
    }

}
