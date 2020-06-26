#ifndef STRIPMINER_HPP
#define STRIPMINER_HPP

#include <iostream>
#include <string>
#include "IMiningLaser.hpp"

class IAsteroid;

class StripMiner : public IMiningLaser 
{
	public:
		StripMiner();
		virtual	~StripMiner();
		StripMiner(StripMiner const &to_copy);
		StripMiner &operator=(StripMiner const &to_copy);
		void mine(IAsteroid *asteroid);	
	private:
};
#endif
