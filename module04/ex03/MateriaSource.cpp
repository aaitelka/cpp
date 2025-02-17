/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:15:28 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/18 01:03:20 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.h"

MateriaSource::MateriaSource() : _ssize(0) {

	for (size_t i = 0; i < SIZE; ++i)
		_slots[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& rhs) {
	for (size_t i = 0; i < SIZE; ++i) {
		_slots[i] = (rhs._slots[i]) ? rhs._slots[i]->clone() : NULL;
	}
	_ssize = rhs._ssize;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {

	if (this != &rhs) {
        for (size_t i = 0; i < SIZE; ++i) {
            delete _slots[i];
			_slots[i] = (rhs._slots[i]) ? rhs._slots[i]->clone() : NULL;
        }
		_ssize = rhs._ssize;
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (size_t i = 0; i < SIZE; ++i)
		delete _slots[i];
}

AMateria *MateriaSource::createMateria(std::string const & name) {

	for (int i = (SIZE - 1); i >= 0; --i) {
		if (name == _slots[i]->getType()) {
			return _slots[i];
		}
	}
	return NULL;
}

void MateriaSource::learnMateria(AMateria *m) {

	if (m == NULL) {
		std::cout << RED << "AMateria cannot be NULL\n" << RESET;
		return ;
	}
	if (_ssize > SIZE) {
		std::cout << YELLOW << "MateriaSource inventory is full\n" << RESET;
		return ;
	}
	_slots[_ssize++] = m->clone();
}
