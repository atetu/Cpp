/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 19:38:57 by user42            #+#    #+#             */
/*   Updated: 2020/09/18 19:38:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"


SuperTrap::SuperTrap() : 
	ClapTrap(100, 100, 120, 120, 1, "no name", 60, 20, 5),
	FragTrap(), NinjaTrap()
	
{
	std::cout << "SuperTrap " << name << " pour vous servir.\n";
}

SuperTrap::SuperTrap(std::string n) :
	ClapTrap(100, 100, 120, 120, 1, n, 60, 20, 5),
	FragTrap(), 
	NinjaTrap()
{
	
}

SuperTrap::~SuperTrap()
{
	std::cout << name << " : \"C'est reeegle!\"\n";
}

SuperTrap::SuperTrap(SuperTrap const &to_copy)
{
	std::cout << "Copy constructor called\n";
	operator=(to_copy);
	//*this = to_copy;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &to_copy)
{
	if (this != &to_copy)
	{
		ClapTrap::operator=(to_copy);
	}
	return *this;
}

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}

void SuperTrap::get_hit_points(void)
{
	std::cout << "SuperTrap a " << this->hit_points << " \"hit points\"." << std::endl;
}

void SuperTrap::get_max_hit_points(void)
{
	std::cout << "SuperTrap a " << this->max_hit_points << " \"max hit points\"." << std::endl;
}

void SuperTrap::get_energy_points(void)
{
	std::cout << "SuperTrap a " << this->energy_points << " \"energy points\"." <<  std::endl;
}

void SuperTrap::get_max_energy_points(void)
{
	std::cout << "SuperTrap a " << this->max_energy_points << " \"max energy points\"." << std::endl;
}

void SuperTrap::get_level(void)
{
	std::cout << "SuperTrap est niveau " << this->level << "." << std::endl;
}

void SuperTrap::get_melee_attack_damage_points(void)
{
	std::cout << "SuperTrap a " << this->melee_attack_damage << " \"melee attack damage points\"." << std::endl;
}

void SuperTrap::get_ranged_attack_damage_points(void)
{
	std::cout << "SuperTrap a " << this->ranged_attack_damage << " \"ranged attack damage points\"." << std::endl;
}

void SuperTrap::get_armor_damage_reduction_points(void)
{
	std::cout << "SuperTrap a " << this->armor_damage_reduction << " \"armor damage reduction points\"." << std::endl;
}
