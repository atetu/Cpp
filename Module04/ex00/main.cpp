#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Muggle.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << "=============" <<std::endl;
	Sorcerer merlin("Merlin", "magus");
	std::cout<< merlin;
	Victim kitten("Kitten");
	std::cout << kitten;
	merlin.polymorph(kitten);
	Peon knight("Knight");
	Muggle horace("Horace");
	robert.polymorph(horace);
	return 0;
}
