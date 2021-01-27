#include <iostream>
#include <string>

class Implements
{
public:
	virtual std::string doSomething() const = 0;
};

class ConcImplementsA: public Implements 
{
public:
	 std::string doSomething() const {
		return "Concerete Implementation A is being Called ";
	}
};

class ConcImplementsB: public Implements 
{
public:
	std::string doSomething() const {
		return "Concerete Implementation B is being Called ";
	}
};

class Abstract 
{
protected:
	Implements *implement;
public:
	Abstract(Implements* imp):implement(imp) {
		this->implement = imp;
	}

	virtual std::string operation() {
		return "Abstract Class is calling: "  +  implement->doSomething() + "\n";	
	}

};

class ModAbstract: public Abstract
{
public:
	ModAbstract(Implements* imp): Abstract(imp) {}

	std::string operation() {

		return "special Abstract: " + implement->doSomething() + "\n";
	}
};

void Client(Abstract &abs) 
{
	std::cout << abs.operation();
}

void CallA() 
{
	Implements* imp = new ConcImplementsA();
	Abstract* abs = new Abstract(imp);
	Client(*abs);
}

void CallB() 
{
	Implements* imp2 = new ConcImplementsB();
	Abstract* abs2 = new ModAbstract(imp2);
	Client(*abs2);
}

int main() 
{
	CallA();
	CallB();

	std::cout << "\n\n"; system("pause");
	return 0;
}