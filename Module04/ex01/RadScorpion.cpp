#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *\n";
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *\n";
}

RadScorpion::RadScorpion(RadScorpion const &to_copy)
{
	std::cout << "Copy constructor called\n";
	operator=(to_copy);
}

RadScorpion &RadScorpion::operator=(RadScorpion const &to_copy)
{
	if (this != &to_copy)
		Enemy::operator=(to_copy);
	return *this;
}
