#include <iostream>
#include "MyClass.h"
using namespace std;

MyClass::MyClass()
{

}

void MyClass::setName(string x) {
    name = x;
}
string MyClass::getName() {
    return name;
}
