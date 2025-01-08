/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:54:08 by aaitelka          #+#    #+#             */
/*   Updated: 2025/01/08 21:37:06 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main() {

    Point a(0, 0);
    Point b(4, 0);
    Point c(2, 4);
    
    Point p1(2, 2);
    if (bsp(a, b, c, p1)) {
        std::cout << "Point p1 is inside the triangle!" << std::endl;
    } else {
        std::cout << "Point p1 is outside the triangle!" << std::endl;
    }

    Point p2(4, 2);
    if (bsp(a, b, c, p2)) {
        std::cout << "Point p2 is inside the triangle!" << std::endl;
    } else {
        std::cout << "Point p2 is outside the triangle!" << std::endl;
    }

    Point p3(5, 5);
    if (bsp(a, b, c, p3)) {
        std::cout << "Point p3 is inside the triangle!" << std::endl;
    } else {
        std::cout << "Point p3 is outside the triangle!" << std::endl;
    }

    return 0;
}
