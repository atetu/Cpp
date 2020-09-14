/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 16:03:01 by user42            #+#    #+#             */
/*   Updated: 2020/09/14 16:19:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w) : _name(n), _weapon(w)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
	std::string type;
	type = _weapon.getType();
	std::cout << _name << " attacks with his " << type << ".\n";
}
