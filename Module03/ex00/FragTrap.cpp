#include "FragTrap.hpp"


typedef void(FragTrap::* attack) (std::string const &target);

FragTrap::FragTrap(std::string n) : hit_points(100), max_hit_points(100), energy_points(100), max_energy_points(100), level(1), name(n), melee_attack_damage(30), ranged_attack_damage(20), armor_damage_reduction(5)
{
	std::cout << "Bonjour, je suis votre nouveau robot multifonction.\n";
}

FragTrap::~FragTrap()
{
	std::cout << name << " est finalement detruit. \"Je suis mort, je suis mort. Oh mon dieu, je suis mort\" gemit-il dans un dernier soupir.\n";
}

FragTrap::FragTrap(FragTrap const &to_copy)
{
	std::cout << "Copy constructor called\n";
	operator=(to_copy);
}

FragTrap &FragTrap::operator=(FragTrap const &to_copy)
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

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G " << name << " attaque " << target << " a distance, causant "<< ranged_attack_damage << " points de degats! Ya des trucs qu'explosent, tout ça.\n";
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G " << name << " attaque " << target << " au corps a corps causant "<< melee_attack_damage << " points de degats! Les dégâts rapprochés, ya que ça de vrai!\n";
}

void FragTrap::takeDamage(unsigned int amount)
{
	hit_points = amount - armor_damage_reduction;
	if (hit_points < 0)
		hit_points = 0;
	std::cout << name << " est blesse. Sa roue fait de l'électricité statique. Il subit " << amount << " points de degats.\n";
}

void FragTrap::beRepaired(unsigned int amount)
{
	hit_points += amount;
	energy_points += amount;
	if (hit_points > max_hit_points)
		hit_points = max_hit_points;
	if (energy_points > max_energy_points)
		energy_points = max_energy_points;
	std::cout << name << " va en reparation. \"Hahaha, hahaha, je ressuscite\" s'exclame-t-il.\n";
	std::cout << name << " dispose desormais de " << hit_points << " points de frappe et de " << energy_points << " points d'energie.\n";
}

void FragTrap::roi_de_la_savate(std::string const &target)
{
	std::cout << "Attaque de " << target << " par la fameuse techniaue du 'Roi de la savate'.\n";
}

void FragTrap::grenade_de_la_colere(std::string const &target)
{
	std::cout << name << " lance sur " << target << " sa grenade de la colere.\n";
}

void FragTrap::le_bonheur_des_flingues(std::string const &target)
{
	std::cout << "Au bonheur des flingues! Salve de tirs de la part de " << name << " sur " << target << ".\n";
}

void FragTrap::douleur_douloureuse(std::string const &target)
{
	std::cout << target << " subit la Douleur douloureuse lancee par " << name << ".\n";
}

void FragTrap::triple_debit(std::string const &target)
{
	std::cout << "Triple debit de tirs sur " << target << " de la part de " << name << ".\n";
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int index;

	attack type[] = {
		&FragTrap::roi_de_la_savate, 
		&FragTrap::grenade_de_la_colere, 
		&FragTrap::le_bonheur_des_flingues,
		&FragTrap::douleur_douloureuse, 
		&FragTrap::triple_debit};

	//std::default_random_engine generator;
//	std::uniform_int_distribution<int> distribution(0,4);
//	index = distribution(generator);
	index = rand() % 5;

	energy_points -= 25;
	if (energy_points <= 0)
	{
		std::cout << "Tentative d'une nouvelle attaque super destructice contre " << target << " mais plus assez d'energie pour la mener... Quelqu'un aurait-il un cafe noir comme mon ame en stock...?\n";
		energy_points = 0;
		return;
	}
	(this->*type[index])(target);
}
