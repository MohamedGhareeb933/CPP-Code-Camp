#include <iostream>
using namespace std;

class sharppy{
friend void sharppyFunction(sharppy &SO);
public:
    sharppy() {
    Shvar = 0;
    }
private:
    int Shvar;
};

void sharppyFunction(sharppy &SO) {
    SO.Shvar = 99;
    cout << SO.Shvar << endl;
}

int main()
{
    sharppy shObj;
    sharppyFunction(shObj);

}
