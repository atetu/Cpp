#include "Human.hpp"

Human::Human() : brain(36000,12)
{
}

Human::~Human()
{
}

std::string Human::identify(void) const
{
	std::string address;
	address = brain.identify();
	return address;
}

const Brain &Human::getBrain(void) const
{
	return brain;
}
