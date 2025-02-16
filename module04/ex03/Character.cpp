/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 15:33:15 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/16 08:34:49 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.h"

Character::Character() : _name("Lmo9atil"), _ssize(0) {

	for (size_t i = 0; i < 4; ++i)
		_slots[i] = NULL;
}

Character::Character(std::string const & name)
	: _name(name), _ssize(0) {

	for (size_t i = 0; i < 4; ++i)
		_slots[i] = NULL;
}

Character::Character(const Character& rhs)
	: _name(rhs.getName()), _ssize(rhs._ssize) {
	for (size_t i = 0; i < 4; ++i) {
		if (rhs._slots[i])
			_slots[i] = rhs._slots[i]->clone();
	}
}

Character& Character::operator=(const Character& rhs) {

	if (this != &rhs) {
		for (size_t i = 0; i < 4; ++i) {
            delete _slots[i];
            _slots[i] = NULL;
        }
        for (size_t i = 0; i < 4; ++i) {
            if (rhs._slots[i])
                _slots[i] = rhs._slots[i]->clone();
        }
		_name = rhs.getName();
		_ssize = rhs._ssize;
	}
	return *this;
}

Character::~Character() {

	for (size_t i = 0; i < 4; ++i)
		delete _slots[i];
}

std::string const& Character::getName() const {
	return _name;
}

void Character::use(int idx, ICharacter& target) {

	if (_ssize < idx) {
		std::cout << "error array has " << _ssize << " element\'s\n";
		return ;
	}
	if (idx < 0 || idx >= _ssize) {
		std::cout << RED << "error array out of bounds\n" << RESET;
		return ;
	}
	if (_slots[idx])
		_slots[idx]->use(target);
}

void Character::equip(AMateria* m) {

	if (m != NULL && _ssize < 4) {
		_slots[_ssize++] = m->clone();
	}
	else
		std::cout << YELLOW << "Character inventory is full\n" << RESET;
}

void Character::unequip(int idx) {
	if (_ssize < idx) {
		std::cout << "error array has " << _ssize << " element\'s\n";
		return ;
	}
	if (idx < 0 || idx >= _ssize) {
		std::cout << RED << "error array out of bounds\n" << RESET;
		return ;	
	}
	_ssize--;
	delete _slots[idx]; //!should save addresses and delete it in ~destructor!
	_slots[idx] = NULL;
}
