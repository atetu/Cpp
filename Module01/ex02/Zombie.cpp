/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 14:15:27 by user42            #+#    #+#             */
/*   Updated: 2020/09/14 19:37:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : m_name(name), m_type(type)
{
}

Zombie::~Zombie()
{
}

void	Zombie::advert(void)
{
	std::cout << "<" << m_name << " (" << m_type << ")> Braiiiiiiinnnssss ...\n"; 
}
