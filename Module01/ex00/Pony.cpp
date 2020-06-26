#include "Pony.hpp"

Pony::Pony(std::string color, int height) : m_color(color), m_height(height)
{
}

void	Pony::display(void)
{
	std::cout <<"The pony is " << m_color << " and is " << m_height << "cm tall.\n";
}

void Pony::eat(int nb_apples)
{
	std::cout << "the pony eats " << nb_apples << " apples.\n";
}

void	Pony::walk(int km)
{
	std::cout << "The pony walks " << km << " km.\n";
}
