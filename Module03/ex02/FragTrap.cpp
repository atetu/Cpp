#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(100, 100, 100, 100, 1, "no name", 30, 20, 5)
{
	std::cout << "FragTrap " << name << " ici present.\n";
}

FragTrap::FragTrap(std::string n) : ClapTrap(100, 100, 100, 100, 1, n, 30, 20, 5)
{
	std::cout << "FragTrap " << name << " ici present.\n";
}

FragTrap::~FragTrap()
{
	std::cout << name << " : \"Je suis mort, je suis mort. Oh mon dieu, je suis mort!\"\n";
}

FragTrap::FragTrap(FragTrap const &to_copy)
{
	std::cout << "Copy constructor called\n";
	*this = to_copy;
}

FragTrap &FragTrap::operator=(FragTrap const &to_copy)
{
	if (this != &to_copy)
		ClapTrap::operator=(to_copy);
	return (*this);
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G " << this->name << " attaque " << target;
	std::cout << " a distance, causant " << this->ranged_attack_damage;
	std::cout << " points de degats! Ya des trucs qu'explosent, tout ça.\n";
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G " << this->name << " attaque " << target;
	std::cout << " au corps a corps causant " << this->melee_attack_damage;
	std::cout << " points de degats! Les dégâts rapprochés, ya que ça de vrai!\n";
}

void FragTrap::roi_de_la_savate(std::string const &target)
{
	std::cout << "Attaque de " << target << " par la fameuse techniaue du 'Roi de la savate'.\n";
}

void FragTrap::grenade_de_la_colere(std::string const &target)
{
	std::cout << this->name << " lance sur " << target << " sa grenade de la colere.\n";
}

void FragTrap::le_bonheur_des_flingues(std::string const &target)
{
	std::cout << "Au bonheur des flingues! Salve de tirs de la part de ";
	std::cout << this->name << " sur " << target << ".\n";
}

void FragTrap::douleur_douloureuse(std::string const &target)
{
	std::cout << target << " subit la Douleur douloureuse lancee par " << this->name << ".\n";
}

void FragTrap::triple_debit(std::string const &target)
{
	std::cout << "Triple debit de tirs sur " << target << " de la part de " << this->name << ".\n";
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

	index = rand() % 5;

	this->energy_points -= 25;
	if (this->energy_points <= 0)
	{
		std::cout << "Tentative d'une nouvelle attaque super destructice contre " << target << " mais plus assez d'energie pour la mener... Quelqu'un aurait-il un cafe noir comme mon ame en stock...?\n";
		this->energy_points = 0;
		return;
	}
	(this->*type[index])(target);
}
