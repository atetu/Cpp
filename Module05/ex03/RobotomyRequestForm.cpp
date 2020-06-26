#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : Form("Robotomy Request Form", 72, 45), _target(target)
{
}


RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &to_copy) : Form(to_copy), _target(to_copy._target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &to_copy)
{
	if (this == &to_copy)
		return (*this);
	Form::operator=(to_copy);
	return (*this);
}

void RobotomyRequestForm::action() const
{
	if ((rand() % 4) >= 2)
		std::cout << "*** Brrrrr ~ " << _target << " robotomized ***\n";
	else
		std::cout << "*** Brrrrr ~ " << " failed to robotomize " << _target << " ***\n";
}
