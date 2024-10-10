/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:15:12 by aaitelka          #+#    #+#             */
/*   Updated: 2024/10/10 22:07:10 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "InputReader.hpp"
#include "Decorator.hpp"

static inline void error(std::string error) {
    std::cout << RED << error << RESET << std::endl;
}

static inline void info(std::string error) {
    std::cout << GREEN << error << RESET;
}

static inline bool isValid(char c) {
    return (c > '0' && c < '9');
}

static inline bool is_all_digits(std::string& str) {
    size_t          len;

    len = str.length();
    for (size_t i = 0; i < len; i++) {
        if (!isdigit(str[i]))
            return false;
    }
    return true;
}

void addContact() {
    InputReader     reader;
    Contact         contact;
    std::string     phone;

    Decorator::getInstance().line(LINE).head("ADD new contact... :)").line(LINE);
    contact.setId(std::to_string(PhoneBook::getInstance().id + 1))
        .setFirstName(reader.read(FIRST_NAME))
        .setLastName(reader.read(LAST_NAME))
        .setNickName(reader.read(NICK_NAME))
        .setPhoneNumber(reader.read(PHONE_NUMBER))
        .setDarkestSecret(reader.read(DARKEST_SECRET));
    if (contact.hasEmptyOrBlankFiled())
    {
        error("Please fill all fileds\n");
        return ;
    }
    phone = contact.getPhoneNumber();
    if (!is_all_digits(phone)) {
        error("Phone number must be digits only\n");
        return ;
    }
    PhoneBook::getInstance().addContact(contact);
}

void search() {
    Contact         contact;
    std::string     uid;
    int             size;

    size = PhoneBook::getInstance().size;
    while (true) {
        info("Search contact by index ￫ ");
        std::getline(std::cin, uid);
        if (std::cin.eof())
            exit(0);
        if (!isValid(uid[0])) {
            error("Please enter a valid id [1..8]");
            continue ;
        } else if (std::atoll(uid.c_str()) > size) {
            std::cout << "You have " << size << " contact saved" << std::endl;
            continue ;
        }
        contact = PhoneBook::getInstance().getContactById(uid);
        Decorator::getInstance()
            .println(FNAME + "\t: ", contact.getFirstName())
            .println(LNAME + "\t: ", contact.getLastName())
            .println(NNAME + "\t: ", contact.getNickName())
            .println(PNUMB + "\t: ", contact.getPhoneNumber())
            .println(DSECR + "\t: ", contact.getDarkestSecret());
        break ;
    }
}

void displayContacts() {
    Contact         *contacts;
    int             size;

    size = PhoneBook::getInstance().size;
    contacts = PhoneBook::getInstance().getContacts();
    if (size == 0) {
        error("PhoneBook is empty :(");
        return ;
    }
    Decorator::getInstance().line(45).fillHeader();
    for (int i = 0; i < size; i++)
        Decorator::getInstance().fillRow(contacts[i], i, size, 45);
    search();
}

void menu(std::string& item)
{
    if (item.compare("ADD") == 0)
        addContact();
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
