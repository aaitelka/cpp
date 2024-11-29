/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:18:09 by aaitelka          #+#    #+#             */
/*   Updated: 2024/11/29 02:53:28 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_hpp
#define PhoneBook_hpp

#include "Contact.hpp"

#define CONTACTS_SIZE 8

class PhoneBook {
    
private:
    int             id;
    int             size;
    Contact         contacts[CONTACTS_SIZE];
    PhoneBook();

public:
    static PhoneBook& getInstance();
    void            addContact(Contact contact);
    Contact*        getContacts();
    Contact&        getContactById(std::string& uid);
    int             getId() const;
    int             getSize() const;
};

#endif
