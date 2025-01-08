/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:54:15 by aaitelka          #+#    #+#             */
/*   Updated: 2025/01/08 18:18:36 by aaitelka         ###   ########.fr       */
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

Fixed::Fixed(const Fixed& rhs) : _fixed(rhs._fixed) {
	std::cout << "Copy constructor called" << std::endl;
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
