#include <iostream>
using namespace std;

template <class T>
class TemplateClass{

private:
    T First ,Second;

public:
    TemplateClass(T a ,T b)
    : First(a) , Second(b) {}

    T Bigger();
};

template <class T>
T TemplateClass<T>::Bigger() {
    return (First > Second ? First : Second);
}
int main()
{
    double x,y;
    cout << "please Enter 2 Comparisons Numbers" << endl;
    cout << "First Num: ";
    cin >> x;
    cout << "Second Num: ";
    cin >> y;

    TemplateClass <double> ObjT(x, y);
    cout << ObjT.Bigger() << endl;
}
