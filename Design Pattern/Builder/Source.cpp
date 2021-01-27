#include <iostream>
#include <string>
#include <vector>
#include <iterator>


class Product1 {
public:
	std::vector<std::string> _product;

	void getProduct() 
	{
		for (int i = 0; i < _product.size(); i++)
		{
			std::cout << _product[i] << " ";
		}
		std::cout << std::endl;
	}
};

class Builder {
public:
	virtual void ProduceA() const = 0;
	virtual void ProduceB() const = 0;
	virtual void ProduceC() const = 0;

};

class ConcreteBuilder1 : public Builder
{
public:
	Product1* P1;

	ConcreteBuilder1() 
	{
		reset();
	}

	~ConcreteBuilder1() 
	{
		delete P1;
	}

	void reset() 
	{
		P1 = new Product1();
	}

	void ProduceA() const 
	{
		P1->_product.push_back("ProductA");
	}

	void ProduceB() const 
	{
		P1->_product.push_back("ProductB");
	}
	void ProduceC() const 
	{
		P1->_product.push_back("ProductC");
	}

	Product1* GetProduct() 
	{
		Product1* FinalProduct = P1;
		return FinalProduct;
	}

};

class Manager {
public:
	Builder* B;

	void SetBuilder(Builder* B) 
	{
		this->B = B;
	}

	void BuildMinFeature() 
	{
		B->ProduceA();
	}

	void BuildFullFeature() 
	{
		B->ProduceA();
		B->ProduceB();
		B->ProduceC();
	}

};

void ClientManager(Manager &m) 
{
	ConcreteBuilder1* Builder = new ConcreteBuilder1();
	m.SetBuilder(Builder);

	m.BuildFullFeature();

	Product1* P = Builder->GetProduct();
	P->getProduct();
}

int main() 
{
	Manager M;
	ClientManager(M);

	std::cin.get();
}
