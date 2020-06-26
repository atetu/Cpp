#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : m_name(name), m_type(type)
{
}

void	Zombie::advert(void)
{
	std::cout << "<" << m_name << " (" << m_type << ")> Braiiiiiiinnnssss ...\n"; 
}
