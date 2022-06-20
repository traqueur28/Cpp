/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 08:44:20 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/20 10:30:27 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include "iostream"
#include <time.h>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit):_amount(initial_deposit)
{
    Account::_displayTimestamp();
    std::cout << "index:" << _nbAccounts;
    std::cout << ";amount:" << _amount;
    this->_accountIndex = _nbAccounts;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount+= this->_amount; 
	std::cout << ";created" << std::endl;
}

Account::~Account(void)
{
    Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ":closed" << std::endl;
}

void    Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts();
    std::cout << ";total:" << Account::getTotalAmount();
    std::cout << ";deposits:" << Account::getNbDeposits();
    std::cout << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void    Account::displayStatus() const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->checkAmount();
    std::cout << ";deposits:" << this->_nbDeposits;
    std::cout << ";withdrawals:" <<this->_nbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";p_amount:" << this->checkAmount();
    std::cout << ";deposit:" << deposit;
    this->_amount += deposit;
    std::cout << ";amount:" << this->checkAmount();
    this->_nbDeposits++;
    Account::_totalNbDeposits++;
    Account::_totalAmount += deposit;
    std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";p_amount:" << this->checkAmount();
    std::cout << ";withdrawal:";
    if (withdrawal > this->checkAmount())
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    std::cout << withdrawal;
    this->_amount -= withdrawal;
    std::cout << ";amount:" << this->checkAmount();
    this->_nbWithdrawals++;
    Account::_totalNbWithdrawals++;
    Account::_totalAmount -= withdrawal;
    std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return (true);
}

void    Account::_displayTimestamp()
{
    time_t res;
	struct tm *timer;
	
	time(&res);
	timer = localtime(&res);
    std::cout << "[";
    std::cout << timer->tm_year + 1900;
    if (timer->tm_mon < 10)
        std::cout << "0";
    std::cout << timer->tm_mon;
    if (timer->tm_mday < 10)
        std::cout << "0";
    std::cout << timer->tm_mday << "_";
    if (timer->tm_hour < 10)
        std::cout << "0";
    std::cout << timer->tm_hour;
    if (timer->tm_min < 10)
        std::cout << "0";
    std::cout << timer->tm_min;
    if (timer->tm_sec < 10)
        std::cout << "0";
    std::cout << timer->tm_sec;
    std::cout << "] ";
}

int Account::checkAmount(void) const
{
    return (this->_amount);
}

int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (Account::_totalNbWithdrawals);
}
