/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:58:28 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/14 19:19:30 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.h"

Cure::Cure() {
	_type = "cure";
}

Cure::Cure(std::string const & type) {
	_type = type;
}

Cure::Cure(const Cure& rhs) : AMateria(rhs) {}

Cure& Cure::operator=(const Cure& rhs) {
	AMateria::operator=(rhs);
	return *this;
}

Cure::~Cure() {}

void Cure::use(ICharacter& target) {	
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}

AMateria* Cure::clone() const {
	return new Cure();
}
