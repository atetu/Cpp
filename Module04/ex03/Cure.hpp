#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class AMateria;

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(Cure const &to_copy);
		Cure &operator=(Cure const &to_copy);
		virtual Cure *clone() const;	
		virtual void use(ICharacter &target);
	private:
		unsigned int _xp;
		std::string _type;
};
#endif
