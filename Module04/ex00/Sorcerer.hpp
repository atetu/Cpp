#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer(std::string n, std::string t);
		~Sorcerer();
		Sorcerer(Sorcerer const &to_copy);
		Sorcerer &operator=(Sorcerer const &to_copy);
		std::string getName(void) const;
		std::string getTitle(void) const;
		void polymorph(Victim const &victim) const;
			
	private:
		Sorcerer();
		std::string name;
		std::string title;
};

std::ostream &operator<<(std::ostream &out_flux, const Sorcerer &sorcerer);
#endif
