#include <stack>
#include <iostream>
#include "mutantstack.hpp"

int main()
{
/*	std::stack<int> pile;
	std::stack<int> *ptr;
	std::stack<int> *new_ptr;
	ptr = &pile; 
	std::cout << ptr <<  std::endl;
	pile.push (3);
	pile.push (4);
	pile.push (5);
	new_ptr = ptr++;
	int i;
	i = new_ptr->top();
	std::cout << i <<  std::endl;
	std::cout << pile.size() <<  std::endl;
*/
	MutantStack<int> mstack;
	std::cout << "Stack : 5 - 17" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top: "<<  mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size: " << mstack.size() << std::endl;
	std::cout << "Stack : 5 - 3 - 5 - 737 - 0" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	std::cout << "*it: " << *it << std::endl;
	++it;
	std::cout << "*it after ++it: " << *it << std::endl;
	++it;
	std::cout << "*it after ++it: " << *it << std::endl;
	++it;
	std::cout << "*it after ++it: " << *it << std::endl;
	++it;
	std::cout << "*it after ++it: " << *it << std::endl;
	--it;
	std::cout << "*it after --it: " << *it << std::endl;
	it++;
	std::cout << "*it after it++: " << *it << std::endl;
	it--;
	std::cout << "*it after it--: " << *it << std::endl;
	it--;
	std::cout << "*it after it--: " << *it << std::endl;
	it--;
	std::cout << "*it after it--: " << *it << std::endl;
	std::cout << "*it after it--: " << *it << std::endl;
	std::cout << "*it after it--: " << *it << std::endl;
	std::cout << "Values of *it for the loop it++ until it == ite: " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	MutantStack<int>::reverse_iterator itr = mstack.rbegin();
	MutantStack<int>::reverse_iterator iter = mstack.rend();
	
	std::cout << "*itr: " << *itr << std::endl;
	itr++;
	std::cout << "*itr after ++itr: " << *it << std::endl;
	--itr;
	std::cout << "*itr after --itr: " << *it << std::endl;
	std::cout << "Values of *itr for the loop itr++ until itr == iter: " << std::endl;
	while (itr != iter)
	{
		std::cout << *itr << std::endl;
		++itr;
	}

	std::stack<int> s(mstack);
	return 0;

}
