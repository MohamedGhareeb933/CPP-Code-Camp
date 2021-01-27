#include <iostream>
#include <string>
#include "creator.h"
#include "product.h"


void callCreator(creator &c) {
	std::cout << c.doSomething();
}

int main() {

	creator* c = new concreteCreator1();
	callCreator(*c);

	std::cout << "\n\n"; system("pause");
	return 0;
}