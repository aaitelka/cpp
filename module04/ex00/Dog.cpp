/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:24:01 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/05 04:14:32 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.h"

Dog::Dog() {
	std::cout << "Dog constructed\n";
	type = "Dog";
}

Dog::Dog(const Dog& rhs) : Animal(rhs) {
	*this = rhs;
}

Dog& Dog::operator=(const Dog& rhs) {
	Animal::operator=(rhs);
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructed\n";
}

void Dog::makeSound() const {
	std::cout << "How Hoooooow!!!\n";
}

std::string Dog::getType() const {
	return type;
}
