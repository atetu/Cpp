#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything !\n";
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ...\n";
}

SuperMutant::SuperMutant(SuperMutant const &to_copy)
{
	std::cout << "Copy constructor called\n";
	operator=(to_copy);
}

SuperMutant &SuperMutant::operator=(SuperMutant const &to_copy)
{
	if (this != &to_copy)
		Enemy::operator=(to_copy);
	return *this;
}

void SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	if (damage < 0)
		damage = 0;
	_hp -= damage;
	if (_hp < 0)
		_hp -= 0;
}
