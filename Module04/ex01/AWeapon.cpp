/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 19:20:16 by user42            #+#    #+#             */
/*   Updated: 2020/09/21 19:20:17 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost),_damage(damage)
{
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(AWeapon const &to_copy)
{
	std::cout << "Copy constructor called\n";
	*this = to_copy;
}

AWeapon &AWeapon::operator=(AWeapon const &to_copy)
{
	if (this != &to_copy)
	{
		this->_name = to_copy._name;
		this->_apcost = to_copy._apcost;
		this->_damage = to_copy._damage;
	}
	return *this;
}

std::string AWeapon::getName(void) const
{
	return (this->_name);
}

int AWeapon::getAPCost(void) const
{
	return (this->_apcost);
}

int AWeapon::getDamage(void) const
{
	return (this->_damage);
}
