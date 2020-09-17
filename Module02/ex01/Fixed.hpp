/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:35:14 by user42            #+#    #+#             */
/*   Updated: 2020/09/17 16:35:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	private:
		int fixed_point_value;
		static const int fractional_bits = 8;
};

std::ostream &operator<<(std::ostream &out_flux, const Fixed &fixed);

#endif
