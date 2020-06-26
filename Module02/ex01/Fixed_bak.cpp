#include "Fixed.hpp"

Fixed::Fixed() : fixed_point_value(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int int_nb)
{
	std::cout << "Integer constructor called\n";
	fixed_point_value = int_nb << fractional_bits;
//	std::cout << "Fixed_point_value :" << fixed_point_value << "\n";
}

Fixed::Fixed(const float float_nb)
{
	std::cout << "Float constructor called\n";
	fixed_point_value = roundf(float_nb * (1 << fractional_bits));
//	std::cout << "Fixed_point_value :" << fixed_point_value << "\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(Fixed const &object_to_copy)
{
	std::cout << "Copy constructor called\n";
	operator=(object_to_copy);
}

Fixed &Fixed::operator=(Fixed const &object_to_copy)
{
	std::cout << "Assignation operator called\n";
	if (this != &object_to_copy)
		setRawBits(object_to_copy.getRawBits());
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return fixed_point_value;

}

void Fixed::setRawBits(int const raw)
{
	fixed_point_value = raw;
}

float Fixed::toFloat(void) const
{
	float result;
	result = (float)fixed_point_value / (float)(256);
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
