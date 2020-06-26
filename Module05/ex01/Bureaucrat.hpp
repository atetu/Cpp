#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(std::string const name, int grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &);
		Bureaucrat &operator=(Bureaucrat const &to_copy);
		std::string const &getName() const;
		int getGrade() const;
		void increaseGrade();
		void decreaseGrade();
		void signForm(Form &form);

	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};		
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};		

	private:
		Bureaucrat();
		const std::string _name;
		int _grade;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif
