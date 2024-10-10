/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:18:09 by aaitelka          #+#    #+#             */
/*   Updated: 2024/10/10 22:10:04 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_hpp
#define PhoneBook_hpp

#include "Contact.hpp"

class PhoneBook {
    
private:
    Contact         contacts[8];
    PhoneBook();

public:
    static PhoneBook& getInstance();
    int             id;
    int             size;
    void            addContact(Contact& contact);
    Contact*        getContacts();
    Contact&        getContactById(std::string uid);
};

#endif
