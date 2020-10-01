/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 18:17:26 by user42            #+#    #+#             */
/*   Updated: 2020/10/01 18:33:28 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"


Span::Span() : _N(0)
{
}

Span::Span(unsigned int N) : _N(N)
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
	if (_vec.size() < _N)
		_vec.push_back(n);
	else
		throw MaxNumberException();
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int>::iterator it;
	if (this->_vec.size() + std::distance(begin, end) > this->_N)
		throw MaxNumberException();
	it = _vec.begin();
	for (; it != _vec.end(); it++)
		;
	_vec.insert(it, begin, end);
}

int Span::shortestSpan()
{
	if (_vec.size() <= 1)
		throw NotEnoughException();
	std::vector<int> tmp = std::vector<int>(_vec);
	std::sort(tmp.begin(), tmp.end());
	long span = -1;
	for (unsigned int i = 0; i < _vec.size() - 1; i++)
	{
		long diff = std::abs(tmp[i] - tmp[i + 1]);
		if (span == -1 || diff < span)
			span = diff;
	}
	if (span > std::numeric_limits<int>::max())
		throw OffLimitsException();
	return (static_cast<int>(span));
}

int Span::longestSpan()
{
	if (_vec.size() <= 1)
		throw NotEnoughException();
	int max = *std::max_element(_vec.begin(), _vec.end());
	int min = *std::min_element(_vec.begin(), _vec.end());
	unsigned int span = max - min;
	unsigned int max_int = std::numeric_limits<int>::max();
	if (span > max_int)
		throw OffLimitsException();
	else
		return (static_cast<int>(span));
}
