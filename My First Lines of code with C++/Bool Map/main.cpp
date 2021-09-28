// NOT MAP . ITS  inhanced for loop

#include <iostream>
#include <map>


// fiction definition
bool Map(std::string);

int main()
{
    // check for every word
   std::string Word = "planet";
   std::cout << Map(Word) << std::endl;
   // output is 0 by default.
}

// fiction declaration
bool Map(std::string Guess) { // Map Always be 0 by Default.
    for(auto x : Guess) {     // equal to - for(int x = 0; x <= Guess.length(); x++)
    }
}
