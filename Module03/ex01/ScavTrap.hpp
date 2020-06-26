#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <random>

class ScavTrap
{
	public:
		ScavTrap(std::string n);
		~ScavTrap();
		ScavTrap(ScavTrap const &to_copy);
		ScavTrap &operator=(ScavTrap const &to_copy);
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer(std::string const &target);
		void reverse(std::string const &newcomer);
		void riddle(std::string const &newcomer);
		void story(std::string const &newcomer);

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
#endif
