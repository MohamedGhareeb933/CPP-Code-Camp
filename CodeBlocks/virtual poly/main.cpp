#include <iostream>

using namespace std;

class Enemy{
public:
  virtual void Attack(int a) {
  }
};
class Ninja: public Enemy {
public:
    void Attack(int a) {
        cout << "Ninja Attack " << a << endl;
    }
};
class Monster: public Enemy {
public:
    void Attack(int a) {
        cout << "Monster Attack " << a << endl;
    }
};
int main()
{
  Ninja N;
  Monster M;
  Enemy *NinjaP = &N;
  Enemy *MonsterP = &M;
  NinjaP->Attack(40);
  MonsterP->Attack(50);
}
