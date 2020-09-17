/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 17:47:29 by user42            #+#    #+#             */
/*   Updated: 2020/09/17 17:47:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap killer("Killer");
	killer.rangedAttack("Troll");
	killer.meleeAttack("Bad_Guys");
	killer.vaulthunter_dot_exe("Une horde de moutons");
	killer.takeDamage(20);
	killer.takeDamage(10);
	killer.takeDamage(100);
	killer.beRepaired(10);
	killer.vaulthunter_dot_exe("Un groupe de sauterelles en goguette");
	killer.vaulthunter_dot_exe("Une troupe de zombies ambulants");
	killer.vaulthunter_dot_exe("Un essaim de chasseurs sachant chasser");
	killer.vaulthunter_dot_exe("Marvin");
	return (0);
}
