#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : Form("Presidential Pardon Form", 25, 5), _target(target)
{
}


PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &to_copy) : Form(to_copy), _target(to_copy._target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &to_copy)
{
	if (this == &to_copy)
		return (*this);
	Form::operator=(to_copy);
	return (*this);
}

void PresidentialPardonForm::action() const
{
	std::cout << _target << " has been forgiven by Zafod Beeblebrox\n";
}
