/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 18:18:24 by user42            #+#    #+#             */
/*   Updated: 2020/09/21 18:18:25 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
}

Sorcerer::Sorcerer(std::string n, std::string t) : name(n), title(t)
{
	std::cout << this->name << ", " << this->title << ", is born!\n";
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!\n";
}

Sorcerer::Sorcerer(Sorcerer const &to_copy)
{
	std::cout << "Copy constructor called\n";
	*this = to_copy;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &to_copy)
{
	if (this != &to_copy)
	{
		this->name = to_copy.name;
		this->title = to_copy.title;
	}
	return (*this);
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}


std::string Sorcerer::getName(void) const
{
	return (this->name);
}

std::string Sorcerer::getTitle(void) const
{
	return (this->title);
}

std::ostream &operator<<(std::ostream &out_flux, const Sorcerer &sorcerer)
{
	out_flux << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!\n";
	return (out_flux);
}
