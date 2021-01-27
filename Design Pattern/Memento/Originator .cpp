#include "Originator .h"

std::string Originator::generateRandomString(int len)
{
	std::string randomString;

	const char Alpha[] =  
		"0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

	int alphaLen = sizeof(Alpha) - 1;

	for (int i = 0; i < len; i++)
	{
		randomString += Alpha[std::rand() & alphaLen];
	}

	return randomString;
}

Originator::Originator(std::string state) : _state(state)
{
	std::cout << "Originator: My initial state is: " << this->_state << "\n";
}

void Originator::doSomething()
{
	std::cout << "Originator: I'm doing something important.\n";

	this->_state = this->generateRandomString(30);

	std::cout << "Originator: and my state has changed to: "  << this->_state << std::endl;

}

Memento *Originator::save()
{
	return new MementoConcrete(this->_state);
}

void Originator::restore(Memento* memento)
{
	this->_state = memento->state();
	std::cout << "Originator: My state has changed to: " << this->_state << std::endl;
}
