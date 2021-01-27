#include <iostream>
using namespace std;

class sharppy{
public:
    int var;
    sharppy(){}
    sharppy(int a) {
    var = a;
    }
    sharppy operator+(sharppy &ShObj) {
        sharppy ASO;
        ASO.var = this->var + ShObj.var;
    }
};
int main()
{
    sharppy SO1(10) , SO2(40);
    sharppy ASO = SO1 + SO2;
    cout << ASO.var;
}
