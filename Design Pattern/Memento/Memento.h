#pragma once
#include <iostream>

class Memento {  // interface.

public:
	virtual std::string getName() const = 0;
	virtual std::string date() const = 0;
	virtual std::string state() const = 0;

};
