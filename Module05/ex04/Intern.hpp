#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include <exception>

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(Intern const &);
		Intern &operator=(Intern const &to_copy);
		Form *makeForm(std::string const &name_form, std::string const &target);

	private:
		static const std::string forms[3];	
};
#endif
