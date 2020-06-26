#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for action !\n";
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ...\n";
}

TacticalMarine::TacticalMarine(TacticalMarine const &to_copy)
{
	*this = to_copy;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &to_copy)
{
	(void) to_copy;
	return (*this);
}

ISpaceMarine *TacticalMarine::clone(void) const
{
	TacticalMarine *copy;
	copy = new TacticalMarine(*this);
	return (copy);
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the Holy PLOT!\n";
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *\n";
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *\n";
}
