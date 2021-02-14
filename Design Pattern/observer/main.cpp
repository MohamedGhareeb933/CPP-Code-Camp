
#include"Ipublisher.h"
#include"publisherImple.h"
#include"Isubscriber.h"
#include"subscriberImple.h"


int main() 
{

    publisherImple* publisher = new publisherImple();
	subscriperImple* subscriber = new subscriperImple(publisher);

    publisher->createMessage("new iphone Device will be available in our store Nov.15");

    subscriber->printMessage();

	delete publisher;
	delete subscriber;

	std::cin.get();
}

