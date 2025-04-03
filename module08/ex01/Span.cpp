/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 12:06:07 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/30 18:25:36 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cmath>

Span::Span() : _maxSize(0) {
}

Span::Span(unsigned int n) : _maxSize(n) {
}

Span::Span(const Span& rhs) : _maxSize(rhs.getMaxSize()) {
}

Span& Span::operator=(const Span& rhs) {
	if (this != &rhs) {
		_maxSize = rhs.getMaxSize();
		//! should copy the set
	}
	return *this;
}

Span::~Span() {
}

void Span::addNumber(int number) {
	_set.insert(number);
}

unsigned int Span::shortestSpan() const {

	unsigned int shortest = -1;
	std::set<int>::iterator it = _set.begin();

	std::set<int>::iterator next_it = it;
	std::advance(next_it, 1);

	for (; next_it != _set.end(); ++it, ++next_it) {
		unsigned int diff = *next_it - *it;
		shortest = std::min(shortest, diff);
	}

	return shortest;
}

unsigned int Span::longestSpan() const {
	return *_set.rbegin() - *_set.begin();
}

unsigned int Span::getMaxSize() const {
	return _maxSize;
}
