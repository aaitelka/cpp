/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:30:07 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/05 04:12:56 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.h"

WrongAnimal::WrongAnimal() : type("Unknown") {
	std::cout << "WrongAnimal constructred\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs) {
	*this = rhs;	
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs) {
	if (this != &rhs) {
		this->type = rhs.getType();
	}
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructred\n";
}

std::string WrongAnimal::getType() const {
	return type;
}

void WrongAnimal::makeSound() const {
	std::cout << "No sound!\n";
}
