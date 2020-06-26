#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>

template<class T>
class Array
{
	public:
		Array() : _array(new T[0]()), _size(0) {};
		Array(unsigned int n) : _array(new T[n]()), _size(n) {};
		~Array() { delete [] _array;};
		Array(Array const &to_copy)
		{
			_array = new T[to_copy._size];
			_size = to_copy._size;
			for (int i = 0; i < to_copy._size; i++)
				_array[i] = to_copy._array[i];
		};
		Array &operator=(Array const &to_copy)
		{
			if (this == to_copy)
				return(*this);
			delete [] _array;
			_array = new T[to_copy._size];
			_size = to_copy._size;
			for (int i = 0; i < to_copy._size; i++)
				_array[i] = to_copy._array[i];
 			return (*this);
		};
		size_t size() {return (_size);};
		T &operator[](int i)
		{
			try
			{
				if (i < 0 || i > (_size - 1))
					throw OffLimitsException();
			}
			catch(std::exception const &e)
			{
				std::cout << "ERROR: "<<  e.what();
			}
			return _array[i];
		};

	class OffLimitsException : public std::exception
	{
		public:
			OffLimitsException() throw () {};
			~OffLimitsException() throw () {};
			OffLimitsException(Array const &) throw () {};
			OffLimitsException &operator=(Array const &) throw () {};
			virtual const char* what() const throw () {return "Off limits.\n";};
	};		

	private:
		T *_array;
		size_t _size;
};
#endif

/*
 * cpp file
 * template<typename T>
Array<T>::Array():
	length(0), elts(nullptr)
{
}

template<typename T>
T &Array<T>::operator[](size_t index)
{
	if (index >= this->length)
		throw Array::OutOfBoundsException();
	return (this->elts[index]);
}
*/
