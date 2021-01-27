#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream Data("Names.txt");

    int id;
    string name;

    while(Data >> id >> name) {
        cout << id << ": " << name << endl;
    }
    if(Data.is_open()) {
        cout << "\nFile Opened" << endl;
    }else {
    cout << "Loading Failed " << endl;
    }
    Data.close();
}
