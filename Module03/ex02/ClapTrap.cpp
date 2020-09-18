/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 10:55:27 by user42            #+#    #+#             */
/*   Updated: 2020/09/18 11:09:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
hit_points(100),
max_hit_points(100),
energy_points(50),
max_energy_points(50),
level(1),
name("no name"),
melee_attack_damage(20),
ranged_attack_damage(15),
armor_damage_reduction(3)
{
	std::cout << "ClapTrap " << this->name << " pour vous servir.\n";
}

ClapTrap::ClapTrap(int hp, int mhp, int ep, int mep, int l, std::string n, int mad, int rad, int adr) :
hit_points(hp),
max_hit_points(mhp),
energy_points(ep),
max_energy_points(mep),
level(l),
name(n),
melee_attack_damage(mad),
ranged_attack_damage(rad),
armor_damage_reduction(adr)
{
	std::cout << "ClapTrap " << this->name << " pour vous servir.\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " disparait.\n";
}

ClapTrap::ClapTrap(ClapTrap const &to_copy)
{
	std::cout << "Copy constructor called\n";
	*this = to_copy;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &to_copy)
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
	return (*this);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_points -= (amount - this->armor_damage_reduction);
	if (this->hit_points < 0)
		this->hit_points = 0;
	std::cout << this->name << " est blesse. Sa roue fait de l'électricité statique. ";
	std::cout << "Il subit " << amount << " points de degats.\n";
}

void ClapTrap::beRepaired(unsigned int amount)
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
