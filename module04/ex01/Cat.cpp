/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:04:43 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/06 07:52:10 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.h"

Cat::Cat() {
	std::cout << "Cat constructed\n";
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat& rhs) : Animal(rhs) {}

Cat& Cat::operator=(const Cat& rhs) {
	
	if (this != &rhs) {
		delete rhs.brain;
		brain = new Brain();
		this->type = rhs.getType();
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructed\n";
	delete brain;
}

std::string Cat::getType() const {
	return type;
}

void Cat::makeSound() const {
	std::cout << "Meo Meeeeeow!!!\n";
}
