#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <string>
#include <iostream>
#include <exception>

class Span
{
	public:
		Span(unsigned int N);
		~Span();
		Span(Span const &);
		Span &operator=(Span const &to_copy);
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();

	class MaxNumberException:  public std::exception
	{
		virtual const char* what() const throw() {return "Maximum number already stocked.\n";};
	};		

	class NotEnoughException:  public std::exception
	{
		virtual const char* what() const throw() {return "Not enough stocked numbers.\n";};
	};		

	private:
		Span();
		std::vector<int> _vec;	
		unsigned int _N;
};
#endif
