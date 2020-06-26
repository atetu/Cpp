#include "Victim.hpp"

Victim::Victim()
{
}

Victim::Victim(std::string n) : name(n)
{
	std::cout << "Some random victim called " << name << " just appeared!\n";
}

Victim::~Victim()
{
	std::cout << "Victim " << name << " died for no apparent reasons!\n";
}

Victim::Victim(Victim const &to_copy)
{
	std::cout << "Copy constructor called\n";
	operator=(to_copy);
}

Victim &Victim::operator=(Victim const &to_copy)
{
	if (this != &to_copy)
		name = to_copy.name;
	return *this;
}

void Victim::getPolymorphed(void) const
{
	std::cout << name << " has been turned into a cute little sheep!\n";
}

std::string Victim::getName(void) const
{
	return (name);
}

std::ostream &operator<<(std::ostream &out_flux, const Victim &victim)
{
	out_flux << "I'm " << victim.getName() << " and I like otters!\n";
	return out_flux;
}
