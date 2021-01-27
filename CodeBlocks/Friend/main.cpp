#include <iostream>

using namespace std;

class Sharppy{
friend void SharppyFriend(Sharppy  &);
public:
    Sharppy(void) {
    ShVar = 0;
    }
    void PrintSharppy(void) {
        cout << ShVar << endl;
    }
private:
    int ShVar;

};
void SharppyFriend(Sharppy &SFO) {
    SFO.ShVar = 99;
    cout << SFO.ShVar << endl;
}

int main() {
    Sharppy SO;
    SO.PrintSharppy();
    SharppyFriend(SO);

}
