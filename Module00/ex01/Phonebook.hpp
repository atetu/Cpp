#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class	Phonebook
{
	public:
		Phonebook();
		void	add_contact(void);
		void	search_contact(void);
	
	private:
		Contact contacts[8];
		int	nb_contacts;
};
#endif
