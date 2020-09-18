/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 10:54:59 by user42            #+#    #+#             */
/*   Updated: 2020/09/18 11:13:11 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	std::cout << "FragTrap class: \n";
	FragTrap killer("Killer");
	killer.rangedAttack("Troll");
	killer.meleeAttack("Bad_Guys");
	killer.vaulthunter_dot_exe("Une horde de moutons");
	killer.takeDamage(20);
	killer.takeDamage(10);
	killer.beRepaired(10);
	killer.vaulthunter_dot_exe("Un groupe de sauterelles en goguette");
	killer.vaulthunter_dot_exe("Une troupe de zombies ambulants");
	killer.vaulthunter_dot_exe("Un essaim de chasseurs sachant chasser");
	killer.vaulthunter_dot_exe("Marvin");
	std::cout << "\n\n";
	std::cout << "ScavTrap class: \n";
	ScavTrap trognon("Trognon");
	trognon.rangedAttack("Potiron");
	trognon.meleeAttack("une horde de mechants");
	trognon.takeDamage(20);
	trognon.beRepaired(10);
	trognon.challengeNewcomer("Astragon");
	trognon.challengeNewcomer("Patachon");
	trognon.challengeNewcomer("Zebulon");
	std::cout << "\n\n";
	std::cout << "ClapTrap class: \n";
	ClapTrap grincheux(60, 60, 40, 40, 3, "Grincheux", 30, 30, 10);
	grincheux.takeDamage(20);
	grincheux.beRepaired(10);
	return (0);
}
