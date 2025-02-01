/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 21:31:03 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/01 19:54:44 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static inline Fixed absolute(Fixed value) {
  return (value < 0) ? value * -1 : value;
}

static inline Fixed crossPro(Fixed ax, Fixed by, Fixed cy) {
    return ax * (by - cy);
}

static Fixed getArea(Point const a, Point const b, Point const c) {

  Fixed ax = a.getX();
  Fixed ay = a.getY();
  Fixed bx = b.getX();
  Fixed by = b.getY();
  Fixed cx = c.getX();
  Fixed cy = c.getY();
  
  Fixed cp = crossPro(ax, by, cy) + crossPro(bx, cy, ay) + crossPro(cx, ay, by);
  return (absolute(cp));
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
