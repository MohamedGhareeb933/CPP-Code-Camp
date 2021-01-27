#include <iostream>

using namespace std;

void AskUser(int &,string &);
void CalOutcome(int, string);

int main()
{
   int score;
   string name;
    AskUser(score, name);
    CalOutcome(score, name);
}

void AskUser(int &NewScore, string &NewName) {
    cout << "please Fill in you'r Name: " << endl;
    cin >> NewName;
    cout << "please Enter you'r Score" << endl;
    cin >> NewScore;
}
void CalOutcome(int NewScore, string NewName) {
    if(NewScore > 50) {
        cout << "Great job, " << NewName << endl;
    }
    else{
        cout << "you Fail, " << NewName << endl;
    }
}
