#include <iostream>
#include <string>

class client {
public:
	virtual std::string requestService() {
		return "client is asking for service";
	}
};

class service {
public:
	std::string linkadderss() {
		return "service has been given to client ";
	}
};

class adabter : public client {
private:
	service* serv;
public: 
	adabter(service* ser) {
		serv = ser;
	}

	std::string requestService() {
		std::string converter = this->serv->linkadderss();
		return converter;
	}
};

void clientservice(client* c) {
	std::cout << c->requestService() << std::endl;
}

int main() {
	client* c = new client();
	clientservice(c);

	service *s = new service();

	adabter *d = new adabter(s);
	clientservice(d);

	std::cout << "\n\n";	system("pause");
	return 0;
}
