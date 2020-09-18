/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 19:37:35 by user42            #+#    #+#             */
/*   Updated: 2020/09/18 19:37:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : : ClapTrap(60, 60, 120, 120, 1, "no name", 60, 5, 0)
{
	std::cout << "NinjaTrap " << this->name << " pret.\n";
}

NinjaTrap::NinjaTrap(std::string n) : ClapTrap(60, 60, 120, 120, 1, n, 60, 5, 0)
{
	std::cout << "NinjaTrap " << this->name << " pret.\n";
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjTrap "<< this->name << " : \"Tchitt, boum.\"\n";
}

NinjaTrap::NinjaTrap(NinjaTrap const &to_copy)
{
	std::cout << "Copy constructor called\n";
	operator=(to_copy);
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &to_copy)
{
	if (this != &to_copy)
		ClapTrap::operator=(to_copy);
	return (*this);
}

void NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "NinjaTrap " << this->name << " attaque " << target << " a distance, causant "<< this->ranged_attack_damage << " points de degats! Quel magnifique tir!\n";
}

void NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "NinjaTrap " << this->name << " attaque " << target << " au corps a corps causant "<< this->melee_attack_damage << " points de degats! Le tonnerre va frapper\n";
}

void NinjaTrap::ninjaShoebox(ClapTrap &obj)
{
	std::cout << "Lancer de chaussures pestilentielles par NinjaTrap " << this->name << " sur ClapTrap " << obj.get_name() << ".\n";
	obj.takeDamage(this->ranged_attack_damage);
}

void NinjaTrap::ninjaShoebox(FragTrap &obj)
{
	std::cout << "Attaque pieds nus par NinjaTrap " << this->name << " sur FragTrap " << obj.get_name() << ".\n";
	obj.takeDamage(this->melee_attack_damage);
}

void NinjaTrap::ninjaShoebox(ScavTrap &obj)
{
	std::cout << "Vol de chaussures par NinjaTrap " << this->name << " sur ScavTrap " << obj.get_name() << ".\n";
	obj.takeDamage(this->ranged_attack_damage);
}

void NinjaTrap::ninjaShoebox(NinjaTrap &obj)
{
	std::cout << "Attaque sur la pointe des pieds par NinjaTrap " << this->name << " sur NinjaTrap " << obj.get_name() << ".\n";
	obj.takeDamage(this->ranged_attack_damage);
}
