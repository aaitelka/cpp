/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 19:17:14 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/01 02:33:07 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_POINT_HPP
#define EX03_POINT_HPP

#include "Fixed.hpp"

class Point {
    private:
        Fixed const x;
        Fixed const y;

    public:
        Point();
        Point(const float x, const float y);
        Point(const Point& rhs);
        Point& operator=(const Point& rhs);
        ~Point();

        Fixed getX() const;
        Fixed getY() const;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
