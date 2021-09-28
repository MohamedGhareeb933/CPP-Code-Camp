#include <iostream>
using namespace std;

class Enemy{
public:
    virtual void Attack() {
        cout << "Enemy Attack" << endl;
    }
};
class Ninja: public Enemy {
public:
    void Attack() {
        cout << "Ninja Attack !!" << endl;
    }
};
int main() {
    Ninja NO;
    Enemy E;
    Enemy *e;
    Enemy *EO = &NO;

    EO->Attack();
    E.Attack(); // CANT call ENEMY attack function through POINTER*.

    }
