/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 12:24:18 by user42            #+#    #+#             */
/*   Updated: 2020/09/14 13:54:33 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	write_address(Pony *pony)
{
	int var1 = 1;
	int *var2 = new int(2);
	
	std::cout << "Adress on the stack " << &var1 << std::endl;
	std::cout << "Adress on the heap " << var2 << std::endl;
	std::cout << "Adress of the pony " << pony << std::endl;
}

void	ponyOnTheStack(void)
{
	Pony pony1("black", 110);
	pony1.display();
	pony1.eat(10);
	pony1.walk(5);
	write_address(&pony1);
}

void	ponyOnTheHeap(void)
{
	Pony *pony2;
	pony2 = new Pony("white", 150);
	pony2->display();
	pony2->eat(3);
	pony2->walk(15);
	write_address(pony2);
	delete pony2;
}

int main (void)
{	
	std::cout << "----PonyOnTheStack----\n";
	ponyOnTheStack();
	std::cout << "\n----PonyOnTheHeap----\n";
	ponyOnTheHeap();
}
