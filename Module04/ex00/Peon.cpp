#include "Peon.hpp"

Peon::Peon()
{
}

Peon::Peon(std::string n) : Victim(n)
{
	std::cout << "Zog zog.\n";
}

Peon::~Peon()
{
	std::cout << "Bleuark\n";
}

Peon::Peon(Peon const &to_copy)
{
	std::cout << "Copy constructor called\n";
	*this=to_copy;
}

Peon &Peon::operator=(Peon const &to_copy)
{
	if (this != &to_copy)
		Victim::operator=(to_copy);
	return *this;
}

void Peon::getPolymorphed(void) const
{
	std::cout << name << " has been turned into a pink pony!\n";
}
