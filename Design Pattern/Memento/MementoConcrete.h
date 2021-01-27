#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <ctime>
#include "Memento.h"

class MementoConcrete : public Memento
{
private:
	std::string _state;
	std::string _date;

public:
	MementoConcrete(std::string);
	
	std::string getName() const override;
	std::string state() const override;
	std::string date() const override;
	
};

