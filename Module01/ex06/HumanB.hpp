#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string n);
		~HumanB();
		void setWeapon(const Weapon &weapon);
		void attack(void);

	private:
		std::string name;
		const Weapon *weapon;
};
#endif
