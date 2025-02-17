/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 15:33:15 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/18 00:49:17 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.h"

Character::Character() : _name("Lmo9atil"), _ssize(0) {

	for (size_t i = 0; i < SIZE; ++i) {
		_slots[i] = _unequiped[i] = NULL;
	}
}

Character::Character(std::string const & name)
	: _name(name), _ssize(0) {

	for (size_t i = 0; i < SIZE; ++i) {
		_slots[i] = _unequiped[i] = NULL;
	}
}

Character::Character(const Character& rhs)
	: _name(rhs.getName()), _ssize(rhs._ssize) {

	for (size_t i = 0; i < SIZE; ++i) {
		_slots[i] =  (rhs._slots[i]) ? rhs._slots[i]->clone() : NULL;
		_unequiped[i] = (rhs._unequiped[i]) ? rhs._unequiped[i]->clone() : NULL;
	}
}

Character& Character::operator=(const Character& rhs) {

	if (this != &rhs) {
        for (size_t i = 0; i < SIZE; ++i) {
			delete _slots[i];
			delete _unequiped[i];
			_slots[i] =  (rhs._slots[i]) ? rhs._slots[i]->clone() : NULL;
			_unequiped[i] = (rhs._unequiped[i]) ? rhs._unequiped[i]->clone() : NULL;
        }
		_name = rhs.getName();
		_ssize = rhs._ssize;
	}
	return *this;
}

Character::~Character() {

	for (size_t i = 0; i < SIZE; ++i)
	{
		delete _slots[i];
		delete _unequiped[i];
	}
}

std::string const& Character::getName() const {
	return _name;
}

void Character::use(int idx, ICharacter& target) {

	if (idx > _ssize) {
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

	if (m != NULL && _ssize < SIZE) {
		_slots[_ssize++] = m->clone();
		return ;
	}
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
	_unequiped[idx] = _slots[idx];
	_slots[idx] = NULL;
}
