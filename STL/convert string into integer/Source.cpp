#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main() {

	double n1 = 0, n2 = 0;
	std::string cal = "";
	std::vector<std::string> vecCal;

	std::cout << "please Enter two Number EX(1+2) : \n";
	getline(std::cin, cal);

	std::stringstream ss(cal);
	std::string getSS = "";
	char Sperate = ' ';

	while (ss >> getSS)
	{
		vecCal.push_back(getSS);
	}

	n1 = std::stoi(vecCal[0]);
	n2 = std::stoi(vecCal[2]);
	std::string operation = vecCal[1];

	if (operation == "+")
	{
		printf("%.1f + %.1f = %.1f", n1, n2, (n1 + n2));
	}
	else if (operation == "-")
	{
		printf("%.1f - %.1f = %.1f", n1, n2, (n1 - n2));
	}
	else if (operation == "*")
	{
		printf("%.1f * %.1f = %.1f", n1, n2, (n1 * n2));
	}
	else if (operation == "/")
	{
		printf("%.1f * %.1f = %.1f", n1, n2, (n1 / n2));
	}
	else 
	{
		std::cout << "* / - + only Allowed for Calculation : \n";

	}

	
	std::cin.get();
}