#include "Cure.hpp"


Cure::Cure() : AMateria("cure")
{
}


Cure::~Cure()
{
}

Cure::Cure(Cure const &to_copy) : AMateria("cure")
{
	_xp = to_copy._xp;
}

Cure &Cure::operator=(Cure const &to_copy)
{
	_xp = to_copy._xp;
	return (*this);
}

Cure *Cure::clone(void) const
{
	Cure *copy;
	copy = new Cure(*this);
	return (copy);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
	AMateria::use(target);
}
