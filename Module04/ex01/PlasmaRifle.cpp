#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &to_copy)
{
	std::cout << "Copy constructor called\n";
	operator=(to_copy);
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &to_copy)
{
	if (this != &to_copy)
		AWeapon::operator=(to_copy);
	return *this;
}

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *\n";
}
