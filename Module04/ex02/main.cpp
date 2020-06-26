#include "Squad.hpp"
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << "=================" <<std::endl;
	AssaultTerminator *assault  = new AssaultTerminator;
	AssaultTerminator *assault2  = new AssaultTerminator;
	AssaultTerminator *assault3  = new AssaultTerminator;
	ISquad *squad = new Squad;
	TacticalMarine *tactical = new TacticalMarine;
	TacticalMarine *tactical2 = new TacticalMarine;
	TacticalMarine *tactical3 = new TacticalMarine;
	squad->push(assault);	
	squad->push(assault2);	
	squad->push(assault3);	
	squad->push(tactical);	
	squad->push(tactical2);	
	squad->push(tactical3);	
	for (int i = 0; i < squad->getCount(); ++i)
	{
		ISpaceMarine* c = squad->getUnit(i);
		c->battleCry();
		c->rangedAttack();
		c->meleeAttack();
	}
	delete squad;

	return 0;
}
