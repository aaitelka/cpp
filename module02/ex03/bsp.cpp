/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 21:31:03 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/01 02:47:36 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static inline float absolute(float value) {
  return (value < 0) ? value * -1 : value;
}

static float getArea(Point const a, Point const b, Point const c) {

  float ax = a.getX().toFloat();
  float ay = a.getY().toFloat();
  float bx = b.getX().toFloat();
  float by = b.getY().toFloat();
  float cx = c.getX().toFloat();
  float cy = c.getY().toFloat();
  
  return (absolute((ax * (by - cy)) + (bx * (cy - ay)) + (cx * (ay - by))));
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {

    Fixed AABC = getArea(a, b, c);
    
    Fixed APAB = getArea(point, a, b);
    Fixed APBC = getArea(point, b, c);
    Fixed APCA = getArea(point, c, a);

    if (AABC == (APAB + APBC + APCA) && APAB != 0 && APBC != 0 && APCA != 0)
        return true;

    return false;
}
