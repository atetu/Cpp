/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:34:48 by user42            #+#    #+#             */
/*   Updated: 2020/09/17 16:34:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_point_value(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(Fixed const &object_to_copy)
{
	std::cout << "Copy constructor called\n";
	*this = object_to_copy;
}

Fixed &Fixed::operator=(Fixed const &object_to_copy)
{
	std::cout << "Assignation operator called\n";
	if (this != &object_to_copy)
		this->fixed_point_value = object_to_copy.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->fixed_point_value);

}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point_value = raw;
}
