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
	operator=(object_to_copy);

}

Fixed &Fixed::operator=(Fixed const &object_to_copy)
{
	std::cout << "Assignation operator called\n";
	if (this != &object_to_copy)
	{

		setRawBits(object_to_copy.getRawBits());
	}
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
