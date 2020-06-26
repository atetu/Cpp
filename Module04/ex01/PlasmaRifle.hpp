#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		~PlasmaRifle();
		PlasmaRifle(PlasmaRifle const &to_copy);
		PlasmaRifle &operator=(PlasmaRifle const &to_copy);
		void attack() const;

	private:
};
#endif
