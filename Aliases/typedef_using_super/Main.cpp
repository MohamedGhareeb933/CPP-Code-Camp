// TODO, Code Some Ex: typedef, using, ::Super

#include <iostream>
#include <string>

class Base {
public:
	virtual void Fu() {
		std::cout << "Do something";
	};

};


class Derived : public Base {
public:
	typedef Base Super;
	virtual void Fu() {
		Super::Fu();
	}

};

int main()
{
	Derived DO;
	DO.Fu();

	std::cout << std::endl;		system("PAUSE");
}