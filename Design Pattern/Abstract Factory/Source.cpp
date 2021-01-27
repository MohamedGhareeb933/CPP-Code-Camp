#include <iostream>
#include <string>

class AbstractProductA
{
public:
	virtual std::string returnProductA() const = 0;
};

class ConcreteProductA1 :public AbstractProductA
{
public:
	std::string returnProductA() const {
		return "Result of Prodcut A1";
	}
};

class ConcreteProductA2 :public AbstractProductA
{
public:
	std::string returnProductA() const {
		return "result of product A2";
	}
};

class AbstractProductB
{
public:
	virtual std::string returnProductB() const = 0;
	virtual std::string doAdditional(const AbstractProductA &callobrate) const = 0;
};

class ConcreteProductB1 :public AbstractProductB
{
public:
	std::string returnProductB() const {
		return "result of product B1";
	}

	std::string doAdditional(const AbstractProductA &callobrate) const {
		std::string result = callobrate.returnProductA();
		return returnProductB() + " Callobrating with " + result;
	}
};

class ConcreteProductB2 :public AbstractProductB
{
public:
	std::string returnProductB() const {
		return "result of product B2";
	}

	std::string doAdditional(const AbstractProductA &callobrate) const {
		std::string result = callobrate.returnProductA();
		return returnProductB() + " Callobrating with  " + result;
	}
};

class AbstractFactory 
{
public:
	virtual AbstractProductA* ProductAObject() const = 0;
	virtual AbstractProductB* ProductBObject() const = 0;
};


class ConcreteFactory1 :public AbstractFactory
{
public:
	AbstractProductA* ProductAObject() const {
		return new ConcreteProductA1();
	}

	AbstractProductB* ProductBObject() const {
		return new ConcreteProductB1();
	}
};

class ConcreteFactory2 : public AbstractFactory
{
public :
	AbstractProductA* ProductAObject() const {
		return new ConcreteProductA2();
	}
	AbstractProductB* ProductBObject() const {
		return new ConcreteProductB2();
	}
};

void Client(AbstractFactory &Factory) 
{
	 AbstractProductA* ProductA = Factory.ProductAObject();
	 AbstractProductB* ProductB = Factory.ProductBObject();

	 std::cout << ProductA->returnProductA() << std::endl;
	 std::cout << ProductB->doAdditional(*ProductA) << std::endl;
}


int main() {
	AbstractFactory *Factory1 = new ConcreteFactory1();
	Client(*Factory1);

	std::cout << "\n\n"; system("pause");
	return 0;
}