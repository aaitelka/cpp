/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:15:28 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/15 01:37:01 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.h"
#include "Cure.h"
#include "MateriaSource.h"

MateriaSource::MateriaSource() : _ssize(0) {

	for (size_t i = 0; i < 4; ++i)
		_slots[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& rhs) : _ssize(0) {
	(void)rhs;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {
	if (this != &rhs) {}
	return *this;
}

MateriaSource::~MateriaSource() {

}

AMateria *MateriaSource::createMateria(std::string const & name) {

	for (int i = _ssize; i >= 0; --i) {
		if (name == _slots[i]->getType()) {
			return _slots[i];
		}
	}
	return NULL;
}

void MateriaSource::learnMateria(AMateria *m) {

	if (_ssize < 4) {
		_slots[_ssize++] = m;
	}
	else
		std::cout << "inventory is full\n";
}
