#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() 
{
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	try
	{
		if (grade >= 1 && grade <=150)
			_grade = grade;
		else if (grade < 1)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();

	}
	catch (std::exception const &e)
	{
		std::cerr << e.what();
	}
}


Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &to_copy) : _name(to_copy._name)
{
	try 
	{	
		if (to_copy._grade >= 1 && to_copy._grade <= 150)
			_grade = to_copy._grade;
		else if (to_copy._grade < 1)
			throw GradeTooHighException();
		else if (to_copy._grade > 150)
			throw GradeTooLowException();
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what();
	}
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &to_copy)
{
	try 
	{	
		if (to_copy._grade >= 1 && to_copy._grade <= 150)
			_grade = to_copy._grade;
		else if (to_copy._grade < 1)
			throw GradeTooHighException();
		else if (to_copy._grade > 150)
			throw GradeTooLowException();
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what();
	}
	return (*this);
}

const std::string &Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}
void Bureaucrat::increaseGrade()
{
	try
	{
		_grade--;
		if (_grade < 1)
			throw GradeTooHighException();
	}
	catch(std::exception const& e)
	{
		std::cerr << e.what();
	}

}

void Bureaucrat::decreaseGrade()
{
	try
	{
		_grade++;
		if (_grade > 150)
			throw GradeTooLowException();
	}
	catch(std::exception const& e)
	{
		std::cerr << e.what();
	}

}

void Bureaucrat::signForm(Form &form)
{
	if (form.getSigned())
	{
		std::cout << "the form is already signed.\n";
		return;
	}
	if (form.beSigned(*this) == true)
		std::cout << _name << " signs " << form.getName() << ".\n";
	else
		std::cout << _name << " can't sign " << form.getName() << " because his grade is too low.\n";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: Grade too high\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: Grade too low\n");
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".\n";
	return (out);
}
