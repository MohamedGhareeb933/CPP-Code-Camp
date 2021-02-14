#pragma once

#include <string>
#include <iostream>

#include "Isubscriber.h"
#include "Ipublisher.h"

class subscriperImple :public Isubscriber
{

private:
    std::string message;
    Ipublisher* publisher;

public:
    subscriperImple(Ipublisher* publisher);
    ~subscriperImple();

    virtual void update(std::string&) override;

    void subscribe();
    void unsubscribe();

    void printMessage();
};
