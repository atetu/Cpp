#include "Weapon.hpp"

Weapon::Weapon(std::string const &type) : type(type)
{
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string const &type)
{
	this->type = type;
}

const std::string &Weapon::getType(void) const
{
	return type;
}


