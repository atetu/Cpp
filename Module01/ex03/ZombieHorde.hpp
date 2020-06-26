#include <string>
#include <iostream>
#include <random>
#include "Zombie.hpp"

class	ZombieHorde
{
	public:
		ZombieHorde(int n);
		void	announce(void);
		 ~ZombieHorde();

	private:
		Zombie *array;
		int	nb_zombies;
};
