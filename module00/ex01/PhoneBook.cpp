/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:18:05 by aaitelka          #+#    #+#             */
/*   Updated: 2024/10/10 22:08:23 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : id(0), size(0)
{
}

PhoneBook& PhoneBook::getInstance() {
    static PhoneBook phoneBook;
    return phoneBook;
}

void PhoneBook::addContact(Contact& contact) {
    if (size < 8)
        size++;
    this->contacts[id++] = contact;
    if (id == 8)
        id = 0;
}

Contact* PhoneBook::getContacts() {
    return this->contacts;
}

Contact& PhoneBook::getContactById(std::string uid) {
    return getContacts()[std::atoll(uid.c_str()) - 1];
}
