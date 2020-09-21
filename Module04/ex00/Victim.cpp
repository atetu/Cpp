/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 18:18:35 by user42            #+#    #+#             */
/*   Updated: 2020/09/21 18:18:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
}

Victim::Victim(std::string n) : name(n)
{
	std::cout << "Some random victim called " << this->name << " just appeared!\n";
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reasons!\n";
}

Victim::Victim(Victim const &to_copy)
{
	std::cout << "Copy constructor called\n";
	*this = to_copy;
}

Victim &Victim::operator=(Victim const &to_copy)
{
	if (this != &to_copy)
		this->name = to_copy.name;
	return (*this);
}

void Victim::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a cute little sheep!\n";
}

std::string Victim::getName(void) const
{
	return (this->name);
}

std::ostream &operator<<(std::ostream &out_flux, const Victim &victim)
{
	out_flux << "I'm " << victim.getName() << " and I like otters!\n";
	return (out_flux);
}
