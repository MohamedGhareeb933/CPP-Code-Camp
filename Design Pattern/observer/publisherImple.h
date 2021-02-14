#pragma once

#include <string>   
#include <list>
#include <iterator>
#include <iostream>

#include "Isubscriber.h"
#include "Ipublisher.h"

class publisherImple :public Ipublisher
{
private:
    std::string message;
    std::list<Isubscriber *> subscriberList;
public:
   publisherImple();
   ~publisherImple();

    virtual void attach(Isubscriber *) override;
    virtual void detach(Isubscriber *) override;
    virtual void notify() override;

    void createMessage(std::string);
};

