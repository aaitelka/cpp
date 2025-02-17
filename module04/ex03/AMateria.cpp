/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:46:47 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/17 23:54:22 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.h"

AMateria::AMateria() : _type("Undefined") {}

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::AMateria(const AMateria& rhs) : _type(rhs.getType()) {}

AMateria& AMateria::operator=(const AMateria& rhs) {
	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return *this;
}

AMateria::~AMateria() {}

std::string const& AMateria::getType() const {
	return _type;
}

void AMateria::use(ICharacter& target) {	
	std::cout << "* AMateria " << _type << " with name : ";
	std::cout << target.getName() << " does nothing *\n";
}
