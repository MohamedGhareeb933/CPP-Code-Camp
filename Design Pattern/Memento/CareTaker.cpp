#include "CareTaker.h"

CareTaker::CareTaker(Originator* originator) : _Originator(originator)
{
	this->_Originator = originator;
}

void CareTaker::push()
{
	std::cout << "\nCaretaker: Saving Originator's state...\n";
	this->_Memento.push_back(this->_Originator->save());
}

void CareTaker::pop()
{
	if (this->_Memento.empty())
	{
		return;
	}
	Memento *memento = this->_Memento.back(); // peek memento and initialize new pointer of memento 
	this->_Memento.pop_back(); // pop Memento from Container 
	std::cout << "Caretaker: Restoring state to: " << memento->getName() << "\n";

	try
	{
		this->_Originator->restore(memento);
	}
	catch (...)
	{
		this->pop();
	}

}

void CareTaker::showHistory() const
{
	for (Memento *memento : this->_Memento) {
		std::cout << "Caretaker: Here's the list of mementos:\n";
		std::cout << memento->getName() << std::endl;
	}
}
