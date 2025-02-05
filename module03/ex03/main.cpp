/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:59:29 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/05 16:24:44 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

static inline void status(const ClapTrap& clap) {
	std::cout << BLUE;
	std::cout << "\n░░░░░░░░░░[ Status ]░░░░░░░░░░";
	std::cout << "\n➜ Name: " << clap.getName();
	std::cout << ",\n➜ Hit Points: " << clap.getHitPoints();
	std::cout << ",\n➜ Energy Points: " << clap.getEnergyPoints();
	std::cout << ",\n➜ Attack Damage: " << clap.getAttackDamage();
	std::cout << "\n" << RESET << std::endl;
}

int main(void)
{
	
	DiamondTrap dm("Halem");
 
	status(dm);

    dm.attack("Enemy");
    dm.takeDamage(10);
    dm.beRepaired(1);
	dm.guardGate();
    dm.highFivesGuys();
	dm.whoAmI();

    status(dm);


	// std::cout << "hit " << dm.getHitPoints() << std::endl;
	// std::cout << "ener " << dm.getEnergyPoints() << std::endl;
	// std::cout << "atta " << dm.getAttackDamage() << std::endl;
	
	return 0;
}
