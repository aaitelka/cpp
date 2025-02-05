/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:59:29 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/03 05:41:49 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

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
    
    FragTrap frag("Frag");

    status(frag);

    frag.takeDamage(10);
    frag.attack("Enemy");
    frag.beRepaired(1);
    frag.highFivesGuys();

    status(frag);

	return 0;
}
