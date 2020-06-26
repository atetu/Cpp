#include "AMateria.hpp"

AMateria::AMateria() : _xp(0), _type(0)
{
}

AMateria::AMateria(std::string const &type) : _xp(0), _type(type)
{
}


AMateria::~AMateria()
{
}

AMateria::AMateria(AMateria const &to_copy)
{
	*this = to_copy;
}

AMateria &AMateria::operator=(AMateria const &to_copy)
{
	_xp = to_copy._xp;
	return (*this);
}

const std::string &AMateria::getType() const
{
	return (_type);
}

unsigned int AMateria::getXP() const
{
	return (_xp);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
}
