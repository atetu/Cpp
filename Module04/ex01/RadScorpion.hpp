#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include <iostream>
#include <string>
#include "Enemy.hpp" 

class RadScorpion : public Enemy
{
	public:
		RadScorpion();
		virtual ~RadScorpion();
		RadScorpion(RadScorpion const &to_copy);
		RadScorpion &operator=(RadScorpion const &to_copy);
};
#endif
