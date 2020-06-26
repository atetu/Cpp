#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	public:
		Contact();
		void get_info();
		void display_info();
		void print_info();

	private:
		std::string info[11];

		enum data {
			FirstName = 0,
			LastName,
			Nickname,
			Login,
			Address,
			Email,
			Phone,
			Birthday,
			Meal,
			Underwear,
			Secret
		};
		
};
#endif
