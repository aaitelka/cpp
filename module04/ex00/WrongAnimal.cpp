/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:30:07 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/18 17:51:22 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Unknown") {
	std::cout << "WrongAnimal constructed\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs) : _type(rhs.getType()) {}


WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs) {
	if (this != &rhs) {
		_type = rhs.getType();
	}
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructed\n";
}

std::string WrongAnimal::getType() const {
	return _type;
}

void WrongAnimal::makeSound() const {
	std::cout << "No sound!\n";
}
