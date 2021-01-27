#pragma once

#include <string>
#include "product.h"

class creator
{
public:
	virtual product *productPointer() const = 0;

	std::string doSomething();
};


class concreteCreator1 : public creator
{
public:
	product* productPointer() const;
};