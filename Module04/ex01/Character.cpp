#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string const &name) : _ap(40), _name(name), _weapon(0)
{
}

Character::~Character()
{
}

Character::Character(Character const &to_copy)
{
	std::cout << "Copy constructor called\n";
	operator=(to_copy);
}

Character &Character::operator=(Character const &to_copy)
{
	if (this != &to_copy)
	{
		_ap = to_copy._ap;
		_name = to_copy._name;
		_weapon = to_copy._weapon;
	}
	return *this;
}

std::string Character::getName(void) const
{
	return (_name);
}

int Character::getAP(void) const
{
	return (_ap);
}

std::string Character::getWeapon(void) const
{
	return (_weapon->getName());
}

AWeapon *Character::getWeaponAdd(void) const
{
	return (_weapon);
}
void Character::recoverAP()
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	if (_ap < _weapon->getAPCost())
	{
		std::cout << "Not enough AP to attack.\n";
		return;
	}
	if (_weapon == 0)
		return;
	_ap -= _weapon->getAPCost();
	std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << ".\n";
	_weapon->attack();	
	enemy->takeDamage(_weapon->getDamage());
	if (enemy->getHP() == 0)
		delete enemy;

}

std::ostream &operator<<(std::ostream &out, const Character &character)
{
	if (character.getWeaponAdd() == 0)
		out << character.getName() << " has " << character.getAP() << " AP and is unarmed.\n";
	else
		out << character.getName() << " has " << character.getAP() << " AP and carries a " << character.getWeapon() << ".\n";
	return out;
}
