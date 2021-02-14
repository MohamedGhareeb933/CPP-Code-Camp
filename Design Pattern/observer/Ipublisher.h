#pragma once

#include "Isubscriber.h"

class Ipublisher
{
public:
    virtual void attach(Isubscriber *) = 0;
    virtual void detach(Isubscriber *) = 0;
    virtual void notify() = 0;
};

