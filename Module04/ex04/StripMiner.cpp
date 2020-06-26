#include "StripMiner.hpp"

StripMiner::StripMiner() 
{
}

StripMiner::~StripMiner()
{
}

StripMiner::StripMiner(StripMiner const &to_copy)
{
	*this = to_copy;
}

StripMiner &StripMiner::operator=(StripMiner const &to_copy)
{
	return (*this);
}

void StripMiner::mine(IAsteroid *asteroid)
{
	std::cout << "* strip mining ... got ";
	std::cout << asteroid->beMined(this) << std::endl;
}
