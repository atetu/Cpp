/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:36:08 by user42            #+#    #+#             */
/*   Updated: 2020/09/17 16:36:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_point_value(0)
{
}

Fixed::Fixed(const int int_nb)
{
	this->fixed_point_value = int_nb << this->fractional_bits;
}

Fixed::Fixed(const float float_nb)
{
	this->fixed_point_value = roundf(float_nb * (1 << this->fractional_bits));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(Fixed const &object_to_copy)
{
	//operator=(object_to_copy);
	*this = object_to_copy;
}

Fixed &Fixed::operator=(Fixed const &object_to_copy)
{
	if (this != &object_to_copy)
		this->fixed_point_value = object_to_copy.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point_value = raw;
}

float Fixed::toFloat(void) const
{
	float result;
	result = (float)this->fixed_point_value / (1 << this->fractional_bits);
	return (result);	
}

int Fixed::toInt(void) const
{
	int result;
	result = this->fixed_point_value >> this->fractional_bits;
	return (result);
}

std::ostream &operator<<(std::ostream &out_flux, const Fixed &fixed)
{
	out_flux << fixed.toFloat();
	return (out_flux);
}

bool Fixed::operator>(Fixed const &b) const
{
	if (this->fixed_point_value > b.getRawBits())
		return true;
	else
		return false;
 	// return (fixed_point_value > b.getRawBits());
}

bool Fixed::operator<(Fixed const &b) const
{
	return (this->fixed_point_value < b.getRawBits());
}

bool Fixed::operator>=(Fixed const &b) const
{
	return (this->fixed_point_value >= b.getRawBits());
}

bool Fixed::operator<=(Fixed const &b) const
{
	return (this->fixed_point_value <= b.getRawBits());
}

bool Fixed::operator==(Fixed const &b) const
{
	return (this->fixed_point_value == b.getRawBits());
}

bool Fixed::operator!=(Fixed const &b) const
{
	return (this->fixed_point_value != b.getRawBits());
}

Fixed Fixed::operator+(Fixed const &b) const
{
	Fixed new_object;
	int new_value;
	new_value = this->fixed_point_value + b.getRawBits();
	new_object.setRawBits(new_value);
	return (new_object);
}

Fixed Fixed::operator-(Fixed const &b) const
{
	Fixed new_object;
	int new_value;
	new_value = this->fixed_point_value - b.getRawBits();
	new_object.setRawBits(new_value);
	return (new_object);
}

Fixed Fixed::operator*(Fixed const &b) const
{
	Fixed new_object;
	int new_value;
	new_value = (this->fixed_point_value * b.getRawBits() >> this->fractional_bits);
	new_object.setRawBits(new_value);
	return (new_object);
}

Fixed Fixed::operator/(Fixed const &b) const
{
	// long tmp1, tmp2;

	// tmp1 = ((long)this->getRawBits());
	// tmp2 = ((long)b.getRawBits());
	// val.setRawBits((tmp1 * (1 << Fixed::fractional_bits)) / tmp2);
	// return (val);
	Fixed new_object;
	int new_value;
	new_value = roundf((this->toFloat() / b.toFloat()) * (1 << new_object.fractional_bits));
	new_object.setRawBits(new_value);
	return (new_object);
}

Fixed &Fixed::operator++(void)
{
	fixed_point_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed &Fixed::operator--(void)
{
	fixed_point_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

Fixed & min(Fixed & a, Fixed & b)
{
    return (a < b ? a : b);
}

Fixed const& min(Fixed const& a, Fixed const& b)
{
    return (a < b ? a : b);
}

Fixed const& Fixed::min(Fixed const& a, Fixed const& b)
{
	return (a < b ? a : b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed & max(Fixed & a, Fixed & b)
{
    return (a < b ? a : b);
}

Fixed const& max(Fixed const& a, Fixed const& b)
{
    return (a > b ? a : b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}