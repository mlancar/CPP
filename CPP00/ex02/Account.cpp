/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:27:00 by malancar          #+#    #+#             */
/*   Updated: 2024/01/04 17:40:08 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

//Static members exist as members of the class rather than as an instance in each object of the class.
//So, this keyword is not available in a static member function. Such functions may access only static data members.
//There is a single instance of each static data member for the entire class, which should be initialized,
//usually in the source file that implements the class member functions. 
//Because the member is initialized outside the class definition
//we must use fully qualified name when we initialize it:

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit): _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount" << _amount;
	std::cout << ";created" << std::endl;
	_nbAccounts++;
	_totalAmount = _totalAmount + _amount;
}

Account::~Account()
{
		std::cout << "index:" << _accountIndex;
		std::cout << ";amount" << _amount;
		std::cout <<  ";closed" << std::endl;
		_nbAccounts--;
}

int	Account::getNbAccounts()
{
	return _nbAccounts;
}

int	Account::getTotalAmount()
{
	return _totalAmount;
}

int	Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos()
{
	
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
	
	std::cout << "index:" << getNbAccounts();//commence a 8au lieu de 0
	std::cout << ";amount:" << getTotalAmount() ;//total amount et pas _amount de chaque account
	//std::cout << ";amount:" << 
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrwawals:" << getNbWithdrawals() << std::endl;
	
}

void Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	_amount =  _amount + deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > _amount)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return 0;
	}
	return 1;
}

int	Account::checkAmount() const
{
	return _amount;
}

void	Account::displayStatus() const
{
		std::cout << "index:" << _nbAccounts;
		std::cout << ";p_amount:" << getTotalAmount();
		std::cout << ";deposits:" << getNbDeposits();//deposit
		std::cout << ";amount:" << getTotalAmount();
		std::cout << ";nb_deposits:" << getNbDeposits() << std::endl;
		
}

void	Account::_displayTimestamp()
{
	
}