/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 19:39:04 by user42            #+#    #+#             */
/*   Updated: 2020/09/18 19:39:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>
#include <string>
#include <random>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap();
		SuperTrap(std::string n);
		~SuperTrap();
		SuperTrap(SuperTrap const &to_copy);
		SuperTrap &operator=(SuperTrap const &to_copy);
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		
		void get_hit_points(void);
		void get_max_hit_points(void);
		void get_energy_points(void);
		void get_max_energy_points(void);
		void get_level(void);
		void get_melee_attack_damage_points(void);
		void get_ranged_attack_damage_points(void);
		void get_armor_damage_reduction_points(void);
};
#endif
