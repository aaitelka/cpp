/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:04:43 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/05 04:13:32 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.h"

Cat::Cat() {
	std::cout << "Cat constructed\n";
	type = "Cat";
}

Cat::Cat(const Cat& rhs) : Animal(rhs) {
	*this = rhs;
}

Cat& Cat::operator=(const Cat& rhs) {
	Animal::operator=(rhs);
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructed\n";
}

std::string Cat::getType() const {
	return type;
}

void Cat::makeSound() const {
	std::cout << "Meo Meeeeeow!!!\n";
}
