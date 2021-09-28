#include <iostream>
using namespace std;

class Birthday{
public:
    Birthday(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
    }
    void PrintDate() {
    cout << day << "/" << month << "/" << year;
    }
private:
    int day;
    int month;
    int year;

};
class People {
public:
    People(string n, Birthday bo)
    : name(n), BirthObject(bo)
    {}
    void PrintInfo() {
    cout << name ;
    BirthObject.PrintDate();
    }
private:
    string name;
    Birthday BirthObject;

};

int main()
{
    Birthday BOb(1, 1, 1990);
    People POb("Moo", BOb);
    POb.PrintInfo();
}
