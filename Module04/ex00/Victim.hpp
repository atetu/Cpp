#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
	public:
		Victim(std::string n);
		~Victim();
		Victim(Victim const &to_copy);
		Victim &operator=(Victim const &to_copy);
		std::string getName(void) const;
		virtual void getPolymorphed(void) const;

	protected:
		Victim();
		std::string name;
};

std::ostream &operator<<(std::ostream &out_flux, const Victim &victim);
#endif
