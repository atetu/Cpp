#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
}

NinjaTrap::NinjaTrap(std::string n) : ClapTrap(n)
{
	hit_points = 60;
       	max_hit_points = 60;
	energy_points = 120;
	max_energy_points = 120;
	melee_attack_damage = 60;
	ranged_attack_damage = 5;
	armor_damage_reduction = 0;
	std::cout << "NinjaTrap " << name << " pret.\n";
}

NinjaTrap::~NinjaTrap()
{
	std::cout << name << " : \"Tchit, boum.\"\n";
}

NinjaTrap::NinjaTrap(NinjaTrap const &to_copy)
{
	std::cout << "Copy constructor called\n";
	operator=(to_copy);
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &to_copy)
{
	if (this != &to_copy)
		ClapTrap::operator=(to_copy);
	return *this;
}

void NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "NINJATRAP " << name << " attaque " << target << " a distance, causant "<< ranged_attack_damage << " points de degats! Quel magnifique tir!\n";
}

void NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "NINJATRAP " << name << " attaque " << target << " au corps a corps causant "<< melee_attack_damage << " points de degats! Le tonnerre va frapper\n";
}

void NinjaTrap::ninjaShoebox(ClapTrap &obj)
{
	std::cout << "Lancer de chaussures pestilentielles par NinjaTrap " << name << " sur ClapTrap " << obj.get_name() << ".\n";
	obj.takeDamage(ranged_attack_damage);
}

void NinjaTrap::ninjaShoebox(FragTrap &obj)
{
	std::cout << "Attaque pieds nus par NinjaTrap " << name << " sur FragTrap " << obj.get_name() << ".\n";
	obj.takeDamage(melee_attack_damage);
}

void NinjaTrap::ninjaShoebox(ScavTrap &obj)
{
	std::cout << "Vol de chaussures par NinjaTrap " << name << " sur ScavTrap " << obj.get_name() << ".\n";
	obj.takeDamage(ranged_attack_damage);
}

void NinjaTrap::ninjaShoebox(NinjaTrap &obj)
{
	std::cout << "Attaque sur la pointe des pieds par NinjaTrap " << name << " sur NinjaTrap " << obj.get_name() << ".\n";
	obj.takeDamage(ranged_attack_damage);
}
