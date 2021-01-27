#include "creator.h"

std::string creator::doSomething()
{
	product* p = this->productPointer();
	
	std::string text = p->operation();

	delete p;

	return text;
}

product* concreteCreator1::productPointer() const
{
	return new concreteProduct1();
}
