#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat bob("bob", 80);
	std::cout << bob;

	ShrubberyCreationForm shrubbery("castle");
	std::cout << shrubbery.getName() << " - grade to sign : " << shrubbery.getGradeSign() << " - grade to execute: " << shrubbery.getGradeExecute();
	bob.executeForm(shrubbery);
	bob.signForm(shrubbery);
	bob.executeForm(shrubbery);

	RobotomyRequestForm robotomy("forest");
	std::cout << "\n" << robotomy.getName() << " - grade to sign : " << robotomy.getGradeSign() << " - grade to execute: " << robotomy.getGradeExecute() << "\n";
	bob.executeForm(robotomy);
	bob.signForm(robotomy);

	Bureaucrat jerry("Jerry", 40);
	std::cout << "\n" << jerry;
	jerry.signForm(robotomy);
	jerry.executeForm(robotomy);
	jerry.executeForm(robotomy);

	PresidentialPardonForm pardon("Gru");
	std::cout << "\n" << pardon.getName() << " - grade to sign : " << pardon.getGradeSign() << " - grade to execute: " << pardon.getGradeExecute() << "\n";
	jerry.signForm(pardon);
	jerry.executeForm(pardon);

	Bureaucrat boss("boss", 3);
	boss.signForm(pardon);
	boss.executeForm(pardon);
}
