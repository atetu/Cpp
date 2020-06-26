#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const &to_copy);
		MateriaSource &operator=(MateriaSource const &to_copy);
		void learnMateria(AMateria* m);
		AMateria *createMateria(std::string const &type);

	private:
		AMateria *_array[4];
		int _nb_materia;;
};
#endif
