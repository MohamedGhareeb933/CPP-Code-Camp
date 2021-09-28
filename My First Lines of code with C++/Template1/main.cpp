#include <iostream>
using namespace std;

template <class T>
class Sharppy {
public:
    T First, Second;
    Sharppy(T f, T s) {
        First = f;
        Second = s;
    }
    T Bigger();
};
template <class T>
T Sharppy<T>::Bigger() {
    return (First > Second ? First : Second);
}
int main() {
    Sharppy <int> ShO(2056, 2050);
    cout << ShO.Bigger();
}
