#include "SuperTrap.hpp"


SuperTrap::SuperTrap() : 
	ClapTrap(100, 100, 120, 120, 1, n, 60, 20, 5),
	FragTrap(),
	NinjaTrap()
{
}

SuperTrap::SuperTrap(std::string n) :
	ClapTrap(100, 100, 120, 120, 1, n, 60, 20, 5),
	FragTrap(), 
	NinjaTrap()
{
    // hit_points = FragTrap::hit_points;
	// max_hit_points = NinjaTrap::max_hit_points;
	// energy_points = NinjaTrap::energy_points;
	// max_energy_points = NinjaTrap::max_energy_points;
	// melee_attack_damage = NinjaTrap::melee_attack_damage;
	// ranged_attack_damage = FragTrap::ranged_attack_damage;
	// armor_damage_reduction = FragTrap::armor_damage_reduction;
	std::cout << "SuperTrap " << name << " pour vous servir.\n";
}

SuperTrap::~SuperTrap()
{
	std::cout << name << " : \"C'est reeegle!\"\n";
}

SuperTrap::SuperTrap(SuperTrap const &to_copy)
{
	std::cout << "Copy constructor called\n";
	operator=(to_copy);
	//*this = to_copy;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &to_copy)
{
	if (this != &to_copy)
	{
		ClapTrap::operator=(to_copy);
	}
	return *this;
}

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}

void SuperTrap::get_hit_points(void)
{
	std::cout << "SUperTrap has " << this->hit_points << std::endl;
}
