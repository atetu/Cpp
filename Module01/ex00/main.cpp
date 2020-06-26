#include "Pony.hpp"
#include <stack>

void	ponyOnTheStack(void)
{
	Pony pony1("black", 110);
	pony1.display();
	pony1.eat(10);
	pony1.walk(5);
}

Pony	*ponyOnTheHeap(void)
{
	Pony *pony2;
	pony2 = new Pony("white", 150);
	pony2->display();
	pony2->eat(3);
	pony2->walk(15);
	delete pony2;
	pony2 = NULL;
	return pony2;
}

int main (void)
{
	Pony *pony;
	
	std::cout << "----PonyOnTheStack----\n";
	ponyOnTheStack();
	std::cout << "\n----PonyOnTheHeap----\n";
	pony = ponyOnTheHeap();
}
