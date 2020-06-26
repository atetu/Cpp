#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
}

Sorcerer::Sorcerer(std::string n, std::string t) : name(n), title(t)
{
	std::cout << name << ", " << title << ", is born!\n";
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!\n";
}

Sorcerer::Sorcerer(Sorcerer const &to_copy)
{
	std::cout << "Copy constructor called\n";
	operator=(to_copy);
}

Sorcerer &Sorcerer::operator=(Sorcerer const &to_copy)
{
	if (this != &to_copy)
	{
		name = to_copy.name;
		title = to_copy.title;
	}
	return *this;
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}


std::string Sorcerer::getName(void) const
{
	return (name);
}

std::string Sorcerer::getTitle(void) const
{
	return (title);
}

std::ostream &operator<<(std::ostream &out_flux, const Sorcerer &sorcerer)
{
	out_flux << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!\n";
	return out_flux;
}
