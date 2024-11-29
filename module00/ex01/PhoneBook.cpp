/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:18:05 by aaitelka          #+#    #+#             */
/*   Updated: 2024/11/29 03:03:08 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : id(0), size(0)
{
}

PhoneBook& PhoneBook::getInstance() {
    static PhoneBook phoneBook;
    return phoneBook;
}

void PhoneBook::addContact(Contact contact) {
    if (size < CONTACTS_SIZE)
        size++;
    contacts[id++] = contact;
    if (id == CONTACTS_SIZE)
        id = 0;
}

Contact* PhoneBook::getContacts() {
    return this->contacts;
}

Contact& PhoneBook::getContactById(std::string& uid) {
    return getContacts()[std::atoi(uid.c_str()) - 1];
}

int PhoneBook::getId() const {
    return id + 1;
}

int PhoneBook::getSize() const {
    return size;
}
