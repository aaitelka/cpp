/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:59:33 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/03 05:16:18 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: name("Unamed"), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap " << name << " Default constructor called\n";
}

ClapTrap::ClapTrap(const std::string& name)
	: name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap " << name << " Parameterized constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& rhs) {
	std::cout << "ClapTrap " << name << " Copy constructor called\n";
	*this = rhs;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
	std::cout << "ClapTrap " << name << " Aassignment operator called\n";
	if (this != &rhs) {
		this->name = rhs.getName();
		this->hitPoints = rhs.getHitPoints();
		this->energyPoints = rhs.getEnergyPoints();
		this->attackDamage = rhs.getAttackDamage();
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name << " Destructor called\n";
}

void ClapTrap::attack(const std::string& target) {

	if (hitPoints == 0 || energyPoints == 0) {
		std::cout << RED << "💀 ClapTrap " << name;
		std::cout << " alerady dead! 💀\n" << RESET;
		return ;
	}
	--energyPoints;
	std::cout << GREEN << "ClapTrap " << name << " attacks " << target;
	std::cout << ", causing " << attackDamage << " points of damage!\n" << RESET;
}

void ClapTrap::takeDamage(unsigned int amount) {
	
	if (hitPoints == 0) {
		std::cout << RED << "💀 ClapTrap " << name;
		std::cout << " alerady dead! 💀\n" << RESET;
		return ;
	}
	hitPoints -= amount;
	std::cout << RED << "ClapTrap " << name << " takes ";
	std::cout << amount << " points of damage!\n" << RESET;
}

void ClapTrap::beRepaired(unsigned int amount) {

	if (hitPoints == 0 || energyPoints == 0) {
		std::cout << RED << "💀 ClapTrap " << name;
		std::cout << " alerady dead! 💀\n" << RESET;
		return ;
	}
	--energyPoints;
	hitPoints += amount;
	std::cout << YELLOW << "ClapTrap " << name << " repairs itself for ";
	std::cout << amount << " hit points!\n" << RESET;
}

std::string ClapTrap::getName() const {
	return name;
}

unsigned int ClapTrap::getHitPoints() const {
	return hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const {
	return energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const {
	return attackDamage;
}
