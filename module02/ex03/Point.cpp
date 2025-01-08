/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 19:17:00 by aaitelka          #+#    #+#             */
/*   Updated: 2025/01/08 21:37:58 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

Point::Point() : x(0), y(0) {
}

Point::Point(float x, float y) : x(Fixed(x)), y(Fixed(y)) {
}

Point::Point(const Point& other) : x(other.x), y(other.y) {
}

Point& Point::operator=(const Point& other) {
    if (this != &other) {
        // x and y are const, so we can't reassign them.
    }
    return *this;
}

Point::~Point() {
}

Fixed Point::getX() const {
    return x;
}

Fixed Point::getY() const {
    return y;
}
