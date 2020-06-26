#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner() 
{
}

DeepCoreMiner::~DeepCoreMiner()
{
}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const &to_copy)
{
	*this = to_copy;
}

DeepCoreMiner &DeepCoreMiner::operator=(DeepCoreMiner const &to_copy)
{
	return (*this);
}

void DeepCoreMiner::mine(IAsteroid *asteroid)
{
	std::cout << "* mining deep ... got ";
	std::cout << asteroid->beMined(this) << std::endl;
}
