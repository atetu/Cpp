/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 14:15:10 by user42            #+#    #+#             */
/*   Updated: 2020/09/16 15:03:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{	
}

ZombieEvent::~ZombieEvent()
{
}

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

Zombie	*ZombieEvent::randomChump(void)
{
	std::string name[10] = {"Lucas", "Cleo", "Florianne", "Badria", "Alexandra", "Alice",
    "Juan", "Andrea", "Gabriel", "Enzo"};
	Zombie *zombie;
    int nb;
   
    srand(time(NULL));
    nb = rand() % 10;
	zombie = new Zombie(name[nb], m_type);
	zombie->advert();
	return zombie;
}
