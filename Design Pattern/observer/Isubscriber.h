#pragma once

#include<string>

class Isubscriber
{
public:
virtual void update(std::string&) = 0;
};

