#include <iostream>
#include <fstream>
using namespace std;

int List();
void Sum(int x);

int main()
{
    int Choose;
    Choose = List();
    while (Choose != 3) {
    switch(Choose){
        case 1:
            Sum(1);
                break;
        case 2:
            Sum(2);
                break;
        }
    Choose = List();
    }

}

int List() {
    int Select;
    cout << "Please Choose OR 3 for Exit\n " << endl;
    cout << "1: Death box" << endl;
    cout << "2: Buff box" << endl;
    cout << "3 Exit Program" << endl;
    cin >> Select;
    return Select;
}

void Sum(int x) {
    ifstream Data("Objects.txt");
    string name;
    double value;

    if(x == 1) {
        while(Data >> name >> value) {
            if(value < 0) {
                cout << name << ": " << value << endl;
            }
        }
    }
    if(x == 2) {
        while(Data >> name >> value) {
            if(value > 0) {
                cout << name << ": " << value << endl;
            }
        }
    }
}
