#pragma once

#include <vector>
#include <iterator>

template<typename T, typename U>
class Iterator {
public:

	typedef typename std::vector<T>::iterator listIterator;

	Iterator(U*);

	void getFirst();
	void next();
	bool end();
	

	typename std::vector<T>::iterator current();

private:

	listIterator itr;
	U* theContainer;
};


template<typename T, typename U>
Iterator<T, U>::Iterator(U* Conatiner) :theContainer(Conatiner)
{
	itr = theContainer->dataList.begin();
}

template<typename T, typename U>
void Iterator<T, U>::getFirst() {
	itr = theContainer->dataList.begin();
}

template<typename T, typename U>
void Iterator<T, U>::next() {
	itr++;
}

template<typename T, typename U>
bool Iterator<T, U>::end()
{
	return (itr == theContainer->dataList.end());
}

template<typename T, typename U>
typename std::vector<T>::iterator Iterator<T, U>::current()

{
	return itr;
}
