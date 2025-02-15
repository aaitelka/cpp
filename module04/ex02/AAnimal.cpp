/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:30:07 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/06 08:21:03 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.h"

AAnimal::AAnimal() : type("Unknown") {
	std::cout << "AAnimal constructred\n";
}

AAnimal::AAnimal(const AAnimal& rhs) : type(rhs.getType()) {}

AAnimal& AAnimal::operator=(const AAnimal& rhs) {
	if (this != &rhs) {
		this->type = rhs.getType();
	}
	return *this;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructred\n";
}

std::string AAnimal::getType() const {
	return type;
}
