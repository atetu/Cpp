/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:35:41 by user42            #+#    #+#             */
/*   Updated: 2020/09/17 16:35:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << "====================" << std::endl;
	Fixed c(5.02f);
	Fixed d (4);
	Fixed e (4);
	Fixed f;
	Fixed g;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b<< std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "e: " << e << std::endl;
	// std::cout << "Min between c and d: " << Fixed::min(c, d) << std::endl;
	std::cout << "Mul c * d: " << c * d << std::endl;
	std::cout << "Div c / d: " << c / d << std::endl;
	std::cout << "Div b / c: " << b / c << std::endl;
	std::cout << "Add c + d: " << c + d << std::endl;
	std::cout << "Sub c -d: " << c - d << std::endl;
	f = min(a, b);
    std::cout << "f = " << f << std::endl;
    f = max(a, b);
    std::cout << "f = " << f << std::endl;
    g = c.min(a, b);
    std::cout << "g = " << g << std::endl;
    g = c.max(a, b);
    std::cout << "g = " << g << std::endl;
	if (c >= d)
		std::cout << "c >= d" << std::endl;
	else
		std::cout << "!(c >= d)" << std::endl;
	if (c <= d)
		std::cout << "c <= d" << std::endl;
	else
		std::cout << "!(c <= d)" << std::endl;
	if (c > d)
		std::cout << "c > d" << std::endl;
	else
		std::cout << "!(c > d)" << std::endl;
	if (c < d)
		std::cout << "c < d" << std::endl;
	else
		std::cout << "!(c < d)" << std::endl;
	if (d == e)
		std::cout << "d = e" << std::endl;
	else
		std::cout << "d != e" << std::endl;
	return 0;
}
