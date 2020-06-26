#include "Fixed.hpp"

Fixed::Fixed() : fixed_point_value(0)
{
}

Fixed::Fixed(const int int_nb)
{
	fixed_point_value = int_nb << fractional_bits;
}

Fixed::Fixed(const float float_nb)
{
	fixed_point_value = roundf(float_nb * (1 << fractional_bits));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(Fixed const &object_to_copy)
{
	operator=(object_to_copy);
}

Fixed &Fixed::operator=(Fixed const &object_to_copy)
{
	if (this != &object_to_copy)
		setRawBits(object_to_copy.getRawBits());
	return *this;
}

int Fixed::getRawBits(void) const
{
	return fixed_point_value;

}

void Fixed::setRawBits(int const raw)
{
	fixed_point_value = raw;
}

float Fixed::toFloat(void) const
{
	float result;
	result = (float)fixed_point_value / (float)(1<<fractional_bits);
	return result;	
}

int Fixed::toInt(void) const
{
	int result;
	result = fixed_point_value >> fractional_bits;
	return result;
}

std::ostream &operator<<(std::ostream &out_flux, const Fixed &fixed)
{
	out_flux << fixed.toFloat();
	return out_flux;
}

bool Fixed::operator>(Fixed const &b) const
{
	if (fixed_point_value > b.getRawBits())
		return true;
	else
		return false;
 	// return (fixed_point_value > b.getRawBits());
}

bool Fixed::operator<(Fixed const &b) const
{
	return (fixed_point_value < b.getRawBits());
}

bool Fixed::operator>=(Fixed const &b) const
{
	return (fixed_point_value >= b.getRawBits());
}

bool Fixed::operator<=(Fixed const &b) const
{
	return (fixed_point_value <= b.getRawBits());
}

bool Fixed::operator==(Fixed const &b) const
{
	return (fixed_point_value == b.getRawBits());
}

bool Fixed::operator!=(Fixed const &b) const
{
	return (fixed_point_value != b.getRawBits());
}

Fixed Fixed::operator+(Fixed const &b) const
{
	Fixed new_object;
	int new_value;
	new_value = fixed_point_value + b.getRawBits();
	new_object.setRawBits(new_value);
	return (new_object);
}

Fixed Fixed::operator-(Fixed const &b) const
{
	Fixed new_object;
	int new_value;
	new_value = fixed_point_value - b.getRawBits();
	new_object.setRawBits(new_value);
	return (new_object);
}

Fixed Fixed::operator*(Fixed const &b) const
{
	Fixed new_object;
	int new_value;
	new_value = (fixed_point_value * b.getRawBits() >> fractional_bits);
	new_object.setRawBits(new_value);
	return (new_object);
}

Fixed Fixed::operator/(Fixed const &b) const
{
	Fixed new_object;
	int new_value;
	new_value = fixed_point_value / b.getRawBits();
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

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b ? a : b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}
