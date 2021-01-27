/* Poly: many - Morph: forms
Polymorphism Alow Functions To do the Same thing with Diffrent ways 
EX- Ninja&Monster are Enemies but their Attack is Diffrent
*/

#include <iostream>

class player {
protected : // Protected Access Specifier will allow Drived Classes inhirit these Values inside.
	 double armor = 100; // armor and health Will be used in NInja and Monster Classes.
	 double health = 100; // Check the Argument - Special And Normal Attack .
};

class enemy {
public:
	virtual double Normalattack() const = 0;   //Pure Virtual Function - Dont have CurlyBraces{} -  = 0 After Prantathese. 
	virtual double Specialattack() const = 0;  // this mean any Class Inherit from this Class must Have Normal And Special Attack Function.
};

class ninja: public enemy, public player { // Ninja Class inherit from Both Classes Enemy and PLayer.
private:
	double armorPent;
	double posionSowrd;
public:
	ninja(double PENT, double POIS) : armorPent(PENT), posionSowrd(POIS) { } // public Constructor - Member initializer.
	virtual double Normalattack() const { return armorPent * 90 / armor; } // Virtual Function - the Compiler Will Check
	virtual double Specialattack() const { return posionSowrd * 70 / health; } // Every Virtual Function Before Start . and It must Exist or Error Will be Outputed.
};

class monster: public enemy, public player  { // Monster Class Inherit from Both Classes Enemy and Player.
private:
	double heavyAttack;
	double AOEattack;
public:
	monster(double HEAVY, double AOE) : heavyAttack(HEAVY), AOEattack(AOE) { } // public Constructor - Member initializer.
	virtual double Normalattack() const { return heavyAttack * 80 / armor; } // Virtual Function - The Compiler Will Check 
	virtual double Specialattack() const { return AOEattack * 50 / health; } // Every Virtual Function Before Start. and it must Exist or Error Will be Outputed.
};

int main() {
	ninja N(100, 100); // Ninja Object. Pass Values to Constructor Argument.
	monster M(100, 100); // Monster Object - Pass Values to Constructor Argument.

	enemy *NP = &N; //Abstract Class - Calliing Ninja Functions From Base Pointer.
	std::cout << "Ninja Attack \n-Armor Penetration Attack: Armor is now Reduced (" << NP->Normalattack() << ")" << std::endl; // Calling Normal Through Enemy Pointer.
	std::cout << "Ninja Attack \n-Poision Sowrd Attack: Health is now Reduced (" << NP->Specialattack() << ")" << std::endl;   // Calling Special Through Enemy Pointer.

	enemy *MP = &M; //Abstract Class - Calliing Monster Functions From Base Pointer.
	std::cout << "Monster Attack \n-Heavy Attack: Armor is now Reduced (" << MP->Normalattack() << ")" << std::endl; // Calling Normal through Enemy Pointer.
	std::cout << "Monster Attack \n-AOE Attack: Health is now Reduced (" << MP->Specialattack() << ")" << std::endl; // Calling Special Through Enemy Pointer.
	
	std::cout << std::endl; system("pause"); // Press any Key to Continue.
}
