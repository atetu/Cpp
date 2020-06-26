#include "span.hpp"


Span::Span() 
{
}

Span::Span(unsigned int N) : _vec(0), _N(N)
{
}


Span::~Span()
{
}

Span::Span(Span const &to_copy)
{
	_vec = to_copy._vec;
	_N = to_copy._N;
}

Span &Span::operator=(Span const &to_copy)
{
	if (this != &to_copy)
	{
		_vec = to_copy._vec;
		_N = to_copy._N;
	}
	return (*this);
}

void Span::addNumber(int n)
{
	try
	{
		if (_vec.size() != _N)
			_vec.push_back(n);
		else
			throw MaxNumberException();
	}
	catch (std::exception const &e)
	{
		std::cout << e.what();
	}
}

int Span::shortestSpan()
{
	if (_vec.size() <= 1)
		throw NotEnoughException();
	std::vector<int>::iterator it;
	int span = std::numeric_limits<int>::max();
	int previous = *(_vec.begin());
	for (it = _vec.begin() + 1; it < _vec.end(); it++)
	{
		if (std::abs(*it - previous) < span)
			span = std::abs(*it - previous);
		previous = *it;
	}
	return (span);
}

int Span::longestSpan()
{
	if (_vec.size() <= 1)
		throw NotEnoughException();
	std::vector<int>::iterator it;
	int span = std::numeric_limits<int>::min();
	int previous = *(_vec.begin());
	for (it = _vec.begin() + 1; it < _vec.end(); it++)
	{
		if (std::abs(*it - previous) > span)
			span = std::abs(*it - previous);
		previous = *it;
	}
	return (span);
}
