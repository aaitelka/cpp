/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 10:14:38 by aaitelka          #+#    #+#             */
/*   Updated: 2024/12/06 20:39:42 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	weapon = NULL;
	this->name = name;
}

void HumanB::setWeapon(Weapon& wepon) {
	this->weapon = &wepon;
}

void HumanB::attack() {
	if (weapon != NULL) {	
		std::cout << this->name << " attacks with their ";
		std::cout << weapon->getType() << std::endl;
	}
}

HumanB::~HumanB() {
}
