#pragma once

template<typename T>
class Data {

public:
	void add(T a);
	T get();

private:
	T dvar;
};


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