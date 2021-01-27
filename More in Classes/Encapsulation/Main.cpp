#include <iostream>
#include <string>

class Print {
private:
	std::string name;
public:
	Print(std::string n) {
		setName(n);
	}
	void setName(std::string x) {
		name = x;
	}
	std::string getName() {
		return name;
	}
};

int main() {
	Print PO("Mohamed");
	Print PO2("Sharppy");

	std::cout << PO.getName() << std::endl; 		
	std::cout << PO2.getName() << std::endl;

	std::cout << std::endl;	 system("PAUSE");
}
