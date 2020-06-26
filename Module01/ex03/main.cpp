#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int main()
{
	ZombieHorde zombie_horde(5);
	zombie_horde.announce();
//	zombie_horde.~ZombieHorde();
	system("leaks a.out");
	return(0);
}
