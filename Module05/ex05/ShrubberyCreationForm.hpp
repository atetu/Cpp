#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include <sstream>
#include <fstream>

#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string const target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &to_copy);
		void action() const;

	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};		
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};		

	private:
		ShrubberyCreationForm();
		const std::string _target;
		static std::string const _tree[17];
};

#endif
