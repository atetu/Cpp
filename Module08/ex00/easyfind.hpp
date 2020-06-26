#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <string>

class NotFoundException : public std::exception
{
	virtual const char *what()  const throw () {return "Not found\n";};
};

template <typename T>
typename T::iterator easyfind(T &container, int x)
{
	typename T::iterator it =container.begin();
	for (; it != container.end() && *it != x; ++it);
	if (it == container.end())
		throw NotFoundException();
	else
		return (it);

}
#endif
