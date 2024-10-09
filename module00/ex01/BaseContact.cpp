/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BaseContact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:33:55 by aaitelka          #+#    #+#             */
/*   Updated: 2024/10/07 11:39:25 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BaseContact.hpp"

BaseContact& BaseContact::setFirstName(std::string firstName) {
    this->firstName = firstName;
    return *this;
}

std::string BaseContact::getFirstName() const {
    return firstName;
}

BaseContact& BaseContact::setLastName(std::string lastName) {
    this->lastName = lastName;
    return *this;
}

std::string BaseContact::getLastName() const {
    return lastName;
}

BaseContact& BaseContact::setNickName(std::string nickName) {
    this->nickName = nickName;
    return *this;
}

std::string BaseContact::getNickName() const {
    return nickName;
}

BaseContact& BaseContact::setPhoneNumber(std::string phoneNumber) {
    this->phoneNumber = phoneNumber;
    return *this;
}

std::string BaseContact::getPhoneNumber() const {
    return phoneNumber;
}

BaseContact& BaseContact::setDarkestSecret(std::string darkestSecret) {
    this->darkestSecret = darkestSecret;
    return *this;
}

std::string BaseContact::getDarkestSecret() const {
    return darkestSecret;
}
