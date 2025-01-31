/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:54:15 by aaitelka          #+#    #+#             */
/*   Updated: 2025/01/31 19:38:14 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::_fract = 8;

Fixed::Fixed() : _fixed(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int val) {
	std::cout << "Int constructor called\n";
	_fixed = val << _fract;
}

Fixed::Fixed(const float val) {
	std::cout << "Float constructor called\n";
	_fixed = roundf(val * (1 << _fract));
}

Fixed::Fixed(const Fixed& rhs) {
	std::cout << "Copy constructor called\n";
	*this = rhs;
}

Fixed& Fixed::operator=(const Fixed& rhs) {
	std::cout << "Copy assignment operator called\n";
	if (this != &rhs) {
		_fixed = rhs.getRawBits();
	}
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const {
	return _fixed;
}

void Fixed::setRawBits( int const raw ) {
	_fixed = raw;
}

float Fixed::toFloat( void ) const {
	return (float)(_fixed) / (1 << _fract);
}

int Fixed::toInt( void ) const {
	return _fixed >> _fract;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
	os << obj.toFloat();
	return os;
}
