#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include <string>
#include <random>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string n);
		~NinjaTrap();
		NinjaTrap(NinjaTrap const &to_copy);
		NinjaTrap &operator=(NinjaTrap const &to_copy);
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void ninjaShoebox(ClapTrap &obj);
		void ninjaShoebox(FragTrap &obj);
		void ninjaShoebox(ScavTrap &obj);
		void ninjaShoebox(NinjaTrap &obj);
};
#endif
