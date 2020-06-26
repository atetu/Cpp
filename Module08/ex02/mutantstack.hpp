#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <string>
#include <iostream>
#include <exception>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(void) : std::stack<T>() {} ;
		~MutantStack() {};
		MutantStack(MutantStack const &to_copy) : std::stack<T>(to_copy) {};
		
		using std::stack<T>::operator=;
		using std::stack<T>::c;
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		iterator begin() {return c.begin();};
		const_iterator begin() const {return c.begin();};
		reverse_iterator rbegin() {return c.rbegin();};
		const_reverse_iterator rbegin() const {return c.begin();};

		iterator end() {return c.end();};
		const_iterator end() const {return c.end();};
		reverse_iterator rend() {return c.rend();};
		const_reverse_iterator rend() const {return c.rend();};


/*		iterator begin() const { return std::begin(c); }
		iterator end() const { return std::end(c); }
*/
/*	class MaxNumberException:  public std::exception
	{
		virtual const char* what() const throw() {return "Maximum number already stocked.\n";};
	};		
*/

};
#endif
