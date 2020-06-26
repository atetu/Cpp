#include "AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost),_damage(damage)
{
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(AWeapon const &to_copy)
{
	std::cout << "Copy constructor called\n";
	operator=(to_copy);
}

AWeapon &AWeapon::operator=(AWeapon const &to_copy)
{
	if (this != &to_copy)
	{
		_name = to_copy._name;
		_apcost = to_copy._apcost;
		_damage = to_copy._damage;
	}
	return *this;
}

std::string AWeapon::getName(void) const
{
	return (_name);
}

int AWeapon::getAPCost(void) const
{
	return (_apcost);
}

int AWeapon::getDamage(void) const
{
	return (_damage);
}
