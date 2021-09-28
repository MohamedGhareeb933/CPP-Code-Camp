#include <iostream>

using namespace std;

int main()
{
    try{
        int num1, num2;
        cout << "please Enter the First Number: " << endl;
        cin >> num1;
        cout << "please Enter the Second Number: " << endl;
        cin >> num2;
        if(num2 == 0) {
            throw 0;
        }
        cout << "Total Sum is equal to: " <<num1/num2 << endl;
    }
    catch(...) {
        cout << "you can't Divide by 0" << endl;
    }
}
