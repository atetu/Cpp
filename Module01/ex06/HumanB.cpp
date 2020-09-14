/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 16:02:58 by user42            #+#    #+#             */
/*   Updated: 2020/09/14 16:19:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n) : _name(n), _weapon(0)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(const Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack(void)
{
	std::string type;
	type = _weapon->getType();
	std::cout << _name << " attacks with his " << type << ".\n";
}
