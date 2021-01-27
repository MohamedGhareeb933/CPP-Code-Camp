#include <iostream>
using namespace std;


//function declaration
bool is4digit (string );

int main()
{
    string PIN;
    cout << "Enter 4 Digit number: " ;
    cin >> PIN;
    if(is4digit(PIN) == 1)
        cout << "PIN accepted. \n";
        else
            cout << "PIN denied. \n";

}

// function definition
bool is4digit (string pin) {
    bool status = true;
    if(pin.length() != 4) {
        status = false;
    }
    return status;
}
