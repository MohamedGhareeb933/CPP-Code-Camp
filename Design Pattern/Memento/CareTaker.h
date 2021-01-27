#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "Memento.h"
#include "MementoConcrete.h"
#include "Originator .h"

class CareTaker {

private:
	std::vector <Memento *> _Memento;

	Originator *_Originator;

public:
	CareTaker(Originator *);

	void push();
	void pop();
	void showHistory() const;

};