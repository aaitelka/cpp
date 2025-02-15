/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 15:33:15 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/15 01:33:41 by aaitelka         ###   ########.fr       */
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

}

Character& Character::operator=(const Character& rhs) {

	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_ssize = rhs._ssize;
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

	std::cout << target.getName();
	if (idx < 0 && idx >= _ssize) {
		std::cout << "error array out of bounds\n";
		return ;	
	}
	_slots[idx]->use(target);
}

void Character::equip(AMateria* m) {

	if (_ssize < 4)
		_slots[_ssize++] = m;
	else
		std::cout << "inventory is full\n";
}

void Character::unequip(int idx) {

	if (idx < 0 || idx >= _ssize) {
		std::cout << "error array out of bounds\n";
		return ;	
	}
	_slots[idx] = NULL;
}
