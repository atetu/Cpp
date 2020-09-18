/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 19:38:20 by user42            #+#    #+#             */
/*   Updated: 2020/09/18 19:38:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	NinjaTrap ninja("Ninja");
	ClapTrap handy(60, 60, 40, 40, 3, "Handy", 30, 30, 10);
	FragTrap killer("Killer");
	ScavTrap trognon ("Trognon");
	std::cout << "\n\n\n";
/*	ninja.rangedAttack("Troll");
	ninja.meleeAttack("Bad_Guys");
	ninja.takeDamage(20);
	ninja.ninjaShoebox(handy);
	ninja.ninjaShoebox(killer);
	ninja.ninjaShoebox(trognon);
	ninja.ninjaShoebox(mini_ninja);
*/	
	SuperTrap super_strong ("Super Strong");
	super_strong.get_hit_points();
	super_strong.get_max_hit_points();
	super_strong.get_energy_points();
	super_strong.get_max_energy_points();
	super_strong.get_level();
	super_strong.get_melee_attack_damage_points();
	super_strong.get_ranged_attack_damage_points();
	super_strong.get_armor_damage_reduction_points();
	std::cout << "\n\n";
	super_strong.meleeAttack("Un groupe de chenapans");
	super_strong.rangedAttack("Un syndicat de techniciens de surface");
	std::cout << "\n\n";
	super_strong.ninjaShoebox(ninja);
	super_strong.ninjaShoebox(handy);
	super_strong.ninjaShoebox(killer);
	super_strong.ninjaShoebox(trognon);
	std::cout << "\n\n";
	super_strong.vaulthunter_dot_exe("Bad Guy");
	super_strong.vaulthunter_dot_exe("Bad Guy");
	std::cout << "\n\n";
	super_strong.takeDamage(15);
	super_strong.takeDamage(20);
	super_strong.beRepaired(50);
	super_strong.takeDamage(42);
	super_strong.takeDamage(100);
	super_strong.takeDamage(100);
	super_strong.takeDamage(100);
	super_strong.beRepaired(125);
	return (0);
}
