#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string const name, const int grade_sign, const int grade_execute);
		~Form();
		Form(Form const &);
		Form &operator=(Form const &to_copy);
		bool getSigned() const;
		std::string const &getName() const;
		int getGradeSign() const;
		int getGradeExecute() const;
		bool beSigned(Bureaucrat &bureaucrat);
		void execute(Bureaucrat const &executor);
		virtual void action() const = 0;

	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};		
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};		

	private:
		Form();
		bool _signed;
		const std::string _name;
		const int _grade_sign;
		const int _grade_execute;
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif
