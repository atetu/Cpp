#ifndef ASTEROID_HPP
#define ASTEROID_HPP

#include <iostream>
#include <string>
#include "IAsteroid.hpp" 

class StripMiner;
class DeepCoreMiner;

class Asteroid : public IAsteroid 
{
	public:
		Asteroid();
		virtual	~Asteroid();
		Asteroid(Asteroid const &to_copy);
		Asteroid &operator=(Asteroid const &to_copy);
		std::string beMined(DeepCoreMiner *deep) const;	
		std::string beMined(StripMiner *strip) const;	
		std::string getName() const;	
	private:
		std::string _name;
};
#endif
