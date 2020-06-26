#include "ScavTrap.hpp"


typedef void(ScavTrap::*challenge) (std::string const &newcomer);

ScavTrap::ScavTrap(std::string n) : hit_points(100), max_hit_points(100), energy_points(50), max_energy_points(50), level(1), name(n), melee_attack_damage(20), ranged_attack_damage(15), armor_damage_reduction(3)
{
	std::cout << "Séquence d'initialisation terminée.\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << name << " est finalement detruit. \"Admirez mon aura mortelle qui s'eteint\" gemit-il dans un dernier soupir.\n";
}

ScavTrap::ScavTrap(ScavTrap const &to_copy)
{
	std::cout << "Copy constructor called\n";
	operator=(to_copy);
}

ScavTrap &ScavTrap::operator=(ScavTrap const &to_copy)
{
	if (this != &to_copy)
	{
		hit_points = to_copy.hit_points;
		max_hit_points = to_copy.max_hit_points;
		energy_points = to_copy.energy_points;
		max_energy_points = to_copy.max_energy_points;
		level = to_copy.level;
		name = to_copy.name;
		melee_attack_damage = to_copy.melee_attack_damage;
		ranged_attack_damage = to_copy.ranged_attack_damage;
		armor_damage_reduction = to_copy.armor_damage_reduction;
	}
	return *this;
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "ScavTrap " << name << " attaque " << target << " a distance, causant "<< ranged_attack_damage << " points de degats! Mais bon... deux balles avec un grand verre d'eau et ca ira mieux pour " << target << ".\n";
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "ScavTrap " << name << " attaque " << target << " au corps a corps causant "<< melee_attack_damage << " points de degats! C'est le feu, c'est la mort!\n";
}

void ScavTrap::takeDamage(unsigned int amount)
{
	hit_points = amount - armor_damage_reduction;
	if (hit_points < 0)
		hit_points = 0;
	std::cout << name << " subit " << amount << " points de degats... Et c'est encore plus de boum a l'interieur!\n";
}

void ScavTrap::beRepaired(unsigned int amount)
{
	hit_points += amount;
	energy_points += amount;
	if (hit_points > max_hit_points)
		hit_points = max_hit_points;
	if (energy_points > max_energy_points)
		energy_points = max_energy_points;
	std::cout << name << " va en reparation. \"OK. Merci de m'avoir donné une deuxième chance Dieu. C'est vraiment trop sympa.\" s'exclame-t-il.\n";
	std::cout << name << " dispose desormais de " << hit_points << " points de frappe et de " << energy_points << " points d'energie.\n";
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
