#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>
#include <sstream>

class Brain
{
	public:
		Brain(int neurons, int size);
		~Brain();
		std::string identify(void) const;

	private:
		int m_neurons;
		int m_size;
};
#endif
