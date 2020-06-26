#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main()
{
	/*	Bureaucrat bob("bob", 80);
		std::cout << bob;

		ShrubberyCreationForm shrubbery("castle");
		std::cout << shrubbery.getName() << " - grade to sign : " << shrubbery.getGradeSign() << " - grade to execute: " << shrubbery.getGradeExecute() << "\n";
		bob.executeForm(shrubbery);
		bob.signForm(shrubbery);
		bob.executeForm(shrubbery);
		RobotomyRequestForm robotomy("forest");
		std::cout << robotomy.getName() << " - grade to sign : " << robotomy.getGradeSign() << " - grade to execute: " << robotomy.getGradeExecute() << "\n";
		bob.executeForm(robotomy);
		bob.signForm(robotomy);
		Bureaucrat jerry("Jerry", 40);
		std::cout << jerry;
		jerry.signForm(robotomy);
		jerry.executeForm(robotomy);
		jerry.executeForm(robotomy);
		PresidentialPardonForm pardon("Gru");
		std::cout << pardon.getName() << " - grade to sign : " << pardon.getGradeSign() << " - grade to execute: " << pardon.getGradeExecute() << "\n";
		jerry.signForm(pardon);
		jerry.executeForm(pardon);
		Bureaucrat boss("boss", 3);
		boss.signForm(pardon);
		boss.executeForm(pardon);*/
//	Intern someRandomIntern;
	//	Form* rrf;
	//	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
//	Bureaucrat jerry("Jerry", 40);
	//	std::cout << jerry;
	///	jerry.signForm(*rrf);
	//	jerry.executeForm(*rrf);
	//	jerry.executeForm(*rrf);
//	Bureaucrat bob("bob", 80);
//	OfficeBlock office(&bob, &jerry, &someRandomIntern);
//	office.doBureaucracy("robotomy request", "Bender");

	Intern idiotOne;
	Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
	Bureaucrat bob = Bureaucrat("Bobby Bobson", 50);
	OfficeBlock ob;
	ob.setIntern(idiotOne);
	ob.setSigner(bob);
	ob.setExecutor(hermes);
	try
	{
		ob.doBureaucracy("mutant pig termination", "Pigley");
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		ob.doBureaucracy("robotomy request", "Pigley");
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		ob.doBureaucracy("shrubbery creation", "Pigley");
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		ob.doBureaucracy("presidential pardon", "Pigley");
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}
