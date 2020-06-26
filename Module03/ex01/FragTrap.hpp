#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <random>

class FragTrap
{
	public:
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
#endif
