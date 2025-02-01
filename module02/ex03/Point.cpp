/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 19:17:00 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/01 02:49:31 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y)) {}

Point::Point(const Point& rhs) : x(rhs.getX()), y(rhs.getY()) {}

Point& Point::operator=(const Point& rhs) {
    if (this != &rhs) {
        // x and y are const
    }
    return *this;
}

Point::~Point() {}

Fixed Point::getX() const {
    return x;
}

Fixed Point::getY() const {
    return y;
}
