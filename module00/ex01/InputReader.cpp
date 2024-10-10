/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InputReader.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:14:19 by aaitelka          #+#    #+#             */
/*   Updated: 2024/10/09 14:29:51 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "InputReader.hpp"

static void readInput(const std::string& label, std::string& input) {
    int             width;

    width = 14 - label.length();
    std::cout << "Enter " << label << std::setw(width) << ": ";
    getline(std::cin, input);
    if (std::cin.eof())
        exit(0);
}

std::string InputReader::read(InputType type) {
    std::string input;

    switch (type) {
        case FIRST_NAME:
            readInput(FNAME, input);
            return input;
        case LAST_NAME:
            readInput(LNAME, input);
            return input;
        case NICK_NAME:
            readInput(NNAME, input);
            return input;
        case PHONE_NUMBER:
            readInput(PNUMB, input);
            return input;
        case DARKEST_SECRET:
            readInput(DSECR, input);
            return input;
        default:
            break;
    }
    return "";
}