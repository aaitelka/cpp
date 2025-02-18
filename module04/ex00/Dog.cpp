/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:24:01 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/18 17:51:49 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog constructed\n";
	_type = "Dog";
}

Dog::Dog(const Dog& rhs) : Animal(rhs) {}

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
