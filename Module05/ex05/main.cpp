#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include "CentralBureaucracy.hpp"

std::string name()
{
	static std::string const alphabet = "abcdefghijklmnopqrstuvxyz";
	static size_t alphabetLength = alphabet.length();
	std::stringstream ss;

	for (int j = 0; j < 10; j++)
		ss << alphabet[rand() % alphabetLength];
	return (ss.str());
}


int main()
{
	CentralBureaucracy central;
	Bureaucrat *bureaucrats[20];

	for (int i = 0; i < 20; i++)
	{
		bureaucrats[i] = new Bureaucrat(name(), (rand() % 150 + 1));
		central.feed(bureaucrats[i]);
	}
	for (int i = 0; i < 20; i++)
		central.queueUp(name());
	for (int i = 0; i < 20; i++)
		central.doBureaucracy();
}
