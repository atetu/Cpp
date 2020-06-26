#ifndef CENTRALBUREAUCRACY_HPP
#define CENTRALBUREAUCRACY_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <exception>
#include "Form.hpp" 
#include "Bureaucrat.hpp" 
#include "Intern.hpp" 
#include "OfficeBlock.hpp" 


class CentralBureaucracy
{
	public:
		CentralBureaucracy();
		~CentralBureaucracy();
		void feed(Bureaucrat *bureaucrat);
		void queueUp(std::string Target);
		void doBureaucracy();

	private:
		OfficeBlock *_block[20];
		Intern *_intern[20];
		int _nb_blocks;
		std::string _queue;
};

#endif
