#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"



int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* moi = new Character("moi");
	AMateria* tmp1;
	AMateria* tmp2;
	AMateria* tmp3;
	AMateria* tmp4;
	tmp1 = src->createMateria("ice");
	moi->equip(tmp1);
	tmp2 = src->createMateria("cure");
	moi->equip(tmp2);
	tmp3 = src->createMateria("fire");
	moi->equip(tmp3);
	tmp4 = src->createMateria("wind");
	moi->equip(tmp4);
	moi->equip(tmp4);
	moi->equip(nullptr);

	ICharacter* bob = new Character("bob");
	std::cout << "XP: " << tmp1->getXP() << std::endl;
	moi->use(0, *bob);
	std::cout << "XP: " << tmp1->getXP() << std::endl;
	std::cout << "XP: " << tmp2->getXP() << std::endl;
	moi->use(1, *bob);
	std::cout << "XP: " << tmp2->getXP() << std::endl;
	moi->use(2, *bob);
	moi->use(3, *bob);
	moi->use(4, *bob);
	moi->use(5, *bob);
	delete bob;
	delete moi;
	delete src;
	return 0;
}
