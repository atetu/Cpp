#include "Cat.hpp"

int main(int argc, char **argv)
{
	Cat cat;
	if (argc == 1)
	{
		cat.console();
	}
	else if (argc >= 2)
	{
		for (int i = 1; i < argc; i++)
			cat.file(argv[i]);
	}
}
