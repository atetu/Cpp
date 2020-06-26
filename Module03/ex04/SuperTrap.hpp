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
};
#endif
