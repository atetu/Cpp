#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <iostream>
#include <string>
#include "Enemy.hpp" 

class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		~SuperMutant();
		SuperMutant(SuperMutant const &to_copy);
		SuperMutant &operator=(SuperMutant const &to_copy);
		void takeDamage(int);
};
#endif
