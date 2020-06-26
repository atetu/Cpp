#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	public:
		Character(std::string const &name);
		~Character();
		Character(Character const &to_copy);
		Character &operator=(Character const &to_copy);
		void recoverAP(void);	
		void equip(AWeapon *weapon);	
		void attack(Enemy *enemy);	
		std::string getName(void) const;
		int getAP(void) const;
		std::string getWeapon(void) const;
		AWeapon *getWeaponAdd(void) const;

	protected:
		Character();
		int _ap;
		std::string _name;
		AWeapon *_weapon;
};

std::ostream &operator<<(std::ostream &out, const Character &character);
#endif
