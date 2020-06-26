#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie(std::string name, std::string type);
		void advert();

	private:
		std::string m_name;
		std::string m_type;

};
#endif
