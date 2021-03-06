/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 17:47:45 by user42            #+#    #+#             */
/*   Updated: 2020/09/18 19:36:14 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <random>

class FragTrap
{
	public:
		FragTrap();
		FragTrap(std::string n);
		~FragTrap();
		FragTrap(FragTrap const &to_copy);
		FragTrap &operator=(FragTrap const &to_copy);
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const &target);
		void roi_de_la_savate(std::string const &target);
		void grenade_de_la_colere(std::string const &target);
		void le_bonheur_des_flingues(std::string const &target);
		void douleur_douloureuse(std::string const &target);
		void triple_debit(std::string const &target);

	private:
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
typedef void(FragTrap::* attack) (std::string const &target);
#endif
