/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:18:09 by aaitelka          #+#    #+#             */
/*   Updated: 2024/11/14 20:04:09 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_hpp
#define PhoneBook_hpp

#include "Contact.hpp"

#define CONTACTS_SIZE 8

class PhoneBook {
    
private:
    Contact         contacts[CONTACTS_SIZE];
    PhoneBook();

public:
    static PhoneBook& getInstance();
    int             id;
    int             size;
    void            addContact(Contact& contact);
    Contact*        getContacts();
    Contact&        getContactById(std::string& uid);
};

#endif
