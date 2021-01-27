#include <iostream>

using namespace std;

void GiveInfo(int &, string &);
//@pram , String name, int Score
void CalInfo(int , string);
int main()
{
    int socre = 0;
    string name = "Mooo";
    GiveInfo(socre, name);
    CalInfo(socre, name);

}
void GiveInfo(int &NewScore, string &NewName) {
    cout << "please Input your name" << endl;
    cin >> NewName;
    cout << "please input your score" << endl;
    cin >> NewScore;
}

void CalInfo(int NewScore, string NewName) {
    if(NewScore >=50) {
        cout << "Gz: " << NewName << " you have passed" << endl;
    }
    else{
        cout << "Sorry " << NewName << " you have failed" << endl;
    }

}
