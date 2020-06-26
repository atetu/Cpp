#include "Muggle.hpp"

Muggle::Muggle()
{
}

Muggle::Muggle(std::string n) : Victim(n)
{
	std::cout << "Zoubidou!\n";
}

Muggle::~Muggle()
{
	std::cout << "argffff\n";
}

Muggle::Muggle(Muggle const &to_copy)
{
	std::cout << "Copy constructor called\n";
	*this=to_copy;
}

Muggle &Muggle::operator=(Muggle const &to_copy)
{
	if (this != &to_copy)
		Victim::operator=(to_copy);
	return *this;
}

void Muggle::getPolymorphed(void) const
{
	std::cout << name << " has been turned into a unicorn!\n";
}
