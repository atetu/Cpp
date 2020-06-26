#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string n) : hit_points(100), max_hit_points(100), energy_points(100), max_energy_points(100), level(1), name(n), melee_attack_damage(30), ranged_attack_damage(20), armor_damage_reduction(5)
{
	std::cout << "ClapTrap " << name << " pour vous servir.\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << name << " disparait.\n";
}

ClapTrap::ClapTrap(ClapTrap const &to_copy)
{
	std::cout << "Copy constructor called\n";
	operator=(to_copy);
}

ClapTrap &ClapTrap::operator=(ClapTrap const &to_copy)
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

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "ClapTrap " << name << " attaque " << target << " a distance, causant "<< ranged_attack_damage << " points de degats.\n";
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "ClapTrap " << name << " attaque " << target << " au corps a corps causant "<< melee_attack_damage << " points de degats!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	hit_points = amount - armor_damage_reduction;
	if (hit_points < 0)
		hit_points = 0;
	std::cout << name << " est blesse. Il subit " << amount << " points de degats.\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	hit_points += amount;
	energy_points += amount;
	if (hit_points > max_hit_points)
		hit_points = max_hit_points;
	if (energy_points > max_energy_points)
		energy_points = max_energy_points;
	std::cout << name << " va en reparation.\n";
	std::cout << name << " dispose desormais de " << hit_points << " points de frappe et de " << energy_points << " points d'energie.\n";
}

std::string ClapTrap::get_name(void)
{
	return (name);
}
