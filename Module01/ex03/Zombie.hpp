#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <random>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name, std::string type);
		void annonce();
		~Zombie();

	private:
		std::string m_name;
		std::string m_type;

};
#endif
