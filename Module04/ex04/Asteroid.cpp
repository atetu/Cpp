#include "Asteroid.hpp"

Asteroid::Asteroid() : _name("Asteroid") 
{
}

Asteroid::~Asteroid()
{
}

Asteroid::Asteroid(Asteroid const &to_copy)
{
	*this = to_copy;
}

Asteroid &Asteroid::operator=(Asteroid const &to_copy)
{
	return (*this);
}

std::string Asteroid::beMined(DeepCoreMiner *deep) const
{
	return ("Dragonite");
}

std::string Asteroid::beMined(StripMiner *strip) const
{
	return ("Flavium");
}

std::string Asteroid::getName() const
{
	return (_name);
}
