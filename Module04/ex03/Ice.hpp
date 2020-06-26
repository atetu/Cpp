#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(std::string const &type);
		~Ice();
		Ice(Ice const &to_copy);
		Ice &operator=(Ice const &to_copy);
		virtual Ice *clone() const;	
		virtual void use(ICharacter &target);
	private:
		unsigned int _xp;
		std::string _type;
};
#endif
