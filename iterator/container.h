#pragma once

#include <vector>
#include "iterator.h"

template<typename T>
class Container {

	friend class Iterator<T, Container<T> >;

public:	
	Iterator<T, Container<T> >* Iteratorpointer();

	void add(T a);

private:
	std::vector<T> dataList;
};


template<typename T>
Iterator<T, Container<T>>* Container<T>::Iteratorpointer()
{
	return new Iterator<T, Container>(this);
}

template<typename T>
void Container<T>::add(T a)
{
	dataList.push_back(a);
}
