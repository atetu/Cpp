#include "Contact.hpp"
#include "Phonebook.hpp"

int main(void)
{
	Phonebook phonebook;
	std::string command;
	
	while(1)
	{
		std::cout << "Please enter one of the next commands: ADD, SEARCH or EXIT)\n";
		std::getline(std::cin, command);
		if (command.compare("ADD") == 0)
			phonebook.add_contact();	
		else if (command.compare("SEARCH") == 0)
			phonebook.search_contact();
		else if (command.compare("EXIT") == 0)
			return 0;
		else
			std::cout << "Wrong command\n";
	}
}
