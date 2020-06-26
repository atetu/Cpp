#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &object_to_copy);
		Fixed &operator=(Fixed const &object_to_copy);
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int fixed_point_value;
		static const int fractional_bits = 8;
};
#endif
