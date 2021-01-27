#include <iostream>
using namespace std;

class Enemy{
public:
    virtual void SetAttack(int a) {
     AP = a;
    }
protected:
    int AP;
};
class Ninja: public Enemy {
public:
    void SetAttack() {
        cout << "Ninja Attacked you, you'r HP Decreased by:(-" << AP << ")" << endl;
    }
};
class Monster: public Enemy {
public:
    void SetAttack() {
        cout << "Monster Attacked you, you'r HP Decreased by:(-" << AP << ")" << endl;
    }
};
class Dragon: public Enemy {
public:
    void SetAttack() {
        cout <<"Dragon Attacked you, you'r HP Decreased by:(-" << AP << ")" << endl;

    }
};
int main() {
    Ninja NO;
    Monster MO;
    Dragon DO;
    Enemy *EP_Ninja = &NO;
    Enemy *EP_Monster = &MO;
    Enemy *EP_Dragon = &DO;

    EP_Ninja->SetAttack(50);
    EP_Monster->SetAttack(75);
    EP_Dragon->SetAttack(100);


}
