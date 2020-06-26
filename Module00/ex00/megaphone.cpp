#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 0)
		return 0;
	else if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" ;
	else
	{
		for (int j = 1 ; j < argc; j++)
		{
			for (size_t i = 0; i < strlen(argv[j]); i++)
				std::cout << char(toupper(argv[j][i]));
			if (j < argc - 1)
				std::cout << " ";
		}
	}
	std::cout << std::endl;
	return 0;	
}
