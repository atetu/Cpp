#include "Zombie.hpp"

std::string random_string(std::size_t length)
{
    const std::string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    std::random_device random_device;
    std::mt19937 generator(random_device());
    std::uniform_int_distribution<> distribution(0, characters.size() - 1);
    std::string random_string;
    for (std::size_t i = 0; i < length; ++i)
    {
        random_string += characters[distribution(generator)];
    }
    return random_string;
}

Zombie::Zombie () : m_name(random_string(10)), m_type("man eater")
{
}

Zombie::Zombie(std::string name, std::string type) : m_name(name), m_type(type)
{
}

Zombie::~Zombie()
{
}

void	Zombie::annonce(void)
{
	std::cout << "<" << m_name << " (" << m_type << ")> Braiiiiiiinnnssss ...\n"; 
}
