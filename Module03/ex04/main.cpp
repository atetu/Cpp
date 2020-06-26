#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	NinjaTrap ninja("Ninja");
	ClapTrap handy("Handy");
	FragTrap killer("Killer");
	ScavTrap trognon ("Trognon");
	std::cout << "/n";
/*	ninja.rangedAttack("Troll");
	ninja.meleeAttack("Bad_Guys");
	ninja.takeDamage(20);
	ninja.ninjaShoebox(handy);
	ninja.ninjaShoebox(killer);
	ninja.ninjaShoebox(trognon);
	ninja.ninjaShoebox(mini_ninja);
*/	
	SuperTrap super_strong ("Super Strong");
	super_strong.meleeAttack("Un groupe de chenapans");
	super_strong.rangedAttack("Un syndicat de techniciens de surface");
	super_strong.ninjaShoebox(ninja);
	super_strong.ninjaShoebox(handy);
	super_strong.ninjaShoebox(killer);
	super_strong.ninjaShoebox(trognon);
	super_strong.vaulthunter_dot_exe("Bad Guy");
	super_strong.vaulthunter_dot_exe("Bad Guy");	
	super_strong.takeDamage(15);
	super_strong.takeDamage(20);
	super_strong.beRepaired(50);
	super_strong.takeDamage(42);
	super_strong.takeDamage(100);
	super_strong.takeDamage(100);
	super_strong.takeDamage(100);
	super_strong.beRepaired(125);
	return (0);
}
