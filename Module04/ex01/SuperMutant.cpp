/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 19:21:53 by user42            #+#    #+#             */
/*   Updated: 2020/09/21 19:21:54 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything!\n";
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ...\n";
}

SuperMutant::SuperMutant(SuperMutant const &to_copy)
{
	std::cout << "Copy constructor called\n";
	*this = to_copy;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &to_copy)
{
	if (this != &to_copy)
		Enemy::operator=(to_copy);
	return (*this);
}

void SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	if (damage < 0)
		damage = 0;
	this->_hp -= damage;
	if (this->_hp < 0)
		this->_hp = 0;
}
