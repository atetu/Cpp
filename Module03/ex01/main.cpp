#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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
	std::cout << "\n\n\n";
	ScavTrap trognon("Trognon");
	trognon.rangedAttack("Potiron");
	trognon.meleeAttack("une horde de mechants");
	trognon.takeDamage(20);
	trognon.beRepaired(10);
	trognon.challengeNewcomer("Astragon");
	trognon.challengeNewcomer("Patachon");
	trognon.challengeNewcomer("Zebulon");
	return (0);
}
