/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InputReader.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:51:46 by aaitelka          #+#    #+#             */
/*   Updated: 2024/11/25 20:49:17 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "InputReader.hpp"

static bool hasOnlyDigits(std::string& str) {
    size_t len = str.length();
    for (size_t i = 0; i < len; i++) {
        if (!isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

static bool hasOnlySpaces(std::string& str) {
    size_t len = str.length();
    for (size_t i = 0; i < len; i++) {
        if (str[i] != ' ' && str[i] != '\t') {
            return false;
        }
    }
    return true;
}

static bool isValidInput(std::string& str) {
    size_t len = str.length();
    for (size_t i = 0; i < len; i++) {
        if (!std::isprint(str[i]) && str[i] != '\t') {
            return false;
        }
    }
    return true;
}

static std::string replaceTabsWithSpaces(const std::string& input) {
    std::string     output;

    output.reserve(input.size());
    size_t len = input.length();
    for (size_t i = 0; i < len; i++) {
        if (input[i] == '\t') {   
            output.append(4, ' ');
        } else {
            output.push_back(input[i]);
        }
    }
    return output;
}

static std::string getField(const std::string& label) {
    std::string input;
    size_t width = 14 - label.length();
    
    do {
        std::cout << "Enter " << label << std::setw(width) << ": ";
        std::getline(std::cin, input);
        if (std::cin.eof()) {
            exit(1);
        }
        if ((label == PNUMB && !hasOnlyDigits(input))
            || !isValidInput(input) || hasOnlySpaces(input)) {
            std::cout << RED << "invalid input" << RESET << std::endl;
        } else if (!input.empty()) {
            break;
        }
    } while (true);
    if (input.find('\t') != input.npos) {
        input = replaceTabsWithSpaces(input);
    }
    return (input);
}

Contact InputReader::read(Contact& contact, Fields field) {

    switch (field) {
        case FIRST_NAME:
            contact.setFirstName(getField(FNAME));
            break;
        case LAST_NAME:
            contact.setLastName(getField(LNAME));
            break;
        case NICK_NAME:
            contact.setNickName(getField(NNAME));
            break;
        case PHONE_NUMBER:
            contact.setPhoneNumber(getField(PNUMB));
            break;
        case DARKEST_SECRET:
            contact.setDarkestSecret(getField(DSECR));
            break;
        default:
            break;
    }
    return contact;
}
