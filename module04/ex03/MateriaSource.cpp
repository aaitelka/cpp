/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:15:28 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/19 03:08:55 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {

	for (size_t i = 0; i < SIZE; ++i)
		_slots[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& rhs) {
	for (size_t i = 0; i < SIZE; ++i) {
		_slots[i] = (rhs._slots[i]) ? rhs._slots[i]->clone() : NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {

	if (this != &rhs) {
        for (size_t i = 0; i < SIZE; ++i) {
            delete _slots[i];
			_slots[i] = (rhs._slots[i]) ? rhs._slots[i]->clone() : NULL;
        }
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (size_t i = 0; i < SIZE; ++i)
		delete _slots[i];
}

AMateria *MateriaSource::createMateria(std::string const & name) {

	for (int i = 3; i >= 0; --i) {
		if (_slots[i] && name == _slots[i]->getType())
			return _slots[i];
	}
	return NULL;
}

void MateriaSource::learnMateria(AMateria *m) {

	for (size_t i = 0; i < SIZE; ++i) {
		if (_slots[i] == NULL) {
			_slots[i] = m->clone();
			break ;
		} else if (m == NULL) {
			_slots[i] = NULL;
			break ;	
		}
	}
	delete m;
}
