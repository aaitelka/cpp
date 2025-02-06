/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 18:55:29 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/06 23:12:49 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap() {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
    std::cout << "FragTrap " << name << " Default constructor called\n";
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " Parameterized constructor called\n";
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
	
	if (hitPoints == 0 || energyPoints == 0) {
		std::cout << RED << "💀 FragTrap " << name;
		std::cout << " alerady dead! 💀\n" << RESET;
		return ;
	}
	--energyPoints;
	std::cout << GREEN << "FragTrap " << name << " attacks " << target;
	std::cout << ", causing " << attackDamage << " points of damage!\n" << RESET;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << name << " high fives request!\n";
}
