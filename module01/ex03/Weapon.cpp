/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 09:22:30 by aaitelka          #+#    #+#             */
/*   Updated: 2024/12/06 18:49:51 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {
}

const std::string& Weapon::getType(void) const {
	return type;
}

void Weapon::setType(std::string type) {
	this->type = type;
}

Weapon::~Weapon(void) {
}
