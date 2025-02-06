/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 18:55:29 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/06 23:32:40 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap() {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
    std::cout << "FragTrap " << _name << " Default constructor called\n";
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " Parameterized constructor called\n";
}

FragTrap::FragTrap(const FragTrap& rhs) : ClapTrap(rhs) {}

FragTrap& FragTrap::operator=(const FragTrap& rhs) {
	ClapTrap::operator=(rhs);
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target) {
	
	if (_hitPoints == 0 || _energyPoints == 0) {
		std::cout << RED << "💀 FragTrap " << _name;
		std::cout << " alerady dead! 💀\n" << RESET;
		return ;
	}
	--_energyPoints;
	std::cout << GREEN << "FragTrap " << _name << " attacks " << target;
	std::cout << ", causing " << _attackDamage << " points of damage!\n" << RESET;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << _name << " high fives request!\n";
}
