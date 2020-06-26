#include "mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() 
{
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &to_copy) : std::stack<T>(to_copy)
{
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return std::begin(c);
}
template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
	return std::begin(c);
}
template <typename T>
typename  MutantStack<T>::iterator MutantStack<T>::end()
{
	return std::end(c);
}

template <typename T>
typename  MutantStack<T>::const_iterator MutantStack<T>::end() const
{
	return std::end(c);
}
