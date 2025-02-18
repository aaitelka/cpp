/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:04:43 by aaitelka          #+#    #+#             */
/*   Updated: 2025/01/21 18:38:26 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat constructed\n";
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& rhs) : WrongAnimal(rhs) {}

WrongCat& WrongCat::operator=(const WrongCat& rhs) {
	WrongAnimal::operator=(rhs);
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructed\n";
}

void WrongCat::makeSound() const {
	std::cout << "Meo Meeeeeow!!!\n";
}
