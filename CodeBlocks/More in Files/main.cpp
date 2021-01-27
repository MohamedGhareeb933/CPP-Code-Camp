#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ShFile("Save Data.txt");
    if(ShFile.is_open()){

    }else {cout << "Something is Wrong With Saving Files\n ";}

    ShFile << "Stage One Completed\n ";
    ShFile.close();
}
