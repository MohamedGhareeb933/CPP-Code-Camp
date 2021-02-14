
#include<iostream>
#include<string>

#include "subscriberImple.h"

subscriperImple::subscriperImple(Ipublisher* publisher) :publisher(publisher)
{
    std::cout << "iam subscriber constructor \n";
	subscribe();
}

subscriperImple::~subscriperImple()
{
    std::cout << "iam subscriber deconstructor \n";
}

void subscriperImple::update(std::string &message) 
{
    this->message = message;
}

void subscriperImple::subscribe()
{
    publisher->attach(this);
}

void subscriperImple::unsubscribe()
{
    publisher->detach(this);
}

void subscriperImple::printMessage() {
    std::cout << this->message << std::endl;
}

