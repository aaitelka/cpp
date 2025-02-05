/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 22:32:20 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/03 05:32:44 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
    std::cout << "ScavTrap " << name << " Default constructor called\n";
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
    std::cout << "ScavTrap " << name << " Parameterized constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& rhs) : ClapTrap(rhs) {}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {
	ClapTrap::operator=(rhs);
	return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->getName() << " Destructor called\n";
}

void ScavTrap::attack(const std::string& target) {
	
	if (hitPoints == 0 || energyPoints == 0) {
		std::cout << RED << "💀 ScavTrap " << name;
		std::cout << " alerady dead! 💀\n" << RESET;
		return ;
	}
	--energyPoints;
	std::cout << GREEN << "ScavTrap " << name << " attacks " << target;
	std::cout << ", causing " << attackDamage << " points of damage!\n" << RESET;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode!\n";
}
