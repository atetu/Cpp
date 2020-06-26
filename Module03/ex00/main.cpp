#include "FragTrap.hpp"

int main()
{
	FragTrap killer("Killer");
	killer.rangedAttack("Troll");
	killer.meleeAttack("Bad_Guys");
	killer.vaulthunter_dot_exe("Une horde de moutons");
	killer.takeDamage(20);
	killer.takeDamage(10);
	killer.beRepaired(10);
	killer.vaulthunter_dot_exe("Un groupe de sauterelles en goguette");
	killer.vaulthunter_dot_exe("Une troupe de zombies ambulants");
	killer.vaulthunter_dot_exe("Un essaim de chasseurs sachant chasser");
	killer.vaulthunter_dot_exe("Marvin");
	return (0);
}
