/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:12:16 by aaitelka          #+#    #+#             */
/*   Updated: 2024/11/19 15:09:54 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

static std::string replaceTabsWithSpaces(const std::string& input) {
    std::string     output;
    output.reserve(input.size());
    for (size_t i = 0; i < input.length(); i++) {
        if (input[i] == '\t')
            output.append(4, ' ');
        else
            output.push_back(input[i]);
    }
    return output;
}

static bool is_all_digits(std::string& str) {
    size_t len = str.length();
    for (size_t i = 0; i < len; i++) {
        if (!isdigit(str[i]))
            return false;
    }
    return true;
}

static bool is_valid(std::string& str) {
    size_t len = str.length();
    for (size_t i = 0; i < len; i++) {
        if (!isalpha(str[i]) && !isdigit(str[i])  && str[i] != '\t' && str[i] != ' ')
            return false;
    }
    return true;
}

static std::string readInput(const std::string& label) {
    std::string input;
    size_t width = 14 - label.length();
    std::cout << "Enter " << label << std::setw(width) << ": ";
    getline(std::cin, input);
    if ((label.compare(PNUMB) == 0 && !is_all_digits(input)) || !is_valid(input))
    {
        std::cout << RED << "invalid input" << RESET << std::endl;
        return "";
    }
    if (std::cin.eof())
        exit(0);
    if (input.find('\t') != input.npos)
        input = replaceTabsWithSpaces(input);
    return (input);
}

std::string Contact::read(InputType type) {

    switch (type) {
        case FIRST_NAME:
            return readInput(FNAME);
        case LAST_NAME:
            return readInput(LNAME);
        case NICK_NAME:
            return readInput(NNAME);
        case PHONE_NUMBER:
            return readInput(PNUMB);
        case DARKEST_SECRET:
            return readInput(DSECR);
        default:
            break;
    }
    return "";
}

Contact& Contact::setFirstName(std::string firstName) {
    this->firstName = firstName;
    return *this;
}

std::string Contact::getFirstName() const {
    return firstName;
}

Contact& Contact::setLastName(std::string lastName) {
    this->lastName = lastName;
    return *this;
}

std::string Contact::getLastName() const {
    return lastName;
}

Contact& Contact::setNickName(std::string nickName) {
    this->nickName = nickName;
    return *this;
}

std::string Contact::getNickName() const {
    return nickName;
}

Contact& Contact::setPhoneNumber(std::string phoneNumber) {
    this->phoneNumber = phoneNumber;
    return *this;
}

std::string Contact::getPhoneNumber() const {
    return phoneNumber;
}

Contact& Contact::setDarkestSecret(std::string darkestSecret) {
    this->darkestSecret = darkestSecret;
    return *this;
}

std::string Contact::getDarkestSecret() const {
    return darkestSecret;
}

Contact& Contact::setId(std::string id) {
    mId = id;
    return *this;
}

std::string Contact::getId() const {
    return mId;
}
