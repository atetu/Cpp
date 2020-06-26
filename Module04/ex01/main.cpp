#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main()
{
	Character* moi = new Character("moi");
	std::cout << *moi;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	moi->equip(pr);
	std::cout << *moi;
	moi->equip(pf);
	moi->attack(b);
	std::cout << *moi;
	moi->equip(pr);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;
	
	delete moi;
	delete pr;
	delete pf;

	std::cout << "============"<< std::endl;
	PlasmaRifle plasma;
	PowerFist power;
	std::cout << "Plasma ~ AP Cost :" << plasma.getAPCost() << "\n";
	std::cout << "Plasma ~ Damage: " << plasma.getDamage() << "\n";
	std::cout << "Plasma ~ Attack: " << "\n";
	plasma.attack();
	std::cout << "Power ~ AP Cost: " << power.getAPCost() << "\n";
	std::cout << "Power ~ Damage: " << power.getDamage() << "\n";
	std::cout << "Power ~ Attack: " << "\n";
	power.attack();
	std::cout << "Creation of Enemy: " << std::endl;
	Enemy enemy(10, "Evil");
	enemy.takeDamage(20);
	std::cout << "Enemy type: " << enemy.getType() << "\n";
	std::cout << "HP after having taken 20 damages: " << enemy.getHP() << "\n";
	std::cout << "Creation of SuperMutant: " << std::endl;
	SuperMutant super;
	super.takeDamage(20);
	std::cout << "Type: " << super.getType() << "\n";
	std::cout << "HP after having taken 20 damages: " << super.getHP() << "\n";
	std::cout << "Creation of RadScorpion: " << std::endl;
	RadScorpion rad;
	rad.takeDamage(20);
	std::cout << "Type: " << rad.getType() << "\n";
	std::cout << "HP after having taken 20 damages: " << rad.getHP() << "\n";
*/
	return 0;
}
