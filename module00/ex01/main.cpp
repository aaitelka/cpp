/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:15:12 by aaitelka          #+#    #+#             */
/*   Updated: 2024/10/09 09:08:32 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "InputReader.hpp"
#include "Decorator.hpp"

const int LINE = 65;

static inline void error(std::string error) {
    std::cout << RED << error << RESET << std::endl;
}

static inline bool isValid(char c) {
    return (!isdigit(c) || (isdigit(c) && (c < '1' || c > '8')));
}

inline bool is_all_digits(std::string& str) {
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

    Decorator::getInstance().head("ADD new contact... :)", LINE);
    contact.setId(std::to_string(PhoneBook::getInstance().id + 1))
    .setFirstName(reader.read(FIRST_NAME))
    .setLastName(reader.read(LAST_NAME))
    .setNickName(reader.read(NICK_NAME))
    .setPhoneNumber(reader.read(PHONE_NUMBER))
    .setDarkestSecret(reader.read(DARKEST_SECRET));
    if (contact.hasEmptyOrBlankFiled())
    {
        error("Please fill all fileds\n");
        Decorator::getInstance().line(LINE);
        return ;
    }
    phone = contact.getPhoneNumber();
    if (!is_all_digits(phone)) {
        error("Phone number must be digits only\n");
        Decorator::getInstance().line(LINE);
        return ;
    }   
    Decorator::getInstance().line(LINE);
    PhoneBook::getInstance().addContact(contact);
}

void search()
{
    Contact         contact;
    std::string     uid;

    while (true) {
        if (std::cin.eof())
            break ;
        std::cout << "\nSearch by contact id ￫ ";
        std::getline(std::cin, uid);
        if (isValid(uid[0])) {
            std::cout << "Please enter a valid id [1..8]";
            continue ;
        } else if (std::stoi(uid) > PhoneBook::getInstance().size) {
            std::cout << "You have just " << PhoneBook::getInstance().size \
					  << " contact saved" << std::endl;
            continue ;
        }
        contact = PhoneBook::getInstance().getContactById(uid);
        Decorator::getInstance().line(LINE)
            .println(FNAME + "\t: ", contact.getFirstName())
            .println(LNAME + "\t: ", contact.getLastName())
            .println(NNAME + "\t: ", contact.getNickName())
            .println(PNUMB + "\t: ", contact.getPhoneNumber())
            .println(DSECR + "\t: ", contact.getDarkestSecret())
            .line(LINE);
        break ;
    }
}

void displayContacts() {

    Contact     *contacts;

    contacts = PhoneBook::getInstance().getContacts();
    if (PhoneBook::getInstance().size == 0) {
        std::cout << "PhoneBook Empty... :(" << std::endl;
        Decorator::getInstance().line(LINE);
        return ;
    }
    Decorator::getInstance().fillHeader();
    for (int i = 0; i < PhoneBook::getInstance().size; i++)
        Decorator::getInstance()
			.fillRow(contacts[i], i, PhoneBook::getInstance().size, 45);
    search();
}

void menu(std::string& item)
{
    Decorator::getInstance().line(LINE);
    if (item.compare("ADD") == 0)
        addContact();
    else if (item.compare("SEARCH") == 0)
        displayContacts();
    else if (item.compare("EXIT") == 0)
        exit(0);
}

int main() {
    std::string item;
    
    Decorator::getInstance();
    
    Decorator::getInstance().line(LINE).head("Welcome to phonebook :)", LINE);
    while (true)
    {
        Decorator::getInstance().head("Menu |ADD|SEARCH|EXIT|", LINE);
        std::cout << BLUE "\nMenu ￫ " RESET;
        std::getline(std::cin, item);
        if (std::cin.eof())
            break ;
        menu(item);
    }
    return 0;
}
