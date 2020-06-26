#include "ScavTrap.hpp"


typedef void(ScavTrap::*challenge) (std::string const &newcomer);

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
	energy_points = 50;
	max_energy_points = 50;
	melee_attack_damage = 20;
	ranged_attack_damage = 15;
	armor_damage_reduction = 3;
	std::cout << "ScavTrap " << name << " a l'ecoute.\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << name << " : \"Admirez mon aura mortelle qui s'eteint!\"\n";
}

ScavTrap::ScavTrap(ScavTrap const &to_copy)
{
	std::cout << "Copy constructor called\n";
	*this = to_copy;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &to_copy)
{
	if (this != &to_copy)
	{
		ClapTrap::operator=(to_copy);
	}
	return *this;
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SCAVTRAP " << name << " attaque " << target << " a distance, causant "<< ranged_attack_damage << " points de degats! Ca va tous les faire fondre!\n";
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SCAVTRAP " << name << " attaque " << target << " au corps a corps causant "<< melee_attack_damage << " points de degats! Zap! Psit! Hop-la!\n";
}

void ScavTrap::reverse(std::string const &newcomer)
{
	std::cout << "Hello " << newcomer << "! Pour passer il te faudra prononcer le nom de mon compagnon ici present cinq fois de suite le plus vite possible: Trap, Clap Trap, zero zero Trap.\n";
}

void ScavTrap::riddle(std::string const &newcomer)
{
	std::cout << "Hello " << newcomer << "! Pour passer il te faudra resoudre la devinette suivante: Si un car et une girafe se reproduisaient, ça ferait quoi?\n";
}

void ScavTrap::story(std::string const &newcomer)
{
	std::cout << "Hello " << newcomer << "! Pour passer il te faudra me raconter une histoire de lasers et de gros flingues.\n";
}

void ScavTrap::challengeNewcomer(std::string const &newcomer)
{
	int index;

	challenge type[] = {
		&ScavTrap::reverse, 
		&ScavTrap::riddle,
		&ScavTrap::story};
	index = rand() % 3;
	(this->*type[index])(newcomer);
}
