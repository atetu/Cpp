/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 17:50:33 by user42            #+#    #+#             */
/*   Updated: 2020/09/17 18:45:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string n) :
hit_points(100),
max_hit_points(100),
energy_points(50),
max_energy_points(50),
level(1),
name(n),
melee_attack_damage(20),
ranged_attack_damage(15),
armor_damage_reduction(3)
{
	std::cout << "Séquence d'initialisation terminée.\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << " est finalement detruit." << std::endl;
	std::cout << "Admirez mon aura mortelle qui s'eteint\" gemit-il dans un dernier soupir.\n";
}

ScavTrap::ScavTrap(ScavTrap const &to_copy)
{
	std::cout << "Copy constructor called\n";
	*this = to_copy;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &to_copy)
{
	if (this != &to_copy)
	{
		this->hit_points = to_copy.hit_points;
		this->max_hit_points = to_copy.max_hit_points;
		this->energy_points = to_copy.energy_points;
		this->max_energy_points = to_copy.max_energy_points;
		this->level = to_copy.level;
		this->name = to_copy.name;
		this->melee_attack_damage = to_copy.melee_attack_damage;
		this->ranged_attack_damage = to_copy.ranged_attack_damage;
		this->armor_damage_reduction = to_copy.armor_damage_reduction;
	}
	return *this;
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

void ScavTrap::takeDamage(unsigned int amount)
{
	this->hit_points -= (amount - this->armor_damage_reduction);
	if (this->hit_points < 0)
		this->hit_points = 0;
	std::cout << this->name << " est blesse. Sa roue fait de l'électricité statique. ";
	std::cout << "Il subit " << amount << " points de degats.\n";
}


void ScavTrap::beRepaired(unsigned int amount)
{
	this->hit_points += amount;
	this->energy_points += amount;
	if (this->hit_points > this->max_hit_points)
		this->hit_points = this->max_hit_points;
	if (this->energy_points > this->max_energy_points)
		this->energy_points = this->max_energy_points;
	std::cout << this->name << " va en reparation." << std::endl;
	std::cout << "Hahaha, hahaha, je ressuscite\" s'exclame-t-il.\n";
	std::cout << this->name << " dispose desormais de " << this->hit_points;
	std::cout << " points de frappe et de " << this->energy_points << " points d'energie.\n";
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
