#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream sharppy("Names.txt");


    int id;
    string name;

    while(sharppy >> id >> name) {
        cout << id << ": " << name << endl;
    }
}
