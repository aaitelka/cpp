/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 22:32:20 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/06 23:42:00 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
    std::cout << "ScavTrap " << _name << " Default constructor called\n";
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
    std::cout << "ScavTrap " << _name << " Parameterized constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& rhs) : ClapTrap(rhs) {}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {
	ClapTrap::operator=(rhs);
	return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " Destructor called\n";
}

void ScavTrap::attack(const std::string& target) {
	
	if (_hitPoints == 0 || _energyPoints == 0) {
		std::cout << RED << "💀 ScavTrap " << _name;
		std::cout << " alerady dead! 💀\n" << RESET;
		return ;
	}
	--_energyPoints;
	std::cout << GREEN << "ScavTrap " << _name << " attacks " << target;
	std::cout << ", causing " << _attackDamage << " points of damage!\n" << RESET;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!\n";
}
