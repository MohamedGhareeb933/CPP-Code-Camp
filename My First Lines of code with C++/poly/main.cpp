#include <iostream>
#include "Enemy.h"
#include "Ninja.h"
#include "Monster.h"
using namespace std;

int main()
{
    Ninja N;
    Monster M;

    Enemy *NinjaP = &N;
    Enemy *MonsterP = &M;
    NinjaP->SetAP(40);
    MonsterP->SetAP(50);

    N.Attack();
    M.Attack();

}
