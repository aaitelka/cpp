/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:30:07 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/18 16:26:16 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.h"

Animal::Animal() : _type("Unknown") {
	std::cout << "Animal constructed\n";
}

Animal::Animal(const Animal& rhs) : _type(rhs.getType()) {}

Animal& Animal::operator=(const Animal& rhs) {
	if (this != &rhs) {
		_type = rhs.getType();
	}
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructed\n";
}

std::string Animal::getType() const {
	return _type;
}

void Animal::makeSound() const {
	std::cout << "No sound!\n";
}
