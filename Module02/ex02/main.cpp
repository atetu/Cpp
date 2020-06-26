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
	std::cout << "Min: " << Fixed::min(c, d) << std::endl;
	std::cout << "Mul: " << c * d << std::endl;
	std::cout << "Div: " << c / d << std::endl;
	std::cout << "Add: " << c + d << std::endl;
	std::cout << "Sub: " << c - d << std::endl;
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
