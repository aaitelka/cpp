/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:24:01 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/18 17:55:37 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog constructed\n";
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog& rhs) : Animal(rhs) {
	_brain = new Brain(*rhs.getBrain());
}

Dog& Dog::operator=(const Dog& rhs) {

	if (this != &rhs) {
		delete _brain;
		_brain = new Brain(*rhs.getBrain());
		_type = rhs.getType();
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructed\n";
	delete _brain;
}

void Dog::makeSound() const {
	std::cout << "How Hoooooow!!!\n";
}

Brain *Dog::getBrain() const {
	return _brain;
}
