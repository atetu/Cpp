#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	nb_contacts = 0;
}

void	Phonebook::add_contact(void)
{
	if (nb_contacts == 8)
	{
		std::cout << "The Phonebook is full; no possibility of adding new contacts\n";
		return;
	}
	else
	{
		contacts[nb_contacts].get_info();
		nb_contacts++;
	}
	return;
}

void	print_header(void)
{
	std::string fields[4] = {"Index", "First name", "Last Name", "Nickname"};

	std::cout << "Available contacts:\n";
	for (int i= 0; i < 4; i++)
	{
		std::cout << std::setw(10);
		std::cout << fields[i];
		if (i != 3)
			std::cout << "|";
	}
	std::cout << "\n";
}

bool	check_contact(int nb_contacts)
{
	if (nb_contacts == 0)
	{
		std::cout << "No available contact - PLeasse add a contact\n";
		return false;
	}
	return true;
}

void	Phonebook::search_contact(void)
{
	int	index;

	index = 0;
	if (!(check_contact(nb_contacts)))
		return;
	print_header();
	for (int j = 0; j < nb_contacts; j++)
	{
		std::cout << std::setw(10);
		std::cout << j + 1 ;
		contacts[j].display_info();
	}
	std::cout << "Please enter contact's index: ";
	std::cin >> index;
	while (index <= 0 || index > nb_contacts)
	{
		std::cout << "Wrong entry -Please enter contact's index: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> index;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	contacts[index - 1].print_info();
	return;
}
