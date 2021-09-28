#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream Data("Names.txt");

    cout << "enter you'r ID and name , Ctrl + Z to Exit" << endl;

    int id;
    string name;

    while(cin >> id >> name) {
        Data << id << ' ' << name << endl;
    }

}
