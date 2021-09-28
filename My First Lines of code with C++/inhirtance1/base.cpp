#include <iostream>
#include "base.h"
#include "derived.h"
using namespace std;

base::base()
{
}

void base::Print() {
    cout << "this is delvierd from base class" << endl;
}
