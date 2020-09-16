/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 12:24:18 by user42            #+#    #+#             */
/*   Updated: 2020/09/16 14:44:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	write_address(Pony *pony, std::string str)
{
	int var1 = 1;
	int *var2 = new int(2);
	
	std::cout << "Adress of the variable on the stack: " << &var1 << std::endl;
	std::cout << "Adress of the variable on the heap: " << var2 << std::endl;
	std::cout << "Adress of the pony on the " << str << ": " << pony << std::endl;
}

void	ponyOnTheStack(void)
{
	std::string stack = "stack";
	Pony pony1("black", 110);
	pony1.display();
	pony1.eat(10);
	pony1.walk(5);
	write_address(&pony1, stack);
}

void	ponyOnTheHeap(void)
{
	Pony *pony2;
	std::string heap = "heap";
	pony2 = new Pony("white", 150);
	pony2->display();
	pony2->eat(3);
	pony2->walk(15);
	write_address(pony2, heap);
	delete pony2;
}

int main (void)
{	
	std::cout << "----PonyOnTheStack----\n";
	ponyOnTheStack();
	std::cout << "\n----PonyOnTheHeap----\n";
	ponyOnTheHeap();
}
