#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include <sstream>
#include <fstream>

#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string const target);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &to_copy);
		void action() const;

	private:
		PresidentialPardonForm();
		const std::string _target;
};

#endif
