
#include <iostream>

#include "container.h"
#include "data.h"
#include "iterator.h"

void iterator1() {

	Container<int > con;
	con.add(5);
	con.add(6);
	con.add(7);

	Iterator<int, Container<int> >* itr = con.Iteratorpointer();
	for (itr->getFirst(); !itr->end(); itr->next())
	{
		std::cout << *itr->current();
	}
}

void iterator2() 
{
	Data<int> data;
	data.add(1);

	Container<Data<int> > con1;
	con1.add(data);
	Iterator<Data<int>, Container<Data<int> > >* itr2 = con1.Iteratorpointer();
	for (itr2->getFirst(); !itr2->end(); itr2->next())
	{
		std::cout << itr2->current()->get();
	}

}

int main() {

	iterator1();
	iterator2();

	return 0;

	std::cin.get();
}