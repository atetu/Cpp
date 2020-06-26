#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int int_nb);
		Fixed(const float float_nb);
		~Fixed();
		Fixed(Fixed const &object_to_copy);
		Fixed &operator=(Fixed const &object_to_copy);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		
		bool operator>(Fixed const &b) const;
		bool operator<(Fixed const &b) const;
		bool operator>=(Fixed const &b) const;
		bool operator<=(Fixed const &b) const;
		bool operator==(Fixed const &b) const;
		bool operator!=(Fixed const &b) const;

		Fixed operator+(Fixed const &b) const;
		Fixed operator-(Fixed const &b) const;
		Fixed operator*(Fixed const &b) const;
		Fixed operator/(Fixed const &b) const;

		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);


		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed const &max(Fixed const &a, Fixed const &b);
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);

	private:
		int fixed_point_value;
		static const int fractional_bits = 8;
};

std::ostream &operator<<(std::ostream &out_flux, const Fixed &fixed);
#endif
