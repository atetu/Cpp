#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <random>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string n);
		~ScavTrap();
		ScavTrap(ScavTrap const &to_copy);
		ScavTrap &operator=(ScavTrap const &to_copy);
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void challengeNewcomer(std::string const &target);
		void reverse(std::string const &newcomer);
		void riddle(std::string const &newcomer);
		void story(std::string const &newcomer);
};
typedef void(ScavTrap::*challenge) (std::string const &newcomer);
#endif
