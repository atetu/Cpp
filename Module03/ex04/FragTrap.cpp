#include "FragTrap.hpp"


typedef void(FragTrap::* attack) (std::string const &target);

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(std::string n) : ClapTrap(n)
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
	operator=(to_copy);
	//*this = to_copy;
}

FragTrap &FragTrap::operator=(FragTrap const &to_copy)
{
	if (this != &to_copy)
	{
		ClapTrap::operator=(to_copy);
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
