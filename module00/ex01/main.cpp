/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:15:12 by aaitelka          #+#    #+#             */
/*   Updated: 2024/11/29 03:29:29 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Decorator.hpp"
#include "PhoneBook.hpp"
#include "InputReader.hpp"
#include <sstream>

static inline bool inRange(char c) {
    return (c > '0' && c < '9');
}

static inline void error(std::string error) {
    std::cout << RED << error << RESET << std::endl;
}

static inline void info(std::string error) {
    std::cout << GREEN << error << RESET;
}

Contact readFileds() {
    Contact             contact;
    InputReader         reader;
    std::stringstream   ss;

    Decorator::getInstance().head("ADD new contact... :)", true);
    ss << PhoneBook::getInstance().getId();
    contact.setId(ss.str());
    for (int i = 0; i < 5; i++) {   
        reader.read(contact, (Fields)i);
    }
    return contact;
}

void search() {
    std::string     uid;

    int size = PhoneBook::getInstance().getSize();
    while (true) {
        info("Search contact by index ￫ ");
        std::getline(std::cin, uid);
        if (std::cin.eof())
            exit(0);
        if (uid.empty())
            break;
        if (!inRange(uid[0]) || uid.length() > 1) {
            error("Please enter a valid id [1..8]");
            continue ;
        }
        if (std::atoi(uid.c_str()) > size) {
            std::cout << "You have " << size << " contact saved" << std::endl;
            continue ;
        }
        Contact contact = PhoneBook::getInstance().getContactById(uid);
        Decorator::getInstance()
            .println("", "")
            .println(FNAME + "\t\t: ", contact.getFirstName())
            .println(LNAME + "\t\t: ", contact.getLastName())
            .println(NNAME + "\t\t: ", contact.getNickName())
            .println(PNUMB + "\t\t: ", contact.getPhoneNumber())
            .println(DSECR + "\t\t: ", contact.getDarkestSecret())
            .println("", "");
        break ;
    }
}

void displayContacts() {

    int size = PhoneBook::getInstance().getSize();
    if (size == 0)
        return error("PhoneBook is empty :(");
    Contact *contacts = PhoneBook::getInstance().getContacts();
    Decorator::getInstance().line(TW).fillHeader();
    for (int i = 0; i < size; i++)
        Decorator::getInstance().fillRow(contacts[i], i, size, TW);
    search();
}

void menu(std::string& item)
{
    if (item == "ADD")
        PhoneBook::getInstance().addContact(readFileds());
    else if (item == "SEARCH")
        displayContacts();
    else if (item == "EXIT")
        exit(0);
}

int main() {
    std::string     item;

    Decorator::getInstance().head("Welcome to phonebook :)", false);
    while (true)
    {
        Decorator::getInstance().head("Menu |ADD|SEARCH|EXIT|", true);
        std::cout << BLUE "\nMenu ￫ " RESET;
        std::getline(std::cin, item);
        if (std::cin.eof())
            break ;
        menu(item);
    }
    return 0;
}
