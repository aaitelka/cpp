/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:48:34 by aaitelka          #+#    #+#             */
/*   Updated: 2024/11/19 16:07:33 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>
#include <ctime>

static std::string getTime(std::string format) {
    char            buffer[80];
    time_t          currentTime;
    tm*             localTime;

    currentTime = time(0);
    localTime = localtime(&currentTime);
    strftime(buffer, sizeof(buffer), format.c_str(), localTime);
    return (buffer);
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void ) {
    std::cout << getTime("[%Y%m%d_%H%M%S] ");
}

Account::Account( void ) {}

Account::Account(int initial_deposit) {
    _totalAmount += initial_deposit;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _amount = initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << initial_deposit;
    std::cout << ";created" << std::endl;
}

int	Account::getNbAccounts(void) {
    return _nbAccounts;
}

int	Account::getTotalAmount(void) {
    return _totalAmount;
}

int	Account::getNbDeposits(void) {
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}

int		Account::checkAmount( void ) const {
    return _amount;
}

void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts();
    std::cout << ";total:" << getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits();
    std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit) {
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    std::cout << ";deposit:" << deposit;
    std::cout << ";amount:" << _amount + deposit;
    std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
    _amount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    if (withdrawal > _amount) {
        std::cout << ";withdrawal:refused" << std::endl;
        return false;
    }
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << ";withdrawal:" << withdrawal;
    std::cout << ";amount:" << _amount - withdrawal;
    std::cout << ";nb_withdrawals:" << _nbDeposits << std::endl;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    return true;
}

void	Account::displayStatus( void ) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";deposits:" << _nbDeposits;
    std::cout << ";withdrawals:" << _nbWithdrawals<< std::endl;
}

Account::~Account( void ) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount << ";closed" << std::endl;
}