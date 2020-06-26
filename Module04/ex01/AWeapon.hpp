#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon
{
	public:
		AWeapon(std::string const &name, int apcost, int damage);
		virtual ~AWeapon();
		AWeapon(AWeapon const &to_copy);
		AWeapon &operator=(AWeapon const &to_copy);
		std::string getName(void) const;
		int getAPCost(void) const;	
		int getDamage(void) const;
		virtual void attack() const = 0; // pure virtual method

	protected:
		AWeapon();
		std::string _name;
		int _apcost;
		int _damage;
};
#endif
