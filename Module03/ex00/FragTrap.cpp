/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 17:47:36 by user42            #+#    #+#             */
/*   Updated: 2020/09/17 17:47:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string n) :
hit_points(100), 
max_hit_points(100), 
energy_points(100), 
max_energy_points(100), 
level(1), 
name(n), 
melee_attack_damage(30), 
ranged_attack_damage(20), 
armor_damage_reduction(5)
{
	std::cout << "Bonjour, je suis votre nouveau robot multifonction.\n";
}

FragTrap::~FragTrap()
{
	std::cout << this->name << " est finalement detruit." << std::endl;
	std::cout << "Je suis mort, je suis mort. Oh mon dieu, je suis mort\n";
}

FragTrap::FragTrap(FragTrap const &to_copy)
{
	std::cout << "Copy constructor called\n";
	*this = to_copy;
}

FragTrap &FragTrap::operator=(FragTrap const &to_copy)
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

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G " << this->name << " attaque " << target;
	std::cout << " a distance, causant " << this->ranged_attack_damage ;
	std::cout << " points de degats! Ya des trucs qu'explosent, tout ça.\n";
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G " << this->name << " attaque " << target;
	std::cout << " au corps a corps causant " << this->melee_attack_damage;
	std::cout << " points de degats! Les dégâts rapprochés, ya que ça de vrai!\n";
}

void FragTrap::takeDamage(unsigned int amount)
{
	this->hit_points -= (amount - this->armor_damage_reduction);
	if (this->hit_points < 0)
		this->hit_points = 0;
	std::cout << this->name << " est blesse. Sa roue fait de l'électricité statique. ";
	std::cout << "Il subit " << amount << " points de degats.\n";
}

void FragTrap::beRepaired(unsigned int amount)
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

void FragTrap::roi_de_la_savate(std::string const &target)
{
	std::cout << "Attaque de " << target << " par la fameuse technique du 'Roi de la savate'.\n";
}

void FragTrap::grenade_de_la_colere(std::string const &target)
{
	std::cout << name << " lance sur " << target << " sa grenade de la colere.\n";
}

void FragTrap::le_bonheur_des_flingues(std::string const &target)
{
	std::cout << "Au bonheur des flingues! Salve de tirs de la part de ";
	std::cout << this->name << " sur " << target << ".\n";
}

void FragTrap::douleur_douloureuse(std::string const &target)
{
	std::cout << target << " subit la Douleur douloureuse lancee par " << this->name << ".\n";
}

void FragTrap::triple_debit(std::string const &target)
{
	std::cout << "Triple debit de tirs sur " << target << " de la part de " << this->name << ".\n";
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int index;

	attack type[] = {
		&FragTrap::roi_de_la_savate, 
		&FragTrap::grenade_de_la_colere, 
		&FragTrap::le_bonheur_des_flingues,
		&FragTrap::douleur_douloureuse, 
		&FragTrap::triple_debit};

	index = rand() % 5;

	this->energy_points -= 25;
	if (this->energy_points <= 0)
	{
		std::cout << "Tentative d'une nouvelle attaque super destructice contre ";
		std::cout << target << " mais plus assez d'energie pour la mener... ";
		std::cout << "Quelqu'un aurait-il un cafe noir comme mon ame en stock...?\n";
		this->energy_points = 0;
		return;
	}
	(this->*type[index])(target);
}
