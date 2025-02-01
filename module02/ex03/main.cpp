/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:54:08 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/01 23:06:38 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main() {

    Point a(-2, 1);
    Point b(3, 2);
    Point c(1, 5);
    
    Point p1(0, 2);
    if (bsp(a, b, c, p1)) {
        std::cout << "Point p1 is inside the triangle!" << std::endl;
    } else {
        std::cout << "Point p1 is outside the triangle!" << std::endl;
    }

    return 0;
}
