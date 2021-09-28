#include <iostream>
#include "sharppy.h"
using namespace std;

 sharppy::sharppy(int a, int b)
 : regVar(a),
   constVar(b)
 {}

 void sharppy::print() {
    cout << "Regvar is equal to:" << regVar << " ConstVar is equal to: " << constVar << endl;
 }
