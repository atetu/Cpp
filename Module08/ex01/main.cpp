#include "span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span sp2 = Span(1);
	sp2.addNumber(5);
	sp2.addNumber(3);
	try
	{
		std::cout << sp2.shortestSpan() << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}
	try
	{
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}

	Span sp3 = Span(3);
	sp3.addNumber(2147483647);
	sp3.addNumber(-9685);
	sp3.addNumber(-85);
	try
	{
		std::cout << sp3.shortestSpan() << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}
	try
	{
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}


}
