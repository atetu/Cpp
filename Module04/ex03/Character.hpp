#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	public:
		Character(std::string const &name);
		~Character();
		Character(Character const &to_copy);
		Character &operator=(Character const &to_copy);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		Character();
		std::string _name;
		AMateria *_array[4];
		int _nb_materia;;
};
#endif
