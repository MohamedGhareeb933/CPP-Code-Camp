#include <iostream>
#include <string>
#include "Memento.h"
#include "MementoConcrete.h"
#include "Originator .h"
#include "CareTaker.h"


void clientMode() {

	Originator *originator = new Originator("this is a new Originator");
	CareTaker *careTaker = new CareTaker(originator);
	careTaker->push();
	originator->doSomething();
	careTaker->push();
	originator->doSomething();
	careTaker->showHistory();
	careTaker->pop();


	delete originator;
	delete careTaker;
}

int main() 
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));

	clientMode();

	std::cout << "\n\n"; system("pause");
	return 0;
}
