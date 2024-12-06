/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 10:41:14 by aaitelka          #+#    #+#             */
/*   Updated: 2024/10/06 20:22:12 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::debug() {
    std::cout << "debug" << std::endl;
}

void Harl::info() {
    std::cout << "info" << std::endl;
}

void Harl::warning() {
    std::cout << "warning" << std::endl;
}

void Harl::error() {
    std::cout << "error" << std::endl;
}

void Harl::complain(std::string level) {
    
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*ptrs[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (size_t i = 0; i < levels->size(); i++) {
        if (levels[i] == level) {
            (this->*ptrs[i])();
            return ;
        }
    }
    std::cout << "Unknown level: " << level << std::endl;
}
