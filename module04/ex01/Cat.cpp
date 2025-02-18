/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:04:43 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/18 17:55:29 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat constructed\n";
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat& rhs) : Animal(rhs) {
	_brain = new Brain(*rhs.getBrain());
}

Cat& Cat::operator=(const Cat& rhs) {
	
	if (this != &rhs) {
		delete _brain;
		_brain = new Brain(*rhs.getBrain());
		_type = rhs.getType();
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructed\n";
	delete _brain;
}

void Cat::makeSound() const {
	std::cout << "Meo Meeeeeow!!!\n";
}

Brain *Cat::getBrain() const {
	return _brain;
}
