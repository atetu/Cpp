#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "Brain.hpp"

class Human
{
	public:
		Human();
		~Human();
		std::string identify(void) const;
		//const Brain since const variable
		const Brain &getBrain(void) const;
	
	private:
		const Brain brain;
};
#endif
