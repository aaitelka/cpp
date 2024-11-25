/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:12:16 by aaitelka          #+#    #+#             */
/*   Updated: 2024/11/21 14:52:21 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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
