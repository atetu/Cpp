/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 19:20:30 by user42            #+#    #+#             */
/*   Updated: 2020/09/21 19:20:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	*this = to_copy;
}

Character &Character::operator=(Character const &to_copy)
{
	if (this != &to_copy)
	{
		this->_ap = to_copy._ap;
		this->_name = to_copy._name;
		this->_weapon = to_copy._weapon;
	}
	return (*this);
}

std::string Character::getName(void) const
{
	return (this->_name);
}

int Character::getAP(void) const
{
	return (this->_ap);
}

std::string Character::getWeapon(void) const
{
	return (this->_weapon->getName());
}

AWeapon *Character::getWeaponAdd(void) const
{
	return (this->_weapon);
}
void Character::recoverAP()
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	if (this->_weapon == 0)
	{
		std::cout << "No equiped weapon to carry on the attack.\n";
		return;
	}
	if (this->_ap < this->_weapon->getAPCost())
	{
		std::cout << "Not enough AP to attack.\n";
		return;
	}
	this->_ap -= this->_weapon->getAPCost();
	std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << ".\n";
	this->_weapon->attack();	
	enemy->takeDamage(this->_weapon->getDamage());
	if (enemy->getHP() <= 0)
	{
		delete enemy;
		enemy = NULL;
	}
}

std::ostream &operator<<(std::ostream &out, const Character &character)
{
	if (character.getWeaponAdd() == 0)
		out << character.getName() << " has " << character.getAP() << " AP and is unarmed.\n";
	else
		out << character.getName() << " has " << character.getAP() << " AP and carries a " << character.getWeapon() << ".\n";
	return (out);
}
