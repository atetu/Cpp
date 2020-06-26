#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(std::string n);
		~Peon();
		Peon(Peon const &to_copy);
		Peon &operator=(Peon const &to_copy);
		void getPolymorphed(void) const;

	private:
		Peon();
};
#endif
