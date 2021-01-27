#include <iostream>
#include <map>


bool IsIsogram(std::string );

int main(){

   std::string s;
    std::getline(std::cin, s);
    if(!IsIsogram(s))
        std::cout << "Please do not Enter Dublicated Words";
    else
        std::cout << "Letter Accepted";

}

bool IsIsogram(std::string word) {

	std::map <char, bool> LetterSeen;	// Setup Map
	for (auto Letter : word) {		    // for all letters of the word
		Letter = tolower(Letter);       // Handle Mixed Cases
		if (LetterSeen[Letter])		    // if the letter is in the map
			return false;               // we do NOT have an isisogram
		else                            // otherwise
		LetterSeen[Letter] = true;	    // add the letter to the map as seen
	}
                                        // for exmaple in case where /0 is entered
}
