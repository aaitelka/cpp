/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 16:08:58 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/05 03:18:25 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
	:  ClapTrap(), ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap " << name << " Default constructor called\n";
	ScavTrap::energyPoints = 50;
}

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	std::cout << "DiamondTrap " << name << " Parametrized constructor called\n";
	this->name = name;
	ScavTrap::energyPoints = 50;
}

DiamondTrap::DiamondTrap(const DiamondTrap& rhs) 
	: ClapTrap(rhs), ScavTrap(rhs), FragTrap(rhs) {
	std::cout << "DiamondTrap " << name << " copy constructor called!\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs) {
	ClapTrap::operator=(rhs);
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << name << " destructed!\n";
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "I am " << name << " a DiamondTrap type\n";
	std::cout << "And my base type is ClapTrap named: " << ClapTrap::name; 
}
