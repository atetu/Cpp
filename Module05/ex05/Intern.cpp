#include "Intern.hpp"


static Form* createShrubberyForm(std::string const &target);
static Form* createRobotomyRequestForm(std::string const &target);
static Form* createPresidentialPardonForm(std::string const &target);

std::string const Intern::forms[3] = {
	"shrubbery creation",
	"robotomy request",
	"presidential pardon"
};

Intern::Intern() 
{
}

Intern::~Intern()
{
}

Intern::Intern(Intern const &to_copy)
{
	(void)to_copy;
}

Intern &Intern::operator=(Intern const &to_copy)
{
	(void)to_copy;
	return (*this);
}

Form *Intern::makeForm(std::string const &name_form, std::string const &target)
{
	typedef Form* (*func)(std::string const &target);
	func functions[3];
	functions[0] = &createShrubberyForm;
	functions[1] = &createRobotomyRequestForm;
	functions[2] = &createPresidentialPardonForm;
	for (int i = 0; i < 3; i++)
	{
		if (name_form.compare(forms[i]) == 0)
		{
			std::cout << "intern creates " << name_form << "\n";
			return (functions[i])(target);	
		}
	}
	std::cout << "file name not recognized\n";
	return 0;
}

static Form *createShrubberyForm(std::string const &target)
{
	ShrubberyCreationForm *shrubbery;
	shrubbery = new ShrubberyCreationForm(target);
	return (shrubbery);
}

static Form *createRobotomyRequestForm(std::string const &target)
{
	RobotomyRequestForm *robotomy;
	robotomy = new RobotomyRequestForm(target);
	return (robotomy);
}

static Form *createPresidentialPardonForm(std::string const &target)
{
	PresidentialPardonForm *pardon;
	pardon = new PresidentialPardonForm(target);
	return (pardon);
}

/*
const char *Intern::GradeTooHighException::what() const throw()
{
	return ("Error: Grade too high\n");
}

const char *Intern::GradeTooLowException::what() const throw()
{
	return ("Error: Grade too low\n");
}

const char *Intern::FormIsNotSignedException::what() const throw()
{
	return ("Error: Form is not signed\n");
}

std::ostream &operator<<(std::ostream &out, Intern const &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".\n";
	return (out);
}*/
