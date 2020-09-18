/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 10:55:38 by user42            #+#    #+#             */
/*   Updated: 2020/09/18 11:15:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(100, 100, 50, 50, 1, "no name", 20, 15, 3)
{
	std::cout << "ScavTrap " << this->name << " ici present.\n";
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(100, 100, 50, 50, 1, n, 20, 15, 3)
{
	std::cout << "ScavTrap " << this->name << " ici present.\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " : \"Admirez mon aura mortelle qui s'eteint!\"\n";
}

ScavTrap::ScavTrap(ScavTrap const &to_copy)
{
	std::cout << "Copy constructor called\n";
	*this = to_copy;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &to_copy)
{
	if (this != &to_copy)
		*this = to_copy;
	return (*this);
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "ScavTrap " << this->name << " attaque " << target;
	std::cout << " a distance, causant "<< this->ranged_attack_damage;
	std::cout << " points de degats! Mais bon... deux balles avec un grand verre d'eau et ca ira mieux pour ";
	std::cout << target << ".\n";
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "ScavTrap " << this->name << " attaque " << target;
	std::cout << " au corps a corps causant ";
	std::cout << this->melee_attack_damage << " points de degats! C'est le feu, c'est la mort!\n";
}

void ScavTrap::reverse(std::string const &newcomer)
{
	std::cout << "Hello " << newcomer << "! Pour passer il te faudra prononcer ";
	std::cout << "le nom de mon compagnon ici present cinq fois de suite le plus vite possible: ";
	std::cout << "Trap, Clap Trap, zero zero Trap.\n";
}

void ScavTrap::riddle(std::string const &newcomer)
{
	std::cout << "Hello " << newcomer << "! Pour passer il te faudra resoudre la devinette suivante: ";
	std::cout << "Si un car et une girafe se reproduisaient, ça ferait quoi?\n";
}

void ScavTrap::story(std::string const &newcomer)
{
	std::cout << "Hello " << newcomer;
	std::cout << "! Pour passer il te faudra me raconter une histoire de lasers et de gros flingues.\n";
}

void ScavTrap::challengeNewcomer(std::string const &newcomer)
{
	int index;

	challenge type[] = {
		&ScavTrap::reverse, 
		&ScavTrap::riddle,
		&ScavTrap::story};
	index = rand() % 3;
	(this->*type[index])(newcomer);
}
