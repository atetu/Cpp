#include "CentralBureaucracy.hpp"

CentralBureaucracy::CentralBureaucracy() : _nb_blocks(0)
{
	for (int i = 0; i< 20; i++)
	{
		_block[i] = new OfficeBlock();
		_intern[i] = new Intern();
		_block[i]->setIntern(*_intern[i]);
	}
}

CentralBureaucracy::~CentralBureaucracy()
{
	for (int i = 0; i< _nb_blocks; i++)
		delete _block[i];
}

void CentralBureaucracy::feed(Bureaucrat *bureaucrat)
{
	if (_nb_blocks > 19)
		std::cout<< "not enough place.\n";
	else
	{
		if (_block[_nb_blocks]->getSigner() == 0)
			_block[_nb_blocks]->setSigner(*bureaucrat);
		else
		{
			_block[_nb_blocks]->setExecutor(*bureaucrat);
			_nb_blocks++;
		}
	}
}

void CentralBureaucracy::queueUp(std::string target)
{
	std::ostringstream ss;
	ss <<_queue << " " << target;
	_queue.clear();
	_queue = ss.str();
}

void CentralBureaucracy::doBureaucracy()
{
	static std::string actions[3] = {
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};
	for (int i = 0; i < _nb_blocks; i++)
	{
		size_t found;
		found = _queue.find(" ");
		std::string target;
		target = _queue.substr(0, found);
		int act = (rand() % 3);
		std::string form = actions[act];
		_queue = _queue.substr(found+1, _queue.size());
		_block[i]->doBureaucracy(form, target);
	}

}
