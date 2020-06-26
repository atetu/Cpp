#include <iostream>
#include "Account.class.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount+= initial_deposit;
	std::cout << "[" << getTime() << "] ";
	std::cout << "index:" <<_accountIndex << ";amount:" << _amount << ";created" << std::endl;
}	

Account::~Account()
{
	_nbAccounts--;
	_totalAmount -= _amount;
	std::cout << "[" << getTime() << "] ";
	std::cout << "index:" <<_accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::displayAccountsInfos(void)
{
	std::cout << "[" << getTime() << "] ";
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount<< ";deposits:" << _totalNbDeposits << ";withdrawals:" <<_totalNbWithdrawals <<std::endl;
}

void Account::displayStatus(void) const
{
	std::cout << "[" << getTime() << "] ";
	std::cout << "index:" << _accountIndex << ";amount:" << _amount<< ";deposits:" << _nbDeposits << ";withdrawals:" <<_nbWithdrawals <<std::endl;
}

void Account::makeDeposit(int deposit)
{
	std::cout << "[" << getTime() << "] ";
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount<< ";deposits:" << deposit << ";amount:" ;
	_amount += deposit;
	_nbDeposits++;
	std::cout << _amount << "nb_deposits:" <<_nbDeposits <<std::endl;
	_totalAmount+= deposit;
	_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
	std::cout << "[" << getTime() << "] ";
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount<< ";withdrawal:" ;
	if (withdrawal <= _amount)
	{
		std::cout<< withdrawal<< ";amount:" ;
		_amount -= withdrawal;
		std::cout << _amount << ";nb_withdrawals:";
		_nbWithdrawals++;
		std::cout<<_nbWithdrawals <<std::endl;
		_totalAmount-= withdrawal;
		_totalNbWithdrawals++;
		return true;
	}
	else
		std::cout << "refused" << std::endl;
	return false;
}

std::string Account::getTime()
{
	std::time_t now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

	std::string s(30, '\0');
	std::strftime(&s[0], s.size(), "%Y%m%d_%H%M%S", std::localtime(&now));
	return s;
}
