#include "ZombieHorde.hpp"


ZombieHorde::ZombieHorde(int n)
{
	array = new Zombie[n];
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
