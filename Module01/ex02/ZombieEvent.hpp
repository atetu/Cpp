#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include <string>
#include <random>
#include "Zombie.hpp"

class ZombieEvent
{
	public:
		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name);
		Zombie	*randomChump();

	private:
		std::string m_name;
		std::string m_type;
};
#endif
