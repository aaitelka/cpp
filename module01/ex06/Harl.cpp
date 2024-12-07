/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 10:41:14 by aaitelka          #+#    #+#             */
/*   Updated: 2024/12/07 14:35:09 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

typedef void (Harl::*MFuncPtr)();

static void println(std::string msg) {
    std::cout << msg << std::endl;
}

void Harl::debug() {
    println("[ DEBUG ]");
    println("I love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n");
}

void Harl::info() {
    println("[ INFO ]");
    println("I cannot believe adding extra bacon costs more money. \
You didn’t put enough bacon in my burger! If you did, \
I wouldn’t be asking for more!\n");
}

void Harl::warning() {
    println("[ WARNING ]");
    println("I think I deserve to have some extra bacon for free. \
I’ve been coming for years whereas you started working \
here since last month.\n");
}

void Harl::error() {
    println("[ ERROR ]");
    println("This is unacceptable! I want to speak to the manager now.\n");
}

static Levels getPosition(const std::string& level) {
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < UNKNOWN; ++i) {
        if (level == levels[i]) {
            return (Levels)(i);
        }
    }
    return UNKNOWN;
}

void Harl::complain(std::string level) {
    MFuncPtr ptrs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    switch (getPosition(level)) {
        case DEBUG:
            debug();
        case INFO:
            (this->*ptrs[INFO])();
        case WARNING:
            (this->*ptrs[WARNING])();
        case ERROR:
            (this->*ptrs[ERROR])();
            break ;
        default: 
            std::cout << "[ Probably complaining about insignificant problems ]";
            std::cout << std::endl;
            break ;
    }
}
