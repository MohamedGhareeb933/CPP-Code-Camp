#include <iostream>

// Convert all Digits to the lower case :: tolower
void Convert2Lower (std::string&);

// Convert all Digits to the UpperCase :: toupper

void Convert2Upper(std::string&);

int main()
{
    std::string s;
    std::cout << "please Enter a String" << std::endl;
    std::getline(std::cin, s);
    Convert2Lower(s);
    std::cout << s << std::endl;
    Convert2Upper(s);
    std::cout << s << std::endl;
}

void Convert2Lower(std::string &s) {
    for(int x = 0; x < s.length(); x++) {
        s[x] = tolower(s[x]);
    }
}

void Convert2Upper(std::string &a) {
    for(int b = 0; b <a.length(); b++) {
        a[b] = toupper(a[b]);
    }
}
