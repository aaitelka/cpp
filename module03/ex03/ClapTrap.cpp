/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:59:33 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/06 23:21:38 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _name("Unamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << _name << " Default constructor called\n";
}

ClapTrap::ClapTrap(const std::string& name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << name << " Parameterized constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& rhs)
	: _name(rhs.getName()),
	_hitPoints(rhs.getHitPoints()),
	_energyPoints(rhs.getEnergyPoints()),
	_attackDamage(rhs.getAttackDamage()) {
	std::cout << "ClapTrap " << _name << " Copy constructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
	std::cout << "ClapTrap " << _name << " Aassignment operator called\n";
	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " Destructor called\n";
}

void ClapTrap::attack(const std::string& target) {

	if (_hitPoints == 0 || _energyPoints == 0) {
		std::cout << RED << "💀 ClapTrap " << _name;
		std::cout << " alerady dead! 💀\n" << RESET;
		return ;
	}
	--_energyPoints;
	std::cout << GREEN << "ClapTrap " << _name << " attacks " << target;
	std::cout << ", causing " << _attackDamage << " points of damage!\n" << RESET;
}

void ClapTrap::takeDamage(unsigned int amount) {
	
	if (_hitPoints == 0) {
		std::cout << RED << "💀 ClapTrap " << _name;
		std::cout << " alerady dead! 💀\n" << RESET;
		return ;
	}
	_hitPoints -= amount;
	std::cout << RED << "ClapTrap " << _name << " takes ";
	std::cout << amount << " points of damage!\n" << RESET;
}

void ClapTrap::beRepaired(unsigned int amount) {

	if (_hitPoints == 0 || _energyPoints == 0) {
		std::cout << RED << "💀 ClapTrap " << _name;
		std::cout << " alerady dead! 💀\n" << RESET;
		return ;
	}
	--_energyPoints;
	_hitPoints += amount;
	std::cout << YELLOW << "ClapTrap " << _name << " repairs itself for ";
	std::cout << amount << " hit points!\n" << RESET;
}

std::string ClapTrap::getName() const {
	return _name;
}

unsigned int ClapTrap::getHitPoints() const {
	return _hitPoints;
}

unsigned int  ClapTrap::getEnergyPoints() const {
	return _energyPoints;
}

unsigned int 	 ClapTrap::getAttackDamage() const {
	return _attackDamage;
}
