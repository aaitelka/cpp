/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 04:00:45 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/05 05:40:20 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.h"

Brain::Brain() {
    std::cout << "Brain constructed\n";

    for (size_t i = 0; i < 100; i++) {
        ideas[i] = "idea";
    }
}

Brain::Brain(const Brain& rhs) {
    *this = rhs;
}

Brain& Brain::operator=(const Brain& rhs) {
    if (this != &rhs) {
        for (size_t i = 0; i < 100; i++) {
            this->ideas[i] = rhs.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain desstructed\n";
}
