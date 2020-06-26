#ifndef IMININGLASER_HPP
#define IMININGLASER_HPP

#include <iostream>
#include <string>
#include "IAsteroid.hpp"

class IAsteroid;

class IMiningLaser
{
	public:
		virtual ~IMiningLaser() {};
		virtual void mine(IAsteroid* asteroid) = 0;
};
#endif
