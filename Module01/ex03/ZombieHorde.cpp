/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 14:57:27 by user42            #+#    #+#             */
/*   Updated: 2020/09/14 19:46:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string ZombieHorde::name[10] = {"Lucas", "Cleo", "Florianne", "Badria", "Alexandra", "Alice",
    "Juan", "Andrea", "Gabriel", "Enzo"};

std::string ZombieHorde::type[3] = {"Man-eater", "Cat-eater", "Dog-eater"};

ZombieHorde::ZombieHorde(int n)
{
	array = new Zombie[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		array[i].setZombieName(name[rand() % 10]);
		array[i].setZombieType(type[rand() % 3]);
	}
	nb_zombies = n;
}

ZombieHorde::~ZombieHorde()
{
	delete[] array;
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < nb_zombies; i++)
		array[i].annonce();
}
