#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	public:
		Weapon(std::string const &type);
		~Weapon();
		void setType(std::string const &type);
		const std::string &getType(void) const;

	private:
		std::string type;
};
#endif
