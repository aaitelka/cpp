/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:12:20 by aaitelka          #+#    #+#             */
/*   Updated: 2024/11/25 23:31:49 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Contact_hpp
#define Contact_hpp

#include <string>
#include <iomanip>

class Contact {

private:
    std::string     mId;
    std::string     firstName;
    std::string     lastName;
    std::string     nickName;
    std::string     phoneNumber;
    std::string     darkestSecret;

public:
    void            setFirstName(std::string firstName);
    std::string     getFirstName() const;
    void            setLastName(std::string lastName);
    std::string     getLastName() const;
    void            setNickName(std::string nickName);
    std::string     getNickName() const;
    void            setPhoneNumber(std::string phoneNumber);
    std::string     getPhoneNumber() const;
    void            setDarkestSecret(std::string darkestSecret);
    std::string     getDarkestSecret() const;
    void            setId(std::string id);
    std::string     getId() const;
};

#endif
