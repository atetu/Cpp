/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:35:09 by user42            #+#    #+#             */
/*   Updated: 2020/09/17 16:35:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_point_value(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int int_nb)
{
	std::cout << "Integer constructor called\n";
	fixed_point_value = int_nb << fractional_bits;  // y << x -> deplace la valeur y de x fois vers la gauche
}

Fixed::Fixed(const float float_nb)
{
	std::cout << "Float constructor called\n";
	fixed_point_value = roundf(float_nb * (1 << fractional_bits));
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

float Fixed::toFloat(void) const
{
	float result;
//	result = (float)this->fixed_point_value / (float)(256);
	result = (float)this->fixed_point_value / (1 << fractional_bits);
	return (result);
}

int Fixed::toInt(void) const
{
	int result;
	result = this->fixed_point_value >> fractional_bits;
	return (result);
}

std::ostream &operator<<(std::ostream &out_flux, const Fixed &fixed)
{
	out_flux << fixed.toFloat();
	return (out_flux);
}
