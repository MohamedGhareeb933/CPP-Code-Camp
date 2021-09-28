#include <iostream>

class Enemy {
public:
    void SetAttackPower(int a) {
        AttackPower = a;
    }
protected:
    int AttackPower;
};

class Ninja :public Enemy {
public:
    void Attack()
    {
        std::cout << "Ninja! -" << AttackPower << std::endl;
    }
};

class Monster :public Enemy {
public:
    void Attack()
    {
        std::cout << "Monster! -" << AttackPower << std::endl;
    }
};

int main() {
   Ninja N;
   Monster M;

   Enemy *PN = &N;
   Enemy *PM = &M;

   PN->SetAttackPower(50);
   PM->SetAttackPower(80);

   N.Attack();
   M.Attack();

}
