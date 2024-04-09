/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:31:39 by arabelo-          #+#    #+#             */
/*   Updated: 2024/04/09 19:11:46 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Account.hpp>
# include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initialDeposit) {
	_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	_totalAmount += initialDeposit;
	_amount = initialDeposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "created" << std::endl;
}

Account::~Account(void) {
	_nbAccounts -= 1;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "closed" << std::endl;
}

int	Account::getNbAccounts(void) {
	return (_nbAccounts);
}

int	Account::getTotalAmount(void) {
	return (_totalAmount);
}

int	Account::getNbDeposits(void) {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) {
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp(void) {
	time_t now = time(0);
	struct tm *local_time = localtime(&now);

	std::cout << "[" << local_time->tm_year + 1900 << local_time->tm_mon + 1 << local_time->tm_mday << "_"
		<< local_time->tm_hour << local_time->tm_min << local_time->tm_sec << "] ";
}

void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";" << "total:"
		<< _totalAmount << ";" << "deposits:" << _totalNbDeposits << ";"
		<< "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit) {
	_displayTimestamp();
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";"
		<< "deposit:" << deposit << ";";
	_amount += deposit;
	_totalAmount += deposit;
	std::cout<< "amount:" << _amount << ";"
		<< "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";" << "withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals += 1;
	_totalNbWithdrawals += 1;
	std::cout << withdrawal << ";" << "amount:" << _amount << ";" << "nb_withdrawals:" << _nbWithdrawals << std::endl; 
	return (true);
}

int	Account::checkAmount(void) const {
	return (_amount);
}

void	Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";"
		<< "deposits:" << _nbDeposits << ";" << "withdrwals:" << _nbWithdrawals << std::endl;
}
