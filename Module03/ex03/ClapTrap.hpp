#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <random>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string n);
		~ClapTrap();
		ClapTrap(ClapTrap const &to_copy);
		ClapTrap &operator=(ClapTrap const &to_copy);
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
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
