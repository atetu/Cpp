/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 18:18:14 by user42            #+#    #+#             */
/*   Updated: 2020/09/21 18:18:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon()
{
}

Peon::Peon(std::string n) : Victim(n)
{
	std::cout << "Zog zog.\n";
}

Peon::~Peon()
{
	std::cout << "Bleuark...\n";
}

Peon::Peon(Peon const &to_copy)
{
	std::cout << "Copy constructor called\n";
	*this = to_copy;
}

Peon &Peon::operator=(Peon const &to_copy)
{
	if (this != &to_copy)
		Victim::operator=(to_copy);
	return (*this);
}

void Peon::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a pink pony!\n";
}
