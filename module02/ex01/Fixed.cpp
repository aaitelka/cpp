/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molex <molex@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:54:15 by aaitelka          #+#    #+#             */
/*   Updated: 2025/01/17 16:38:07 by molex            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _fixed(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val) {
	std::cout << "Int constructor called" << std::endl;
	_fixed = val << _fract;
}

Fixed::Fixed(const float val) {
	std::cout << "Float constructor called" << std::endl;
	_fixed = roundf(val * (1 << _fract));
}

Fixed::Fixed(const Fixed& rhs) {
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed& Fixed::operator=(const Fixed& rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs) {
		_fixed = rhs._fixed;
	}
	return *this;
}

float Fixed::toFloat() const {
	return (float)(_fixed) / (1 << _fract);
}

int Fixed::toInt() const {
	return _fixed >> _fract;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
	os << obj.toFloat();
	return os;
}
