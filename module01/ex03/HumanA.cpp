/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 09:33:59 by aaitelka          #+#    #+#             */
/*   Updated: 2024/12/06 20:35:32 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon) {
	this->name = name;
}

void HumanA::attack() {
	std::cout << this->name << " attacks with their ";
	std::cout << weapon.getType() << std::endl;
}

HumanA::~HumanA() {}
