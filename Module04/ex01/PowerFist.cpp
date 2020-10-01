/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 19:21:25 by user42            #+#    #+#             */
/*   Updated: 2020/09/21 19:21:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist(PowerFist const &to_copy)
{
	std::cout << "Copy constructor called\n";
	operator=(to_copy);
}

PowerFist &PowerFist::operator=(PowerFist const &to_copy)
{
	if (this != &to_copy)
		AWeapon::operator=(to_copy);
	return *this;
}

void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM ! *\n";
}
