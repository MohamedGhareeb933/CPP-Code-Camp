#include <iostream>

void Convert(std::string);

int main() {

    std::string s;
    std::cout << "Please Enter a String: ";
    std::getline(std::cin, s);
    Convert(s);
    std::cout << std::endl;
}

void Convert(std::string s) {
    for(char x : s) {
        x = toupper(x);
        std::cout << x;
    }
}
