#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <random>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string n);
		~FragTrap();
		FragTrap(FragTrap const &to_copy);
		FragTrap &operator=(FragTrap const &to_copy);
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void vaulthunter_dot_exe(std::string const &target);
		void roi_de_la_savate(std::string const &target);
		void grenade_de_la_colere(std::string const &target);
		void le_bonheur_des_flingues(std::string const &target);
		void douleur_douloureuse(std::string const &target);
		void triple_debit(std::string const &target);

	private:
};
#endif
