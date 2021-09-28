#include <iostream>
using namespace std;

class Enemy{
protected:
    int AttackPower;
public:
   void SetAttackPower(int a) {
        AttackPower = a;
    }
};
class Ninja :public Enemy {
public:
    void Attack() {
        cout << "you must Die !! you'r HP is now Decreased by -(" << AttackPower << ")" << endl;
    }
};
class Monster :public Enemy {
public:
    void Attack() {
        cout << "i have to eat you !! you'r HP is now Decreased by -(" << AttackPower << ")" << endl;
    }
};

int main() {
    Ninja N;
    Monster M;

    Enemy *NinjaP = &N;
    Enemy *MonsterP = &M;
    NinjaP->SetAttackPower(40);
    MonsterP->SetAttackPower(70);

    N.Attack();
    M.Attack();


}
