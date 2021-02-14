#include "publisherImple.h"

publisherImple::publisherImple() {
    std::cout << "iam the publisher constructor \n";
}

publisherImple::~publisherImple() {
     std::cout << "iam the publisher deconstructor \n";
}

void publisherImple::attach(Isubscriber *subscriber) {

    subscriberList.push_back(subscriber);
}

void publisherImple::detach(Isubscriber *subscriber) {

    subscriberList.remove(subscriber);
}


void publisherImple::notify() {

    std::list<Isubscriber *>::iterator subIterator = subscriberList.begin();
    while (subIterator != subscriberList.end())
    {
        (*subIterator)->update(this->message);
        subIterator++;
    }
}
    
void publisherImple::createMessage(std::string message)
{
    this->message = message;
    notify();
}
