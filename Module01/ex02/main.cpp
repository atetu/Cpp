#include "ZombieEvent.hpp"
#include "Zombie.hpp"

// heap -> more secure, possibility of transferring to another function, more space
//stack: easier since no risk of leaks, but better if it is not transferred

Zombie	*little_trip_to_the_city(Zombie *z1, Zombie *z2)
{
	delete z2;
	return z1;
}

int main()
{
	Zombie *zombie1;
	Zombie *zombie_random;
	std::cout << "A zombie is created on the stack. It is Zombie Stack.\n";
	Zombie stack("Zombie Stack", "cat-eater");
	stack.advert();
	ZombieEvent zombie_event;
	std::cout << "Zombie1 and a random zombie are created on the heap\n";
	zombie_event.setZombieType("Man-eater");
	zombie1 = zombie_event.newZombie("Zombie1");
	zombie1->advert();
	zombie_random = zombie_event.randomChump();
	std::cout << "After a little trip to the city, only one survivor comes back...\n";
	little_trip_to_the_city(zombie1, zombie_random)->advert();
	delete zombie1;
	std::cout << "After one hour, only ZombieStack remains\n";
	stack.advert();
	system("leaks a.out");
}
