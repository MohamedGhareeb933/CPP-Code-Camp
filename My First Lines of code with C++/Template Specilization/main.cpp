#include <iostream>
using namespace std;

template <class T>
class Sharppy{
public:
    Sharppy(T a) {
        cout << a <<" :this is not a Character" << endl;
    }
};
template<>
class Sharppy<char>{
public:
    Sharppy(char a) {
        cout << a << " : this is Indeed a Character" << endl;
    }
};
int main()
{
  Sharppy <int> ShO(44);
  Sharppy <double> ShO2(45.22);
  Sharppy <char> ShO3('S');
}
