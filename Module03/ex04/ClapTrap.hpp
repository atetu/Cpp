/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 10:55:21 by user42            #+#    #+#             */
/*   Updated: 2020/09/18 12:01:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <random>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(int hp, int mhp, int ep, int mep, int l, std::string n, int mad, int rad, int adr);
		~ClapTrap();
		ClapTrap(ClapTrap const &to_copy);
		ClapTrap &operator=(ClapTrap const &to_copy);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string get_name(void);

	protected:
		int hit_points;
		int max_hit_points;
		int energy_points;
		int max_energy_points;
		int level;
		std::string name;
		int melee_attack_damage;
		int ranged_attack_damage;
		int armor_damage_reduction;
};
#endif
