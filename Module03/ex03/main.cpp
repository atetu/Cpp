#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	NinjaTrap ninja("Ninja");
	NinjaTrap mini_ninja("Mini Ninja");
	ClapTrap handy(60, 60, 40, 40, 3, "Handy", 30, 30, 10);
	FragTrap killer("Killer");
	ScavTrap trognon ("Trognon");
	ninja.rangedAttack("Troll");
	ninja.meleeAttack("Bad_Guys");
	ninja.takeDamage(20);
	ninja.ninjaShoebox(handy);
	ninja.ninjaShoebox(killer);
	ninja.ninjaShoebox(trognon);
	ninja.ninjaShoebox(mini_ninja);


	return (0);
}
