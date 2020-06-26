#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock() : _sign(nullptr), _execute(nullptr), _intern(nullptr)
{
}

OfficeBlock::OfficeBlock(Bureaucrat &sign, Bureaucrat &execute, Intern &intern) : _sign(&sign), _execute(&execute), _intern(&intern)
{
}


OfficeBlock::~OfficeBlock()
{
}

void OfficeBlock::setIntern(Intern &intern)
{
	_intern = &intern;
}

void OfficeBlock::setSigner(Bureaucrat &sign)
{
	_sign = &sign;
}

void OfficeBlock::setExecutor(Bureaucrat &execute)
{
	_execute = &execute;
}

void OfficeBlock::doBureaucracy(std::string form, std::string target)
{
	if (_sign == 0 || _execute == 0 || _intern == 0)
	{
		std::cout << "At least one place in the block is missing ~ No bureaucracy can be done.\n" << std::endl;
	}
	Form *f;
	f = _intern->makeForm(form, target);
	if (f == 0)
		return;
	_sign->signForm(*f);
	_execute->executeForm(*f);
}
