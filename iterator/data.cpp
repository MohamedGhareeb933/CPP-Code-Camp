#include "data.h"

template<typename T>
void Data<T>::add(T a)
{
	dvar = a;
}

template<typename T>
T Data<T>::get() 
{
	return dvar;
}