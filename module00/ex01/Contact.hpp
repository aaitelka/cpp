/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:12:20 by aaitelka          #+#    #+#             */
/*   Updated: 2024/11/24 19:13:57 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Contact_hpp
#define Contact_hpp

#include <iostream>
#include <string>
#include <iomanip>

#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define BLUE        "\033[34m"
#define RESET       "\033[0m"

const std::string   INDEX = "index";
const std::string   FNAME = "first name";
const std::string   LNAME = "last name";
const std::string   NNAME = "nick name";
const std::string   PNUMB = "phone number";
const std::string   DSECR = "darkest secret";

class Contact {

private:
    std::string     mId;
    std::string     firstName;
    std::string     lastName;
    std::string     nickName;
    std::string     phoneNumber;
    std::string     darkestSecret;

public:
    Contact&        setFirstName(std::string firstName);
    std::string     getFirstName() const;
    Contact&        setLastName(std::string lastName);
    std::string     getLastName() const;
    Contact&        setNickName(std::string nickName);
    std::string     getNickName() const;
    Contact&        setPhoneNumber(std::string phoneNumber);
    std::string     getPhoneNumber() const;
    Contact&        setDarkestSecret(std::string darkestSecret);
    std::string     getDarkestSecret() const;
    Contact&        setId(std::string id);
    std::string     getId() const;
};

#endif
