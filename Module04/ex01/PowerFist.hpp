#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist();
		~PowerFist();
		PowerFist(PowerFist const &to_copy);
		PowerFist &operator=(PowerFist const &to_copy);
		void attack() const;

	private:
};
#endif
