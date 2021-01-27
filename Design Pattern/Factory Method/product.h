#pragma once
#include <iostream>
#include <string>

class product 
{
public:
	virtual std::string operation() const = 0;
};

class concreteProduct1 : public product 
{
public:
	std::string operation() const;
};