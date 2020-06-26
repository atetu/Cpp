#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{ 
	m_type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie;
	zombie = new Zombie(name, m_type);
	return zombie;
}

//code from https://inversepalindrome.com/blog/how-to-create-a-random-string-in-cpp

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

Zombie	*ZombieEvent::randomChump(void)
{
	std::string name;
	Zombie *zombie;
	
	name = random_string(10);
	zombie = new Zombie(name, m_type);
	zombie->advert();
	return zombie;
}
