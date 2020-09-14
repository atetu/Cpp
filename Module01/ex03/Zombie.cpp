/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 14:57:19 by user42            #+#    #+#             */
/*   Updated: 2020/09/14 15:16:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name, std::string type) : m_name(name), m_type(type)
{
}

Zombie::~Zombie()
{
}

void	Zombie::setZombieType(std::string type)
{ 
	m_type = type;
}

void	Zombie::setZombieName(std::string name)
{ 
	m_name = name;
}

void	Zombie::annonce(void)
{
	std::cout << "<" << m_name << " (" << m_type << ")> Braiiiiiiinnnssss ...\n"; 
}
