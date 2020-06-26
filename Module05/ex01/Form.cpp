#include "Form.hpp"

Form::Form(std::string const name, const int grade_sign, const int grade_execute) : _signed(false), _name(name), _grade_sign(grade_sign), _grade_execute(grade_execute)
{
	if (grade_sign < 1 || grade_execute < 1)
		throw GradeTooHighException();
	if (grade_sign > 150 || grade_execute > 150)
		throw GradeTooLowException();
}


Form::~Form()
{
}

Form::Form(Form const &to_copy) : _signed(to_copy._signed), _name(to_copy._name), _grade_sign(to_copy._grade_sign), _grade_execute(to_copy._grade_execute)
{
	if (to_copy._grade_sign < 1 || to_copy._grade_execute < 1)
		throw GradeTooHighException();
	if (to_copy._grade_sign > 150 || to_copy._grade_execute > 150)
		throw GradeTooLowException();
}

Form &Form::operator=(Form const &to_copy)
{
	_signed = to_copy._signed;
	return (*this);
}

bool Form::getSigned() const
{
	return (_signed);
}

const std::string &Form::getName() const
{
	return (_name);
}

int Form::getGradeSign() const
{
	return (_grade_sign);
}

int Form::getGradeExecute() const
{
	return (_grade_execute);
}

bool Form::beSigned(Bureaucrat &bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() < _grade_sign)
		{
			_signed = true;
			return (true);
		}	
		else 
			throw GradeTooLowException();
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what();
	}
	return (false);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Error: Grade too high\n");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Error: Grade too low\n");
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
	out << form.getName() << " is " << (form.getSigned()?"signed":"not signed") << ". It can be signed by a grade " << form.getGradeSign() << " and can be executed by a grade " << form.getGradeExecute() << ".\n";
	return (out);
}
