#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include <sstream>
#include <fstream>

#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string const target);
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const &);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &to_copy);
		void action() const;

	private:
		RobotomyRequestForm();
		const std::string _target;
};

#endif
