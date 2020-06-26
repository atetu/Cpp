#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("power Fist", 8, 50)
{
}

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist(PowerFist const &to_copy)
{
	std::cout << "Copy constructor called\n";
	operator=(to_copy);
}

PowerFist &PowerFist::operator=(PowerFist const &to_copy)
{
	if (this != &to_copy)
		AWeapon::operator=(to_copy);
	return *this;
}

void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM ! *\n";
}
