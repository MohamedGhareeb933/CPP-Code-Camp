#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream Data("Objects.txt");

    string name;
    double value;

    while(cin >> name >> value) {
        Data << name << ' ' << value << endl;
    }

    if(Data.is_open()) {
        cout << "File Succefully saved" << endl;
    }else {cout << "Error Saving file" << endl;}
    Data.close();
}

