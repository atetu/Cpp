#ifndef DEEPCOREMINER_HPP
#define DEEPCOREMINER_HPP

#include <iostream>
#include <string>
#include "IMiningLaser.hpp" 

class IAsteroid;

class DeepCoreMiner : public IMiningLaser 
{
	public:
		DeepCoreMiner();
		virtual	~DeepCoreMiner();
		DeepCoreMiner(DeepCoreMiner const &to_copy);
		DeepCoreMiner &operator=(DeepCoreMiner const &to_copy);
		void mine(IAsteroid *asteroid);	
};
#endif
