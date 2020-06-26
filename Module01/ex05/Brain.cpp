#include "Brain.hpp"
#include <iostream> 

Brain::Brain(int neurons, int size) : m_neurons(neurons), m_size(size)
{
}

Brain::~Brain()
{
}

std::string Brain::identify(void) const
{
	//Stringstream: Stream class to operate on strings. Objects of this class use a string buffer that contains a sequence of characters. This sequence of characters can be accessed directly as a string object, using member str.
	std::stringstream address;
	address << this;
	std::string name = address.str();
	return name;
}
