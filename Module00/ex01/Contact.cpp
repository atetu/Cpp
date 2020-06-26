#include "Contact.hpp"

std::string fields[11] = {
		"First Name",
		"Last Name",
		"Nickname",
		"Login",
		"Address",
		"E-mail",
		"Phone",
		"Birthday",
		"Favorite Meal",
		"Underwear Color",
		"Darkest Secret"
	};

Contact::Contact()
{
}	

void	Contact::get_info()
{
	for (int i = FirstName; i <= Secret; i++)
	{
		std::cout << fields[i] << ": ";
		std::getline(std::cin, info[i]);
		while (info[i].compare("") == 0)
		{
			std::cout << "Please enter a non void entry\n";
			std::cout << fields[i] << ": ";
			std::getline(std::cin, info[i]);
		}
	}	
}

void	Contact::display_info()
{
	for (int i = 0; i < 3; i++)
	{
		std::cout << "|";
		if (info[i].length() > 10 )
		{
			
			std::cout << std::setw(10);
			std::cout << info[i].substr(0, 9) << ".";
		}
		else
		{
			std::cout << std::setw(10);
			std::cout << info[i];
		}
	}
	std::cout << "\n";
}

void	Contact::print_info()
{
	for (int i = FirstName; i <= Secret; i++)
		std::cout << fields[i] << ": " << info[i] << "\n";

}
