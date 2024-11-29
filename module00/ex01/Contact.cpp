/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:12:16 by aaitelka          #+#    #+#             */
/*   Updated: 2024/11/29 03:16:37 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string firstName) {
    this->firstName = firstName;
}

std::string Contact::getFirstName() const {
    return firstName;
}

void Contact::setLastName(std::string lastName) {
    this->lastName = lastName;
}

std::string Contact::getLastName() const {
    return lastName;
}

void Contact::setNickName(std::string nickName) {
    this->nickName = nickName;
}

std::string Contact::getNickName() const {
    return nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
    this->phoneNumber = phoneNumber;
}

std::string Contact::getPhoneNumber() const {
    return phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
    this->darkestSecret = darkestSecret;
}

std::string Contact::getDarkestSecret() const {
    return darkestSecret;
}

void Contact::setId(std::string id) {
    mId = id;
}

std::string Contact::getId() const {
    return mId;
}
