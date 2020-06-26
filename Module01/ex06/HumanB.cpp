#include "HumanB.hpp"

HumanB::HumanB(std::string n) : name(n), weapon(0)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(const Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack(void)
{
	std::string type;
	type = weapon->getType();
	std::cout << name << " attacks with his " << type << ".\n";
}
