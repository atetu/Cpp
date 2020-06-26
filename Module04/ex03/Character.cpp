#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string const &name) : _name(name), _nb_materia(0)
{
	for (int i = 0; i < 4; i++)
		_array[i] = 0;
}


Character::~Character()
{
	if (_nb_materia != 0)
	{
		for (int i = 0; i < _nb_materia; i++)
			delete _array[i];	
	}
}

Character::Character(Character const &to_copy)
{
	_name = to_copy._name;
	_nb_materia = to_copy._nb_materia;
	for (int i = 0; i < 4; i++)
	{
		if (to_copy._array[i] != 0)
			_array[i] = to_copy._array[i]->clone();
	}
}

Character &Character::operator=(Character const &to_copy)
{
	_name = to_copy._name;
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

const std::string &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria *m)
{
	if (_nb_materia >= 4 || m == 0)
		return;
	_array[_nb_materia] = m;
	_nb_materia++;
}

void Character::unequip(int index)
{
	if (_nb_materia != 0 && index >= 0 && index < _nb_materia)
		_array[index] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (_nb_materia != 0 && idx >= 0 && idx < _nb_materia)
		_array[idx]->use(target);
	else
		std::cout << "no corresponding Materia for index\n";
}
