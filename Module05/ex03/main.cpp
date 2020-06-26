#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	Form* rrf;
	Form* sc;
	Form* pp;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	Bureaucrat jerry("Jerry", 40);
	std::cout << jerry;
	jerry.signForm(*rrf);
	jerry.executeForm(*rrf);
	jerry.executeForm(*rrf);
	sc = someRandomIntern.makeForm("shrubbery creation", "Whatever");
	jerry.signForm(*sc);
	jerry.executeForm(*sc);
	pp = someRandomIntern.makeForm("presidential pardon", "Jeff");
	jerry.signForm(*pp);
	jerry.executeForm(*pp);
}
