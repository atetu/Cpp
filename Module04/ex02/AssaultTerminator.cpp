#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *\n";
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back ...\n";
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &to_copy)
{
	*this = to_copy;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &to_copy)
{
	(void) to_copy;
	return (*this);
}

ISpaceMarine *AssaultTerminator::clone(void) const
{
	ISpaceMarine *copy;
	copy = new AssaultTerminator(*this);
	return (copy);
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. Purify it !\n";
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *\n";
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *\n";
}
