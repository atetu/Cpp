#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _nb_materia(0)
{
	for (int i = 0; i < 4; i++)
		_array[i] = 0;
}

MateriaSource::~MateriaSource()
{
	if (_nb_materia != 0)
	{
		for (int i = 0; i < _nb_materia; i++)
			delete _array[i];	
	}
}

MateriaSource::MateriaSource(MateriaSource const &to_copy)
{
	_nb_materia = to_copy._nb_materia;
	for (int i = 0; i < 4; i++)
	{
		if (to_copy._array[i] != 0)
			_array[i] = to_copy._array[i]->clone();
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &to_copy)
{
	_nb_materia = to_copy._nb_materia;
	for (int i = 0; i < 4; i++)
	{
		if (_array[i] != 0)
			delete _array[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (to_copy._array[i] != 0)
			_array[i] = to_copy._array[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (_nb_materia > 4)
		return;
	_array[_nb_materia] = m;
	_nb_materia++;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < _nb_materia; i++)
		if (_array[i]->getType().compare(type) == 0)
			return (_array[i]->clone());
	return (0);
}
