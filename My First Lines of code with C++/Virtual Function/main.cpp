#include <iostream>

class Enemy
{
public:
    virtual void Attack()
    {

    }
protected:
    int AttackPower;
};

class Ninja :public Enemy
{
public:
    void Attack()
    {
        std::cout << "Ninja Attack !" << std::endl;
    }
};

class Monster :public Enemy
{
public:
    void Attack()
    {
        std::cout << "Monster Attack !" << std::endl;
    }
};

int main()
{
    Ninja N;
    Monster M;

    Enemy *NP = &N;
    Enemy *MP = &M;

    NP->Attack();
    MP->Attack();
}
