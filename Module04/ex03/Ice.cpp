#include "Ice.hpp"


Ice::Ice() : AMateria("ice")
{
}


Ice::~Ice()
{
}

Ice::Ice(Ice const &to_copy) : AMateria("ice")
{
	_xp = to_copy._xp;
}

Ice &Ice::operator=(Ice const &to_copy)
{
	_xp = to_copy._xp;
	return (*this);
}

Ice *Ice::clone(void) const
{
	Ice *copy;
	copy = new Ice(*this);
	return (copy);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "\n";
	AMateria::use(target);
}
