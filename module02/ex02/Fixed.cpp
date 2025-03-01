/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:54:15 by aaitelka          #+#    #+#             */
/*   Updated: 2025/01/31 19:56:27 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::_fract = 8;

Fixed::Fixed() : _fixed(0) {}

Fixed::Fixed(const int val) {
	_fixed = val << _fract;
}

Fixed::Fixed(const float val) {
	_fixed = roundf(val * (1 << _fract));
}

Fixed::Fixed(const Fixed& rhs) {
	*this = rhs;
}

Fixed& Fixed::operator=(const Fixed& rhs) {
	if (this != &rhs) {
		_fixed = rhs.getRawBits();
	}
	return *this;
}

Fixed::~Fixed() {}

int Fixed::getRawBits() const {
	return _fixed;
}

void Fixed::setRawBits(int const raw) {
	_fixed = raw;
}

bool Fixed::operator>(const Fixed& rhs) const {
	return _fixed > rhs.getRawBits();
}

bool Fixed::operator<(const Fixed& rhs) const {
	return _fixed < rhs.getRawBits();
}

bool Fixed::operator>=(const Fixed& rhs) const {
	return _fixed >= rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed& rhs) const {
	return _fixed <= rhs.getRawBits();
}

bool Fixed::operator==(const Fixed& rhs) const {
	return _fixed == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed& rhs) const {
	return _fixed != rhs.getRawBits();
}

Fixed Fixed::operator+(const Fixed& rhs) const {
	Fixed result;
	result._fixed = _fixed + rhs.getRawBits();
	return result;
}

Fixed Fixed::operator-(const Fixed& rhs) const {
	Fixed result;
	result._fixed = _fixed - rhs.getRawBits();
	return result;
}

Fixed Fixed::operator*(const Fixed& rhs) const {
	Fixed result;
	result._fixed = (_fixed * rhs.getRawBits()) >> _fract;
	return result;
}

Fixed Fixed::operator/(const Fixed& rhs) const {
	Fixed result;
	result._fixed = (_fixed << _fract) / rhs.getRawBits();
	return result;
}

Fixed& Fixed::operator++() {
	++_fixed;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed temp(*this);
	++_fixed;
	return temp;
}

Fixed& Fixed::operator--() {
	--_fixed;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	--_fixed;
	return temp;
}

Fixed& Fixed::min(Fixed& left, Fixed& right) {
	return (left < right) ? left : right;
}

const Fixed& Fixed::min(const Fixed& left, const Fixed& right) {
	return (left < right) ? left : right;
}

Fixed& Fixed::max(Fixed& left, Fixed& right) {
	return (left > right) ? left : right;
}

const Fixed& Fixed::max(const Fixed& left, const Fixed& right) {
	return (left > right) ? left : right;
}

float Fixed::toFloat() const {
	return (float)(_fixed) / (1 << _fract);
}

int Fixed::toInt() const {
	return _fixed >> _fract;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
	os << obj.toFloat();
	return os;
}
