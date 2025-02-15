/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:30:07 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/05 04:10:43 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.h"

Animal::Animal() : type("Unknown") {
	std::cout << "Animal constructred\n";
}

Animal::Animal(const Animal& rhs) {
	*this = rhs;	
}

Animal& Animal::operator=(const Animal& rhs) {
	if (this != &rhs) {
		this->type = rhs.getType();
	}
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructred\n";
}

std::string Animal::getType() const {
	return type;
}

void Animal::makeSound() const {
	std::cout << "No sound!\n";
}
