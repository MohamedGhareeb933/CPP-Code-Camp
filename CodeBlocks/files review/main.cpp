#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream Data;
    Data.open("Names.txt");
    cout << "Please input you'r ID and Name OR Ctrl + Z to Exit " << endl;
    int id;
    string name;
    while(cin >> id >> name) {
        Data << id << ' ' << name << endl;
    }
    if(Data.is_open()) {
        cout << "File saved " << endl;
    }else{cout << "Error While saving the File" << endl;
    }

    Data.close();

}
