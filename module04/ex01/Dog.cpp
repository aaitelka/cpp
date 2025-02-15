/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:24:01 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/06 07:52:04 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.h"

Dog::Dog() {
	std::cout << "Dog constructed\n";
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog& rhs) : Animal(rhs) {}

Dog& Dog::operator=(const Dog& rhs) {

	if (this != &rhs) {
		delete rhs.brain;
		brain = new Brain();
		this->type = rhs.getType();
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructed\n";
	delete brain;
}

void Dog::makeSound() const {
	std::cout << "How Hoooooow!!!\n";
}

std::string Dog::getType() const {
	return type;
}
