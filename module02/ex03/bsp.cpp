/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 21:31:03 by aaitelka          #+#    #+#             */
/*   Updated: 2025/01/08 21:36:13 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {

    Fixed areaABC = (b.getX() - a.getX()) * (c.getY() - a.getY()) 
		- (c.getX() - a.getX()) * (b.getY() - a.getY());

    Fixed areaPAB = (a.getX() - point.getX()) * (b.getY() - point.getY()) 
		- (b.getX() - point.getX()) * (a.getY() - point.getY());
    Fixed areaPBC = (b.getX() - point.getX()) * (c.getY() - point.getY()) 
		- (c.getX() - point.getX()) * (b.getY() - point.getY());
    Fixed areaPCA = (c.getX() - point.getX()) * (a.getY() - point.getY()) 
		- (a.getX() - point.getX()) * (c.getY() - point.getY());

    if (areaABC == (areaPAB + areaPBC + areaPCA)) {
        return true;
    }

    return false;
}
