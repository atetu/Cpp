#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w) : name(n), weapon(w)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
	std::string type;
	type = weapon.getType();
	std::cout << name << " attacks with his " << type << ".\n";
}
