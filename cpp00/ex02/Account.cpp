/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:20:24 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/04/28 20:53:33 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	this->_accountIndex = this->_nbAccounts++;
	this->_amount += initial_deposit;
	this->_totalAmount+=this->_amount;
	std::cout << "index:" << this->_accountIndex <<
	";amount:" << this->_amount << ";created" << std::endl;
}
Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:"
	<< checkAmount() << ";closed" << std::endl;
	_nbAccounts--;
	_totalAmount-= checkAmount();

}

void printTwoDigits(int value)
{
	if (value < 10)
		std::cout << '0';
	std::cout << value;
}
//std::cout << "[19920104_091532] ";
void	Account::_displayTimestamp( void )
{
	std::time_t time = std::time(NULL);
	std::tm local_time = *std::localtime(&time);
	std::cout << "[";
	printTwoDigits(local_time.tm_year + 1900);
	printTwoDigits(local_time.tm_mon + 1);
	printTwoDigits(local_time.tm_mday);
	std::cout << "_";
	printTwoDigits(local_time.tm_hour);
	printTwoDigits(local_time.tm_min);
	printTwoDigits(local_time.tm_sec);
	std::cout << "] ";
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts()
	<< ";total:" << Account::getTotalAmount() <<
	";deposits:" << Account::getNbDeposits() <<
	";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}
void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount()
	<< ";deposit:" << deposit << ";amount:" << checkAmount() + deposit <<";nb_deposits:"
	<< ++_nbDeposits << std::endl;
	_amount+= deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:"<< _accountIndex << ";p_amount:" << checkAmount()
	<< ";withdrawal:";
	if (withdrawal < 0 || withdrawal > checkAmount())
	{
		std::cout << "refused" << std::endl;
		return false;
	}
	else
	{
		std::cout << withdrawal << ";amount:" << checkAmount() - withdrawal
		<< ";nb_withdrawals:" << ++_nbWithdrawals << std::endl;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		return true;
	}
}
int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<
	";amount:" << checkAmount() << ";deposits:" << _nbDeposits <<
	";withdrawals:" << _nbWithdrawals << std::endl;
}

