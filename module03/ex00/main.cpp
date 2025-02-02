/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:59:29 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/02 22:43:20 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

static inline void status(const ClapTrap& clap) {
	std::cout << BLUE;
	std::cout << "\n░░░░░░░░░░[ Status ]░░░░░░░░░░";
	std::cout << "\n➜ Name: " << clap.getName();
	std::cout << ",\n➜ Hit Points: " << clap.getHitPoints();
	std::cout << ",\n➜ Energy Points: " << clap.getEnergyPoints();
	std::cout << ",\n➜ Attack Damage: " << clap.getAttackDamage();
	std::cout << "\n" << RESET << std::endl;
}

int main() {

	ClapTrap clap("Clap");

	status(clap);
	
	clap.attack("Enemy");
	clap.takeDamage(3);
	clap.beRepaired(5);
	clap.takeDamage(12);
	clap.beRepaired(3);

	status(clap);

	return 0;
}
