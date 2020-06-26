#ifndef MUGGLE_HPP
#define MUGGLE_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Muggle : public Victim
{
	public:
		Muggle(std::string n);
		~Muggle();
		Muggle(Muggle const &to_copy);
		Muggle &operator=(Muggle const &to_copy);
		void getPolymorphed(void) const;

	private:
		Muggle();
};
#endif
