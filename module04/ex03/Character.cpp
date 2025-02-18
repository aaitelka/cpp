/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 15:33:15 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/19 00:01:13 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

Character::Character() : _name("Lmo9atil") {

	for (size_t i = 0; i < SIZE; ++i) {
		_slots[i] = _unequiped[i] = NULL;
	}
}

Character::Character(std::string const & name) : _name(name) {

	for (size_t i = 0; i < SIZE; ++i) {
		_slots[i] = _unequiped[i] = NULL;
	}
}

Character::Character(const Character& rhs) 
	: _name(rhs.getName()) {

	for (size_t i = 0; i < SIZE; ++i) {
		_slots[i] =  (rhs._slots[i]) ? rhs._slots[i]->clone() : NULL;
		_unequiped[i] = (rhs._unequiped[i]) ? rhs._unequiped[i]->clone() : NULL;
	}
}

Character& Character::operator=(const Character& rhs) {

	if (this != &rhs) {
        for (size_t i = 0; i < SIZE; ++i) {
			delete _slots[i];
			_slots[i] =  (rhs._slots[i]) ? rhs._slots[i]->clone() : NULL;
			delete _unequiped[i];
			_unequiped[i] = (rhs._unequiped[i]) ? rhs._unequiped[i]->clone() : NULL;
        }
		_name = rhs.getName();
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

	if (_slots[idx] == NULL) {
		std::cout << "error array out of bounds\n";
		return ;
	}
	_slots[idx]->use(target);
}

void Character::equip(AMateria* m) {

	if (m == NULL)
		return ;

	for (size_t i = 0; i < SIZE; ++i) {
		if (_slots[i] == NULL) {
			_slots[i] = m->clone();
			break ;
		}  
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= SIZE) {
		std::cout << "error array out of bounds\n";
		return ;
	}
	_unequiped[idx] = _slots[idx];
	_slots[idx] = NULL;
}
