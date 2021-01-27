#pragma once

#include <iostream>
#include <string>
#include "MementoConcrete.h"

class Originator {

private :
	std::string _state;
	std::string generateRandomString(int len = 10);

public:
	Originator(std::string);
	void doSomething();
	Memento *save();
	void restore(Memento*);
};