/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:58:35 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/15 01:46:51 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.h"

Ice::Ice() {
	_type = "ice";
}

Ice::Ice(std::string const & type) {
	_type = type;
}

Ice::Ice(const Ice& rhs) : AMateria(rhs) {}

Ice& Ice::operator=(const Ice& rhs) {
	AMateria::operator=(rhs);
	return *this;
}

Ice::~Ice() {}

void Ice::use(ICharacter& target) {	
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

AMateria* Ice::clone() const {
	return new Ice();
}
