#ifndef OFFICEBLOCK_HPP
#define OFFICEBLOCK_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp" 
#include "Bureaucrat.hpp" 
#include "Intern.hpp" 


class OfficeBlock
{
	public:
		OfficeBlock();
		OfficeBlock(Bureaucrat &sign, Bureaucrat &execute, Intern &intern);
		~OfficeBlock();
		
		void setIntern(Intern &intern);
		void setSigner(Bureaucrat &sign);
		void setExecutor(Bureaucrat &execute);
		Bureaucrat *getSigner();
		void doBureaucracy(std::string form, std::string target);

	private:
		OfficeBlock(OfficeBlock const &);
		OfficeBlock &operator=(OfficeBlock const &to_copy);
		Bureaucrat *_sign;
		Bureaucrat *_execute;
		Intern *_intern;
};

#endif
