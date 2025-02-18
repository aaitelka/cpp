/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:30:07 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/18 18:17:08 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Unknown") {
	std::cout << "AAnimal constructred\n";
}

AAnimal::AAnimal(const AAnimal& rhs) : _type(rhs.getType()) {}

AAnimal& AAnimal::operator=(const AAnimal& rhs) {
	if (this != &rhs) {
		_type = rhs.getType();
	}
	return *this;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructred\n";
}

std::string AAnimal::getType() const {
	return _type;
}
