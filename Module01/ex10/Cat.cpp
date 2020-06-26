#include "Cat.hpp"

void Cat::console()
{
	std::string text;
	std::getline(std::cin, text);
	std::cout << text << std::endl;
}

void Cat::file(std::string filename)
{
	std::ifstream file_srcs(filename);
	std::string line;
	if (file_srcs)
	{
		while (std::getline(file_srcs, line))
			std::cout << line << std::endl;
	}
	else
		std::cout << "Error: could not open file.\n";
}
