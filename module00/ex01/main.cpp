/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:15:12 by aaitelka          #+#    #+#             */
/*   Updated: 2024/11/19 15:35:43 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Decorator.hpp"
#include "PhoneBook.hpp"

static inline void error(std::string error) {
    std::cout << RED << error << RESET << std::endl;
}

static inline void info(std::string error) {
    std::cout << GREEN << error << RESET;
}

static inline bool isValid(char c) {
    return (c > '0' && c < '9');
}

std::string getFiled(Contact& contact, InputType field) {
    std::string input;
    do {
        input = contact.read(field);
    } while (input.empty());
    return input;
}

Contact& getContact(Contact& contact) {
    Decorator::getInstance().line(LINE).head("ADD new contact... :)").line(LINE);
    contact.setId(std::to_string(PhoneBook::getInstance().id + 1))
        .setFirstName(getFiled(contact, FIRST_NAME))
        .setLastName(getFiled(contact, LAST_NAME))
        .setNickName(getFiled(contact, NICK_NAME))
        .setPhoneNumber(getFiled(contact, PHONE_NUMBER))
        .setDarkestSecret(getFiled(contact, DARKEST_SECRET));
    return contact;
}

void search() {
    std::string     uid;

    int size = PhoneBook::getInstance().size;
    while (true) {
        info("Search contact by index ￫ ");
        std::getline(std::cin, uid);
        if (std::cin.eof())
            exit(0);
        if (uid.empty())
            break;
        if (!isValid(uid[0])) {
            error("Please enter a valid id [1..8]");
            continue ;
        } else if (std::atoll(uid.c_str()) > size) {
            std::cout << "You have " << size << " contact saved" << std::endl;
            continue ;
        }
        Contact contact = PhoneBook::getInstance().getContactById(uid);
        Decorator::getInstance()
            .println("", "")
            .println(FNAME + "\t: ", contact.getFirstName())
            .println(LNAME + "\t: ", contact.getLastName())
            .println(NNAME + "\t: ", contact.getNickName())
            .println(PNUMB + "\t: ", contact.getPhoneNumber())
            .println(DSECR + "\t: ", contact.getDarkestSecret());
        break ;
    }
}

void displayContacts() {

    int size = PhoneBook::getInstance().size;
    if (size == 0)
        return error("PhoneBook is empty :(");
    Contact *contacts = PhoneBook::getInstance().getContacts();
    Decorator::getInstance().line(45).fillHeader();
    for (int i = 0; i < size; i++)
        Decorator::getInstance().fillRow(contacts[i], i, size, 45);
    search();
}

void menu(std::string& item)
{
    Contact         contact;

    if (item.compare("ADD") == 0)
        PhoneBook::getInstance().addContact(getContact(contact));
    else if (item.compare("SEARCH") == 0)
        displayContacts();
    else if (item.compare("EXIT") == 0)
        exit(0);
}

int main() {
    std::string     item;

    Decorator::getInstance().line(LINE).head("Welcome to phonebook :)");
    while (true)
    {
        Decorator::getInstance().line(LINE).head("Menu |ADD|SEARCH|EXIT|").line(LINE);
        std::cout << BLUE "\nMenu ￫ " RESET;
        std::getline(std::cin, item);
        if (std::cin.eof())
            break ;
        menu(item);
    }
    return 0;
}
